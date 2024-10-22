/********************************************************************************
** Form generated from reading UI file 'denglu.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DENGLU_H
#define UI_DENGLU_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QToolBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_denglu
{
public:
    QVBoxLayout *verticalLayout;
    QToolBox *toolBox;
    QWidget *vlayout_2;
    QVBoxLayout *vlayout;

    void setupUi(QWidget *denglu)
    {
        if (denglu->objectName().isEmpty())
            denglu->setObjectName("denglu");
        denglu->resize(300, 700);
        verticalLayout = new QVBoxLayout(denglu);
        verticalLayout->setObjectName("verticalLayout");
        toolBox = new QToolBox(denglu);
        toolBox->setObjectName("toolBox");
        vlayout_2 = new QWidget();
        vlayout_2->setObjectName("vlayout_2");
        vlayout_2->setGeometry(QRect(0, 0, 288, 660));
        vlayout = new QVBoxLayout(vlayout_2);
        vlayout->setObjectName("vlayout");
        vlayout->setContentsMargins(0, 0, 0, 0);
        toolBox->addItem(vlayout_2, QString::fromUtf8("\347\276\244\346\210\220\345\221\230"));

        verticalLayout->addWidget(toolBox);


        retranslateUi(denglu);

        toolBox->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(denglu);
    } // setupUi

    void retranslateUi(QWidget *denglu)
    {
        denglu->setWindowTitle(QCoreApplication::translate("denglu", "Form", nullptr));
        toolBox->setItemText(toolBox->indexOf(vlayout_2), QCoreApplication::translate("denglu", "\347\276\244\346\210\220\345\221\230", nullptr));
    } // retranslateUi

};

namespace Ui {
    class denglu: public Ui_denglu {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DENGLU_H
