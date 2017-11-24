#include "alarmdialog.h"
#include "ui_alarmdialog.h"

AlarmDialog::AlarmDialog(QString alarmInfo, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AlarmDialog)
{
    ui->setupUi(this);

    setWindowTitle(tr("Alarm Dialog"));
    setWindowIcon(QIcon(":/icon/image/exclamation.png"));

    setLabelText(alarmInfo);
}

AlarmDialog::~AlarmDialog()
{
    delete ui;
}

void AlarmDialog::setLabelText(QString strAlarmInfo)
{
    ui->label->setText(strAlarmInfo);
}
