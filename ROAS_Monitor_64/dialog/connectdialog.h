#ifndef CONNECTDIALOG_H
#define CONNECTDIALOG_H

#include <QDialog>
#include "settings.h"

namespace Ui {
class ConnectDialog;
}

class ConnectDialog : public QDialog
{
    Q_OBJECT

public:
    explicit ConnectDialog(int *com, QWidget *parent = 0);
    ~ConnectDialog();

protected:
    void accept();

private slots:
    void on_btnConnect_clicked();

private:
    Ui::ConnectDialog *ui;

    void initUI();

    int *m_com;
};

#endif // CONNECTDIALOG_H
