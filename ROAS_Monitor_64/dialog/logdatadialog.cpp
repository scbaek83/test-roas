#include "logdatadialog.h"
#include "ui_logdatadialog.h"

LogDataDialog::LogDataDialog(Device *device, QWidget *parent) :
    QDialog(parent),
    m_device(device),
    ui(new Ui::LogDataDialog)
{
    ui->setupUi(this);

    setWindowTitle(tr("Log Dialog"));
}

LogDataDialog::~LogDataDialog()
{
    delete ui;
}

void LogDataDialog::on_btnLoad_clicked()
{
    m_device->sendReqLogData();
    m_strLog.clear();
}

void LogDataDialog::on_btnSave_clicked()
{
    QString dirPath = QApplication::applicationDirPath();
    QString fileName = QFileDialog::getSaveFileName(this, tr("Save file"), dirPath, tr("text (*.txt)"));

    QFile file(fileName);
    if (!file.open(QIODevice::WriteOnly | QIODevice::Append)) {
        return;
    }

    qDebug() << m_strLog;
    QTextStream out(&file);
    out << m_strLog;

    file.close();
}

void LogDataDialog::on_btnClear_clicked()
{
    ui->editLog->clear();
}

void LogDataDialog::slotSetLogData(int currentIndex, int maxIndex, char *log)
{
    ui->labelCnt->setText(QString::number(currentIndex));
    ui->labelMaxCnt->setText(QString::number(maxIndex));
    m_strLog += QString(log) + "\r\n";
    ui->editLog->setText(m_strLog);

}

void LogDataDialog::on_btnDelete_clicked()
{
    m_device->sendReqClearLog();
}
