/********************************************************************************
** Form generated from reading UI file 'formport.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FORMPORT_H
#define UI_FORMPORT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_FormPort
{
public:
    QGridLayout *gridLayout_4;
    QGroupBox *groupBox;
    QGridLayout *gridLayout_2;
    QLabel *labelPortName;
    QLineEdit *editPDValue;
    QVBoxLayout *verticalLayout_2;
    QGroupBox *gbMainSub;
    QGridLayout *gridLayout;
    QPushButton *btnSub;
    QPushButton *btnMain;
    QGroupBox *gbAutoMan;
    QGridLayout *gridLayout_3;
    QPushButton *btnAuto;
    QPushButton *btnManual;
    QTextEdit *textEdit;

    void setupUi(QWidget *FormPort)
    {
        if (FormPort->objectName().isEmpty())
            FormPort->setObjectName(QStringLiteral("FormPort"));
        FormPort->resize(311, 128);
        gridLayout_4 = new QGridLayout(FormPort);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        gridLayout_4->setContentsMargins(3, 3, 3, 3);
        groupBox = new QGroupBox(FormPort);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        gridLayout_2 = new QGridLayout(groupBox);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout_2->setContentsMargins(1, 1, 1, 2);
        labelPortName = new QLabel(groupBox);
        labelPortName->setObjectName(QStringLiteral("labelPortName"));
        labelPortName->setMinimumSize(QSize(45, 0));
        QFont font;
        font.setFamily(QStringLiteral("Arial"));
        font.setPointSize(10);
        font.setBold(true);
        font.setWeight(75);
        labelPortName->setFont(font);

        gridLayout_2->addWidget(labelPortName, 0, 0, 1, 1);

        editPDValue = new QLineEdit(groupBox);
        editPDValue->setObjectName(QStringLiteral("editPDValue"));
        QFont font1;
        font1.setFamily(QStringLiteral("Arial"));
        font1.setPointSize(13);
        font1.setBold(true);
        font1.setWeight(75);
        editPDValue->setFont(font1);
        editPDValue->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(editPDValue, 0, 1, 1, 1);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        gbMainSub = new QGroupBox(groupBox);
        gbMainSub->setObjectName(QStringLiteral("gbMainSub"));
        gridLayout = new QGridLayout(gbMainSub);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(2, 1, 2, 1);
        btnSub = new QPushButton(gbMainSub);
        btnSub->setObjectName(QStringLiteral("btnSub"));
        btnSub->setMaximumSize(QSize(65, 16777215));
        QIcon icon;
        icon.addFile(QStringLiteral(":/icon/image/bullet_black.png"), QSize(), QIcon::Normal, QIcon::Off);
        btnSub->setIcon(icon);
        btnSub->setIconSize(QSize(20, 20));

        gridLayout->addWidget(btnSub, 0, 1, 1, 1);

        btnMain = new QPushButton(gbMainSub);
        btnMain->setObjectName(QStringLiteral("btnMain"));
        btnMain->setMaximumSize(QSize(65, 16777215));
        btnMain->setIcon(icon);
        btnMain->setIconSize(QSize(20, 20));

        gridLayout->addWidget(btnMain, 0, 0, 1, 1);


        verticalLayout_2->addWidget(gbMainSub);

        gbAutoMan = new QGroupBox(groupBox);
        gbAutoMan->setObjectName(QStringLiteral("gbAutoMan"));
        gridLayout_3 = new QGridLayout(gbAutoMan);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        gridLayout_3->setContentsMargins(2, 1, 2, 1);
        btnAuto = new QPushButton(gbAutoMan);
        btnAuto->setObjectName(QStringLiteral("btnAuto"));
        btnAuto->setMaximumSize(QSize(65, 16777215));
        btnAuto->setIcon(icon);
        btnAuto->setIconSize(QSize(20, 20));

        gridLayout_3->addWidget(btnAuto, 0, 0, 1, 1);

        btnManual = new QPushButton(gbAutoMan);
        btnManual->setObjectName(QStringLiteral("btnManual"));
        btnManual->setMinimumSize(QSize(0, 0));
        btnManual->setMaximumSize(QSize(65, 16777215));
        btnManual->setIcon(icon);
        btnManual->setIconSize(QSize(20, 20));

        gridLayout_3->addWidget(btnManual, 0, 1, 1, 1);


        verticalLayout_2->addWidget(gbAutoMan);


        gridLayout_2->addLayout(verticalLayout_2, 0, 2, 1, 1);

        textEdit = new QTextEdit(groupBox);
        textEdit->setObjectName(QStringLiteral("textEdit"));
        textEdit->setMaximumSize(QSize(16777215, 30));
        textEdit->setReadOnly(true);

        gridLayout_2->addWidget(textEdit, 1, 0, 1, 3);


        gridLayout_4->addWidget(groupBox, 0, 0, 1, 1);


        retranslateUi(FormPort);

        QMetaObject::connectSlotsByName(FormPort);
    } // setupUi

    void retranslateUi(QWidget *FormPort)
    {
        FormPort->setWindowTitle(QApplication::translate("FormPort", "Form", Q_NULLPTR));
        groupBox->setTitle(QString());
        labelPortName->setText(QApplication::translate("FormPort", "\354\261\204\353\204\220", Q_NULLPTR));
        editPDValue->setText(QApplication::translate("FormPort", "-99.99", Q_NULLPTR));
        gbMainSub->setTitle(QString());
        btnSub->setText(QApplication::translate("FormPort", "\354\204\234\353\270\214", Q_NULLPTR));
        btnMain->setText(QApplication::translate("FormPort", "\353\251\224\354\235\270", Q_NULLPTR));
        gbAutoMan->setTitle(QString());
        btnAuto->setText(QApplication::translate("FormPort", "\354\236\220\353\217\231", Q_NULLPTR));
        btnManual->setText(QApplication::translate("FormPort", "\354\210\230\353\217\231", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class FormPort: public Ui_FormPort {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FORMPORT_H
