/********************************************************************************
** Form generated from reading UI file 'alarmmaskdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ALARMMASKDIALOG_H
#define UI_ALARMMASKDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_AlarmMaskDialog
{
public:
    QGridLayout *gridLayout;
    QCheckBox *chkCh4;
    QCheckBox *chkCh16;
    QCheckBox *chkCh9;
    QDialogButtonBox *buttonBox;
    QCheckBox *chkCh3;
    QCheckBox *chkCh1;
    QCheckBox *chkCh2;
    QCheckBox *chkCh10;
    QCheckBox *chkCh11;
    QCheckBox *chkCh12;
    QCheckBox *chkCh7;
    QCheckBox *chkCh6;
    QCheckBox *chkCh5;
    QCheckBox *chkCh8;
    QCheckBox *chkCh13;
    QCheckBox *chkCh14;
    QCheckBox *chkCh15;
    QPushButton *btnAllch;

    void setupUi(QDialog *AlarmMaskDialog)
    {
        if (AlarmMaskDialog->objectName().isEmpty())
            AlarmMaskDialog->setObjectName(QStringLiteral("AlarmMaskDialog"));
        AlarmMaskDialog->resize(301, 302);
        gridLayout = new QGridLayout(AlarmMaskDialog);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        chkCh4 = new QCheckBox(AlarmMaskDialog);
        chkCh4->setObjectName(QStringLiteral("chkCh4"));

        gridLayout->addWidget(chkCh4, 4, 0, 1, 1);

        chkCh16 = new QCheckBox(AlarmMaskDialog);
        chkCh16->setObjectName(QStringLiteral("chkCh16"));

        gridLayout->addWidget(chkCh16, 8, 1, 1, 1);

        chkCh9 = new QCheckBox(AlarmMaskDialog);
        chkCh9->setObjectName(QStringLiteral("chkCh9"));

        gridLayout->addWidget(chkCh9, 1, 1, 1, 1);

        buttonBox = new QDialogButtonBox(AlarmMaskDialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        gridLayout->addWidget(buttonBox, 14, 0, 1, 2);

        chkCh3 = new QCheckBox(AlarmMaskDialog);
        chkCh3->setObjectName(QStringLiteral("chkCh3"));

        gridLayout->addWidget(chkCh3, 3, 0, 1, 1);

        chkCh1 = new QCheckBox(AlarmMaskDialog);
        chkCh1->setObjectName(QStringLiteral("chkCh1"));

        gridLayout->addWidget(chkCh1, 1, 0, 1, 1);

        chkCh2 = new QCheckBox(AlarmMaskDialog);
        chkCh2->setObjectName(QStringLiteral("chkCh2"));

        gridLayout->addWidget(chkCh2, 2, 0, 1, 1);

        chkCh10 = new QCheckBox(AlarmMaskDialog);
        chkCh10->setObjectName(QStringLiteral("chkCh10"));

        gridLayout->addWidget(chkCh10, 2, 1, 1, 1);

        chkCh11 = new QCheckBox(AlarmMaskDialog);
        chkCh11->setObjectName(QStringLiteral("chkCh11"));

        gridLayout->addWidget(chkCh11, 3, 1, 1, 1);

        chkCh12 = new QCheckBox(AlarmMaskDialog);
        chkCh12->setObjectName(QStringLiteral("chkCh12"));

        gridLayout->addWidget(chkCh12, 4, 1, 1, 1);

        chkCh7 = new QCheckBox(AlarmMaskDialog);
        chkCh7->setObjectName(QStringLiteral("chkCh7"));

        gridLayout->addWidget(chkCh7, 7, 0, 1, 1);

        chkCh6 = new QCheckBox(AlarmMaskDialog);
        chkCh6->setObjectName(QStringLiteral("chkCh6"));

        gridLayout->addWidget(chkCh6, 6, 0, 1, 1);

        chkCh5 = new QCheckBox(AlarmMaskDialog);
        chkCh5->setObjectName(QStringLiteral("chkCh5"));

        gridLayout->addWidget(chkCh5, 5, 0, 1, 1);

        chkCh8 = new QCheckBox(AlarmMaskDialog);
        chkCh8->setObjectName(QStringLiteral("chkCh8"));

        gridLayout->addWidget(chkCh8, 8, 0, 1, 1);

        chkCh13 = new QCheckBox(AlarmMaskDialog);
        chkCh13->setObjectName(QStringLiteral("chkCh13"));

        gridLayout->addWidget(chkCh13, 5, 1, 1, 1);

        chkCh14 = new QCheckBox(AlarmMaskDialog);
        chkCh14->setObjectName(QStringLiteral("chkCh14"));

        gridLayout->addWidget(chkCh14, 6, 1, 1, 1);

        chkCh15 = new QCheckBox(AlarmMaskDialog);
        chkCh15->setObjectName(QStringLiteral("chkCh15"));

        gridLayout->addWidget(chkCh15, 7, 1, 1, 1);

        btnAllch = new QPushButton(AlarmMaskDialog);
        btnAllch->setObjectName(QStringLiteral("btnAllch"));

        gridLayout->addWidget(btnAllch, 0, 0, 1, 2);


        retranslateUi(AlarmMaskDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), AlarmMaskDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), AlarmMaskDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(AlarmMaskDialog);
    } // setupUi

    void retranslateUi(QDialog *AlarmMaskDialog)
    {
        AlarmMaskDialog->setWindowTitle(QApplication::translate("AlarmMaskDialog", "\354\225\214\353\236\214 \353\247\210\354\212\244\355\201\254 \354\204\244\354\240\225", Q_NULLPTR));
        chkCh4->setText(QApplication::translate("AlarmMaskDialog", "\354\261\204\353\204\220 4", Q_NULLPTR));
        chkCh16->setText(QApplication::translate("AlarmMaskDialog", "\354\261\204\353\204\220 16", Q_NULLPTR));
        chkCh9->setText(QApplication::translate("AlarmMaskDialog", "\354\261\204\353\204\220 9", Q_NULLPTR));
        chkCh3->setText(QApplication::translate("AlarmMaskDialog", "\354\261\204\353\204\220 3", Q_NULLPTR));
        chkCh1->setText(QApplication::translate("AlarmMaskDialog", "\354\261\204\353\204\220 1", Q_NULLPTR));
        chkCh2->setText(QApplication::translate("AlarmMaskDialog", "\354\261\204\353\204\220 2", Q_NULLPTR));
        chkCh10->setText(QApplication::translate("AlarmMaskDialog", "\354\261\204\353\204\220 10", Q_NULLPTR));
        chkCh11->setText(QApplication::translate("AlarmMaskDialog", "\354\261\204\353\204\220 11", Q_NULLPTR));
        chkCh12->setText(QApplication::translate("AlarmMaskDialog", "\354\261\204\353\204\220 12", Q_NULLPTR));
        chkCh7->setText(QApplication::translate("AlarmMaskDialog", "\354\261\204\353\204\220 7", Q_NULLPTR));
        chkCh6->setText(QApplication::translate("AlarmMaskDialog", "\354\261\204\353\204\220 6", Q_NULLPTR));
        chkCh5->setText(QApplication::translate("AlarmMaskDialog", "\354\261\204\353\204\220 5", Q_NULLPTR));
        chkCh8->setText(QApplication::translate("AlarmMaskDialog", "\354\261\204\353\204\220 8", Q_NULLPTR));
        chkCh13->setText(QApplication::translate("AlarmMaskDialog", "\354\261\204\353\204\220 13", Q_NULLPTR));
        chkCh14->setText(QApplication::translate("AlarmMaskDialog", "\354\261\204\353\204\220 14", Q_NULLPTR));
        chkCh15->setText(QApplication::translate("AlarmMaskDialog", "\354\261\204\353\204\220 15", Q_NULLPTR));
        btnAllch->setText(QApplication::translate("AlarmMaskDialog", "All Channel Check", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class AlarmMaskDialog: public Ui_AlarmMaskDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ALARMMASKDIALOG_H
