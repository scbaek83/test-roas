/********************************************************************************
** Form generated from reading UI file 'setportnamedialog.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SETPORTNAMEDIALOG_H
#define UI_SETPORTNAMEDIALOG_H

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

class Ui_SetPortNameDialog
{
public:
    QGridLayout *gridLayout_2;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QLineEdit *editPortName3;
    QLineEdit *editPortName4;
    QLabel *label_5;
    QLineEdit *editPortName5;
    QLabel *label_4;
    QLineEdit *editPortName1;
    QLabel *label;
    QLabel *label_3;
    QLabel *label_6;
    QLineEdit *editPortName6;
    QLabel *label_9;
    QLabel *label_2;
    QLineEdit *editPortName2;
    QLineEdit *editPortName8;
    QLabel *label_7;
    QLineEdit *editPortName7;
    QLineEdit *editPortName9;
    QLabel *label_8;
    QLabel *label_13;
    QLabel *label_14;
    QLineEdit *editPortName14;
    QLabel *label_11;
    QLabel *label_15;
    QLineEdit *editPortName15;
    QLabel *label_10;
    QLineEdit *editPortName11;
    QLineEdit *editPortName12;
    QLineEdit *editPortName10;
    QLabel *label_12;
    QLineEdit *editPortName13;
    QLineEdit *editPortName16;
    QSpacerItem *verticalSpacer;
    QLabel *label_16;
    QSpacerItem *verticalSpacer_2;
    QSpacerItem *verticalSpacer_3;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *SetPortNameDialog)
    {
        if (SetPortNameDialog->objectName().isEmpty())
            SetPortNameDialog->setObjectName(QStringLiteral("SetPortNameDialog"));
        SetPortNameDialog->resize(908, 562);
        gridLayout_2 = new QGridLayout(SetPortNameDialog);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        groupBox = new QGroupBox(SetPortNameDialog);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        QFont font;
        font.setFamily(QStringLiteral("Arial"));
        font.setPointSize(10);
        font.setBold(true);
        font.setWeight(75);
        groupBox->setFont(font);
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        editPortName3 = new QLineEdit(groupBox);
        editPortName3->setObjectName(QStringLiteral("editPortName3"));
        editPortName3->setMaxLength(40);

        gridLayout->addWidget(editPortName3, 2, 1, 1, 1);

        editPortName4 = new QLineEdit(groupBox);
        editPortName4->setObjectName(QStringLiteral("editPortName4"));
        editPortName4->setMaxLength(40);

        gridLayout->addWidget(editPortName4, 3, 1, 1, 1);

        label_5 = new QLabel(groupBox);
        label_5->setObjectName(QStringLiteral("label_5"));

        gridLayout->addWidget(label_5, 5, 0, 1, 1);

        editPortName5 = new QLineEdit(groupBox);
        editPortName5->setObjectName(QStringLiteral("editPortName5"));
        editPortName5->setMaxLength(40);

        gridLayout->addWidget(editPortName5, 5, 1, 1, 1);

        label_4 = new QLabel(groupBox);
        label_4->setObjectName(QStringLiteral("label_4"));

        gridLayout->addWidget(label_4, 6, 0, 1, 1);

        editPortName1 = new QLineEdit(groupBox);
        editPortName1->setObjectName(QStringLiteral("editPortName1"));
        editPortName1->setMaxLength(40);

        gridLayout->addWidget(editPortName1, 0, 1, 1, 1);

        label = new QLabel(groupBox);
        label->setObjectName(QStringLiteral("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QStringLiteral("label_3"));

        gridLayout->addWidget(label_3, 2, 0, 1, 1);

        label_6 = new QLabel(groupBox);
        label_6->setObjectName(QStringLiteral("label_6"));

        gridLayout->addWidget(label_6, 3, 0, 1, 1);

        editPortName6 = new QLineEdit(groupBox);
        editPortName6->setObjectName(QStringLiteral("editPortName6"));
        editPortName6->setMaxLength(40);

        gridLayout->addWidget(editPortName6, 6, 1, 1, 1);

        label_9 = new QLabel(groupBox);
        label_9->setObjectName(QStringLiteral("label_9"));

        gridLayout->addWidget(label_9, 7, 0, 1, 1);

        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        editPortName2 = new QLineEdit(groupBox);
        editPortName2->setObjectName(QStringLiteral("editPortName2"));
        editPortName2->setMaxLength(40);

        gridLayout->addWidget(editPortName2, 1, 1, 1, 1);

        editPortName8 = new QLineEdit(groupBox);
        editPortName8->setObjectName(QStringLiteral("editPortName8"));
        editPortName8->setMaxLength(40);

        gridLayout->addWidget(editPortName8, 8, 1, 1, 1);

        label_7 = new QLabel(groupBox);
        label_7->setObjectName(QStringLiteral("label_7"));

        gridLayout->addWidget(label_7, 8, 0, 1, 1);

        editPortName7 = new QLineEdit(groupBox);
        editPortName7->setObjectName(QStringLiteral("editPortName7"));
        editPortName7->setMaxLength(40);

        gridLayout->addWidget(editPortName7, 7, 1, 1, 1);

        editPortName9 = new QLineEdit(groupBox);
        editPortName9->setObjectName(QStringLiteral("editPortName9"));
        editPortName9->setMaxLength(40);

        gridLayout->addWidget(editPortName9, 10, 1, 1, 1);

        label_8 = new QLabel(groupBox);
        label_8->setObjectName(QStringLiteral("label_8"));

        gridLayout->addWidget(label_8, 10, 0, 1, 1);

        label_13 = new QLabel(groupBox);
        label_13->setObjectName(QStringLiteral("label_13"));

        gridLayout->addWidget(label_13, 15, 0, 1, 1);

        label_14 = new QLabel(groupBox);
        label_14->setObjectName(QStringLiteral("label_14"));

        gridLayout->addWidget(label_14, 16, 0, 1, 1);

        editPortName14 = new QLineEdit(groupBox);
        editPortName14->setObjectName(QStringLiteral("editPortName14"));
        editPortName14->setMaxLength(40);

        gridLayout->addWidget(editPortName14, 16, 1, 1, 1);

        label_11 = new QLabel(groupBox);
        label_11->setObjectName(QStringLiteral("label_11"));

        gridLayout->addWidget(label_11, 13, 0, 1, 1);

        label_15 = new QLabel(groupBox);
        label_15->setObjectName(QStringLiteral("label_15"));

        gridLayout->addWidget(label_15, 17, 0, 1, 1);

        editPortName15 = new QLineEdit(groupBox);
        editPortName15->setObjectName(QStringLiteral("editPortName15"));
        editPortName15->setMaxLength(40);

        gridLayout->addWidget(editPortName15, 17, 1, 1, 1);

        label_10 = new QLabel(groupBox);
        label_10->setObjectName(QStringLiteral("label_10"));

        gridLayout->addWidget(label_10, 12, 0, 1, 1);

        editPortName11 = new QLineEdit(groupBox);
        editPortName11->setObjectName(QStringLiteral("editPortName11"));
        editPortName11->setMaxLength(40);

        gridLayout->addWidget(editPortName11, 12, 1, 1, 1);

        editPortName12 = new QLineEdit(groupBox);
        editPortName12->setObjectName(QStringLiteral("editPortName12"));
        editPortName12->setMaxLength(40);

        gridLayout->addWidget(editPortName12, 13, 1, 1, 1);

        editPortName10 = new QLineEdit(groupBox);
        editPortName10->setObjectName(QStringLiteral("editPortName10"));
        editPortName10->setMaxLength(40);

        gridLayout->addWidget(editPortName10, 11, 1, 1, 1);

        label_12 = new QLabel(groupBox);
        label_12->setObjectName(QStringLiteral("label_12"));

        gridLayout->addWidget(label_12, 11, 0, 1, 1);

        editPortName13 = new QLineEdit(groupBox);
        editPortName13->setObjectName(QStringLiteral("editPortName13"));
        editPortName13->setMaxLength(40);

        gridLayout->addWidget(editPortName13, 15, 1, 1, 1);

        editPortName16 = new QLineEdit(groupBox);
        editPortName16->setObjectName(QStringLiteral("editPortName16"));
        editPortName16->setMaxLength(40);

        gridLayout->addWidget(editPortName16, 18, 1, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 4, 1, 1, 1);

        label_16 = new QLabel(groupBox);
        label_16->setObjectName(QStringLiteral("label_16"));

        gridLayout->addWidget(label_16, 18, 0, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_2, 9, 1, 1, 1);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_3, 14, 1, 1, 1);


        gridLayout_2->addWidget(groupBox, 0, 0, 1, 1);

        buttonBox = new QDialogButtonBox(SetPortNameDialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        gridLayout_2->addWidget(buttonBox, 1, 0, 1, 1);


        retranslateUi(SetPortNameDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), SetPortNameDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), SetPortNameDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(SetPortNameDialog);
    } // setupUi

    void retranslateUi(QDialog *SetPortNameDialog)
    {
        SetPortNameDialog->setWindowTitle(QApplication::translate("SetPortNameDialog", "Dialog", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("SetPortNameDialog", "\354\261\204\353\204\220 \354\235\264\353\246\204", Q_NULLPTR));
        label_5->setText(QApplication::translate("SetPortNameDialog", "Ch.5", Q_NULLPTR));
        label_4->setText(QApplication::translate("SetPortNameDialog", "Ch.6", Q_NULLPTR));
        label->setText(QApplication::translate("SetPortNameDialog", "Ch.1", Q_NULLPTR));
        label_3->setText(QApplication::translate("SetPortNameDialog", "Ch.3", Q_NULLPTR));
        label_6->setText(QApplication::translate("SetPortNameDialog", "Ch.4", Q_NULLPTR));
        label_9->setText(QApplication::translate("SetPortNameDialog", "Ch.7", Q_NULLPTR));
        label_2->setText(QApplication::translate("SetPortNameDialog", "Ch.2", Q_NULLPTR));
        label_7->setText(QApplication::translate("SetPortNameDialog", "Ch.8", Q_NULLPTR));
        label_8->setText(QApplication::translate("SetPortNameDialog", "Ch.9", Q_NULLPTR));
        label_13->setText(QApplication::translate("SetPortNameDialog", "Ch.13", Q_NULLPTR));
        label_14->setText(QApplication::translate("SetPortNameDialog", "Ch.14", Q_NULLPTR));
        label_11->setText(QApplication::translate("SetPortNameDialog", "Ch.12", Q_NULLPTR));
        label_15->setText(QApplication::translate("SetPortNameDialog", "Ch.15", Q_NULLPTR));
        label_10->setText(QApplication::translate("SetPortNameDialog", "Ch.11", Q_NULLPTR));
        label_12->setText(QApplication::translate("SetPortNameDialog", "Ch.10", Q_NULLPTR));
        label_16->setText(QApplication::translate("SetPortNameDialog", "Ch.16", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class SetPortNameDialog: public Ui_SetPortNameDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SETPORTNAMEDIALOG_H
