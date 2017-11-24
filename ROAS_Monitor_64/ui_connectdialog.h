/********************************************************************************
** Form generated from reading UI file 'connectdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONNECTDIALOG_H
#define UI_CONNECTDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_ConnectDialog
{
public:
    QGridLayout *gridLayout;
    QComboBox *cbCom;
    QPushButton *btnConnect;

    void setupUi(QDialog *ConnectDialog)
    {
        if (ConnectDialog->objectName().isEmpty())
            ConnectDialog->setObjectName(QStringLiteral("ConnectDialog"));
        ConnectDialog->resize(236, 58);
        gridLayout = new QGridLayout(ConnectDialog);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        cbCom = new QComboBox(ConnectDialog);
        cbCom->setObjectName(QStringLiteral("cbCom"));

        gridLayout->addWidget(cbCom, 0, 0, 1, 1);

        btnConnect = new QPushButton(ConnectDialog);
        btnConnect->setObjectName(QStringLiteral("btnConnect"));

        gridLayout->addWidget(btnConnect, 0, 1, 1, 1);


        retranslateUi(ConnectDialog);

        QMetaObject::connectSlotsByName(ConnectDialog);
    } // setupUi

    void retranslateUi(QDialog *ConnectDialog)
    {
        ConnectDialog->setWindowTitle(QApplication::translate("ConnectDialog", "USB \354\227\260\352\262\260", Q_NULLPTR));
        btnConnect->setText(QApplication::translate("ConnectDialog", "\354\227\260\352\262\260", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class ConnectDialog: public Ui_ConnectDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONNECTDIALOG_H
