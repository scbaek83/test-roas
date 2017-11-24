#include "aboutdialog.h"
#include "ui_aboutdialog.h"

AboutDialog::AboutDialog(QString versionInfo, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AboutDialog)
{
    ui->setupUi(this);

    setWindowTitle(tr("Infomation"));
    ui->label->setText(versionInfo);
}

AboutDialog::~AboutDialog()
{
    delete ui;
}
