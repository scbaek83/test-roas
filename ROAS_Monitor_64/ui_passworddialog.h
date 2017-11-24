/********************************************************************************
** Form generated from reading UI file 'passworddialog.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PASSWORDDIALOG_H
#define UI_PASSWORDDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_PasswordDialog
{
public:
    QGridLayout *gridLayout;
    QLabel *label;
    QLineEdit *editPassword;
    QPushButton *btnOk;

    void setupUi(QDialog *PasswordDialog)
    {
        if (PasswordDialog->objectName().isEmpty())
            PasswordDialog->setObjectName(QStringLiteral("PasswordDialog"));
        PasswordDialog->resize(279, 96);
        gridLayout = new QGridLayout(PasswordDialog);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        label = new QLabel(PasswordDialog);
        label->setObjectName(QStringLiteral("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        editPassword = new QLineEdit(PasswordDialog);
        editPassword->setObjectName(QStringLiteral("editPassword"));
        editPassword->setMaxLength(10);

        gridLayout->addWidget(editPassword, 0, 1, 1, 1);

        btnOk = new QPushButton(PasswordDialog);
        btnOk->setObjectName(QStringLiteral("btnOk"));

        gridLayout->addWidget(btnOk, 1, 1, 1, 1);


        retranslateUi(PasswordDialog);

        QMetaObject::connectSlotsByName(PasswordDialog);
    } // setupUi

    void retranslateUi(QDialog *PasswordDialog)
    {
        PasswordDialog->setWindowTitle(QApplication::translate("PasswordDialog", "\353\271\204\353\260\200\353\262\210\355\230\270 \354\236\205\353\240\245", Q_NULLPTR));
        label->setText(QApplication::translate("PasswordDialog", "Password", Q_NULLPTR));
        btnOk->setText(QApplication::translate("PasswordDialog", "OK", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class PasswordDialog: public Ui_PasswordDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PASSWORDDIALOG_H
