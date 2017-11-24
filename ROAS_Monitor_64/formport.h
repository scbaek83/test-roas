#ifndef FORMPORT_H
#define FORMPORT_H

#include <QWidget>

namespace Ui {
class FormPort;
}

class FormPort : public QWidget
{
    Q_OBJECT

public:
    explicit FormPort(QWidget *parent = 0);
    ~FormPort();

    void setPortNum(int ch);
    void setPortName(QString &name);
    void setValue(double value);
    void setChangeover(int select, int alarm);
    void setSelectAutoManual(int select);

private slots:
    void on_btnMain_clicked();
    void on_btnSub_clicked();
    void on_btnAuto_clicked();
    void on_btnManual_clicked();

signals:
    void sigBtnMain(int portNum);
    void sigBtnSub(int portNum);
    void sigBtnAuto(int portNum);
    void sigBtnManual(int portNum);

private:
    Ui::FormPort *ui;

    int m_portNum;
};

#endif // FORMPORT_H
