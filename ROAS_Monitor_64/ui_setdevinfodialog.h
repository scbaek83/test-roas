/********************************************************************************
** Form generated from reading UI file 'setdevinfodialog.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SETDEVINFODIALOG_H
#define UI_SETDEVINFODIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QSpacerItem>

QT_BEGIN_NAMESPACE

class Ui_SetDevInfoDialog
{
public:
    QGridLayout *gridLayout_4;
    QLabel *label_6;
    QLineEdit *editDevName;
    QSpacerItem *verticalSpacer;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QLineEdit *editIP;
    QLabel *label;
    QLineEdit *editSM;
    QLabel *label_4;
    QLineEdit *editDNS;
    QLabel *label_2;
    QLabel *label_3;
    QLineEdit *editGW;
    QSpacerItem *verticalSpacer_2;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout_3;
    QLineEdit *editIP_2;
    QLabel *label_10;
    QLabel *label_13;
    QLineEdit *editSM_2;
    QLabel *label_12;
    QLineEdit *editGW_2;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *SetDevInfoDialog)
    {
        if (SetDevInfoDialog->objectName().isEmpty())
            SetDevInfoDialog->setObjectName(QStringLiteral("SetDevInfoDialog"));
        SetDevInfoDialog->resize(319, 397);
        gridLayout_4 = new QGridLayout(SetDevInfoDialog);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        label_6 = new QLabel(SetDevInfoDialog);
        label_6->setObjectName(QStringLiteral("label_6"));

        gridLayout_4->addWidget(label_6, 0, 0, 1, 1);

        editDevName = new QLineEdit(SetDevInfoDialog);
        editDevName->setObjectName(QStringLiteral("editDevName"));

        gridLayout_4->addWidget(editDevName, 0, 1, 1, 1);

        verticalSpacer = new QSpacerItem(20, 10, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout_4->addItem(verticalSpacer, 1, 1, 1, 1);

        groupBox = new QGroupBox(SetDevInfoDialog);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        editIP = new QLineEdit(groupBox);
        editIP->setObjectName(QStringLiteral("editIP"));

        gridLayout->addWidget(editIP, 0, 1, 1, 1);

        label = new QLabel(groupBox);
        label->setObjectName(QStringLiteral("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        editSM = new QLineEdit(groupBox);
        editSM->setObjectName(QStringLiteral("editSM"));

        gridLayout->addWidget(editSM, 2, 1, 1, 1);

        label_4 = new QLabel(groupBox);
        label_4->setObjectName(QStringLiteral("label_4"));

        gridLayout->addWidget(label_4, 3, 0, 1, 1);

        editDNS = new QLineEdit(groupBox);
        editDNS->setObjectName(QStringLiteral("editDNS"));

        gridLayout->addWidget(editDNS, 3, 1, 1, 1);

        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QStringLiteral("label_3"));

        gridLayout->addWidget(label_3, 2, 0, 1, 1);

        editGW = new QLineEdit(groupBox);
        editGW->setObjectName(QStringLiteral("editGW"));

        gridLayout->addWidget(editGW, 1, 1, 1, 1);


        gridLayout_4->addWidget(groupBox, 2, 0, 1, 2);

        verticalSpacer_2 = new QSpacerItem(20, 10, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout_4->addItem(verticalSpacer_2, 3, 1, 1, 1);

        groupBox_2 = new QGroupBox(SetDevInfoDialog);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        gridLayout_3 = new QGridLayout(groupBox_2);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        editIP_2 = new QLineEdit(groupBox_2);
        editIP_2->setObjectName(QStringLiteral("editIP_2"));

        gridLayout_3->addWidget(editIP_2, 0, 1, 1, 1);

        label_10 = new QLabel(groupBox_2);
        label_10->setObjectName(QStringLiteral("label_10"));

        gridLayout_3->addWidget(label_10, 0, 0, 1, 1);

        label_13 = new QLabel(groupBox_2);
        label_13->setObjectName(QStringLiteral("label_13"));

        gridLayout_3->addWidget(label_13, 2, 0, 1, 1);

        editSM_2 = new QLineEdit(groupBox_2);
        editSM_2->setObjectName(QStringLiteral("editSM_2"));

        gridLayout_3->addWidget(editSM_2, 2, 1, 1, 1);

        label_12 = new QLabel(groupBox_2);
        label_12->setObjectName(QStringLiteral("label_12"));

        gridLayout_3->addWidget(label_12, 1, 0, 1, 1);

        editGW_2 = new QLineEdit(groupBox_2);
        editGW_2->setObjectName(QStringLiteral("editGW_2"));

        gridLayout_3->addWidget(editGW_2, 1, 1, 1, 1);


        gridLayout_4->addWidget(groupBox_2, 4, 0, 1, 2);

        buttonBox = new QDialogButtonBox(SetDevInfoDialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        gridLayout_4->addWidget(buttonBox, 5, 0, 1, 2);


        retranslateUi(SetDevInfoDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), SetDevInfoDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), SetDevInfoDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(SetDevInfoDialog);
    } // setupUi

    void retranslateUi(QDialog *SetDevInfoDialog)
    {
        SetDevInfoDialog->setWindowTitle(QApplication::translate("SetDevInfoDialog", "\353\224\224\353\260\224\354\235\264\354\212\244 \354\240\225\353\263\264 \354\204\244\354\240\225", Q_NULLPTR));
        label_6->setText(QApplication::translate("SetDevInfoDialog", "\354\236\245\354\271\230\353\252\205", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("SetDevInfoDialog", "IP \354\240\225\353\263\264 1", Q_NULLPTR));
        editIP->setInputMask(QApplication::translate("SetDevInfoDialog", "000.000.000.000", Q_NULLPTR));
        label->setText(QApplication::translate("SetDevInfoDialog", "IP", Q_NULLPTR));
        editSM->setInputMask(QApplication::translate("SetDevInfoDialog", "000.000.000.000", Q_NULLPTR));
        label_4->setText(QApplication::translate("SetDevInfoDialog", "DNS", Q_NULLPTR));
        editDNS->setInputMask(QApplication::translate("SetDevInfoDialog", "000.000.000.000", Q_NULLPTR));
        label_2->setText(QApplication::translate("SetDevInfoDialog", "Gateway", Q_NULLPTR));
        label_3->setText(QApplication::translate("SetDevInfoDialog", "Subnet mask", Q_NULLPTR));
        editGW->setInputMask(QApplication::translate("SetDevInfoDialog", "000.000.000.000", Q_NULLPTR));
        groupBox_2->setTitle(QApplication::translate("SetDevInfoDialog", "IP \354\240\225\353\263\264 2", Q_NULLPTR));
        editIP_2->setInputMask(QApplication::translate("SetDevInfoDialog", "000.000.000.000", Q_NULLPTR));
        label_10->setText(QApplication::translate("SetDevInfoDialog", "IP", Q_NULLPTR));
        label_13->setText(QApplication::translate("SetDevInfoDialog", "Subnet mask", Q_NULLPTR));
        editSM_2->setInputMask(QApplication::translate("SetDevInfoDialog", "000.000.000.000", Q_NULLPTR));
        label_12->setText(QApplication::translate("SetDevInfoDialog", "Gateway", Q_NULLPTR));
        editGW_2->setInputMask(QApplication::translate("SetDevInfoDialog", "000.000.000.000", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class SetDevInfoDialog: public Ui_SetDevInfoDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SETDEVINFODIALOG_H
