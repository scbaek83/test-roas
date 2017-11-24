/********************************************************************************
** Form generated from reading UI file 'adddevicedialog.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDDEVICEDIALOG_H
#define UI_ADDDEVICEDIALOG_H

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

QT_BEGIN_NAMESPACE

class Ui_AddDeviceDialog
{
public:
    QGridLayout *gridLayout_2;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QLabel *label;
    QLineEdit *editDeviceName;
    QLabel *label_2;
    QLineEdit *editIPAddress;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *AddDeviceDialog)
    {
        if (AddDeviceDialog->objectName().isEmpty())
            AddDeviceDialog->setObjectName(QStringLiteral("AddDeviceDialog"));
        AddDeviceDialog->resize(296, 152);
        gridLayout_2 = new QGridLayout(AddDeviceDialog);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        groupBox = new QGroupBox(AddDeviceDialog);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        label = new QLabel(groupBox);
        label->setObjectName(QStringLiteral("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        editDeviceName = new QLineEdit(groupBox);
        editDeviceName->setObjectName(QStringLiteral("editDeviceName"));

        gridLayout->addWidget(editDeviceName, 0, 1, 1, 1);

        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        editIPAddress = new QLineEdit(groupBox);
        editIPAddress->setObjectName(QStringLiteral("editIPAddress"));

        gridLayout->addWidget(editIPAddress, 1, 1, 1, 1);


        gridLayout_2->addWidget(groupBox, 0, 0, 1, 1);

        buttonBox = new QDialogButtonBox(AddDeviceDialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        gridLayout_2->addWidget(buttonBox, 1, 0, 1, 1);


        retranslateUi(AddDeviceDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), AddDeviceDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), AddDeviceDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(AddDeviceDialog);
    } // setupUi

    void retranslateUi(QDialog *AddDeviceDialog)
    {
        AddDeviceDialog->setWindowTitle(QApplication::translate("AddDeviceDialog", "Dialog", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("AddDeviceDialog", "\354\236\245\354\271\230 \354\266\224\352\260\200", Q_NULLPTR));
        label->setText(QApplication::translate("AddDeviceDialog", "\354\236\245\354\271\230\353\252\205", Q_NULLPTR));
        editDeviceName->setInputMask(QString());
        label_2->setText(QApplication::translate("AddDeviceDialog", "IP \354\243\274\354\206\214", Q_NULLPTR));
        editIPAddress->setInputMask(QApplication::translate("AddDeviceDialog", "999.999.999.999", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class AddDeviceDialog: public Ui_AddDeviceDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDDEVICEDIALOG_H
