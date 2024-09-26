/********************************************************************************
** Form generated from reading UI file 'dlg_adduser.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DLG_ADDUSER_H
#define UI_DLG_ADDUSER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Dlg_AddUser
{
public:
    QGridLayout *gridLayout_2;
    QLabel *label;
    QWidget *widget;
    QGridLayout *gridLayout;
    QPushButton *btn_save;
    QPushButton *btn_cancel;
    QLabel *label_3;
    QLineEdit *le_password;
    QLabel *label_6;
    QLineEdit *le_username;
    QSpacerItem *horizontalSpacer;
    QLineEdit *le_auth;

    void setupUi(QDialog *Dlg_AddUser)
    {
        if (Dlg_AddUser->objectName().isEmpty())
            Dlg_AddUser->setObjectName("Dlg_AddUser");
        Dlg_AddUser->resize(294, 121);
        gridLayout_2 = new QGridLayout(Dlg_AddUser);
        gridLayout_2->setObjectName("gridLayout_2");
        label = new QLabel(Dlg_AddUser);
        label->setObjectName("label");
        label->setMinimumSize(QSize(80, 0));
        label->setAlignment(Qt::AlignmentFlag::AlignRight|Qt::AlignmentFlag::AlignTrailing|Qt::AlignmentFlag::AlignVCenter);

        gridLayout_2->addWidget(label, 0, 0, 1, 1);

        widget = new QWidget(Dlg_AddUser);
        widget->setObjectName("widget");
        gridLayout = new QGridLayout(widget);
        gridLayout->setSpacing(0);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(0, 0, 0, 0);
        btn_save = new QPushButton(widget);
        btn_save->setObjectName("btn_save");

        gridLayout->addWidget(btn_save, 0, 0, 1, 1);

        btn_cancel = new QPushButton(widget);
        btn_cancel->setObjectName("btn_cancel");

        gridLayout->addWidget(btn_cancel, 0, 1, 1, 1);


        gridLayout_2->addWidget(widget, 3, 0, 1, 3);

        label_3 = new QLabel(Dlg_AddUser);
        label_3->setObjectName("label_3");
        label_3->setMinimumSize(QSize(80, 0));
        label_3->setAlignment(Qt::AlignmentFlag::AlignRight|Qt::AlignmentFlag::AlignTrailing|Qt::AlignmentFlag::AlignVCenter);

        gridLayout_2->addWidget(label_3, 1, 0, 1, 1);

        le_password = new QLineEdit(Dlg_AddUser);
        le_password->setObjectName("le_password");

        gridLayout_2->addWidget(le_password, 1, 1, 1, 1);

        label_6 = new QLabel(Dlg_AddUser);
        label_6->setObjectName("label_6");
        label_6->setMinimumSize(QSize(80, 0));
        label_6->setAlignment(Qt::AlignmentFlag::AlignRight|Qt::AlignmentFlag::AlignTrailing|Qt::AlignmentFlag::AlignVCenter);

        gridLayout_2->addWidget(label_6, 2, 0, 1, 1);

        le_username = new QLineEdit(Dlg_AddUser);
        le_username->setObjectName("le_username");

        gridLayout_2->addWidget(le_username, 0, 1, 1, 1);

        horizontalSpacer = new QSpacerItem(86, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer, 2, 2, 1, 1);

        le_auth = new QLineEdit(Dlg_AddUser);
        le_auth->setObjectName("le_auth");

        gridLayout_2->addWidget(le_auth, 2, 1, 1, 1);


        retranslateUi(Dlg_AddUser);

        QMetaObject::connectSlotsByName(Dlg_AddUser);
    } // setupUi

    void retranslateUi(QDialog *Dlg_AddUser)
    {
        Dlg_AddUser->setWindowTitle(QCoreApplication::translate("Dlg_AddUser", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("Dlg_AddUser", "\347\224\250\346\210\267\345\220\215", nullptr));
        btn_save->setText(QCoreApplication::translate("Dlg_AddUser", "\344\277\235\345\255\230", nullptr));
        btn_cancel->setText(QCoreApplication::translate("Dlg_AddUser", "\345\217\226\346\266\210", nullptr));
        label_3->setText(QCoreApplication::translate("Dlg_AddUser", "\345\257\206\347\240\201", nullptr));
        label_6->setText(QCoreApplication::translate("Dlg_AddUser", "\346\235\203\351\231\220", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Dlg_AddUser: public Ui_Dlg_AddUser {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DLG_ADDUSER_H
