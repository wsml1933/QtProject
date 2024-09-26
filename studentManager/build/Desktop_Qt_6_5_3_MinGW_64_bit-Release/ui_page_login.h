/********************************************************************************
** Form generated from reading UI file 'page_login.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PAGE_LOGIN_H
#define UI_PAGE_LOGIN_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Page_Login
{
public:
    QGridLayout *gridLayout_3;
    QLabel *lb_title;
    QWidget *widget_2;
    QGridLayout *gridLayout_2;
    QLabel *lb2;
    QLabel *lb1;
    QSpacerItem *horizontalSpacer;
    QLineEdit *le_user;
    QSpacerItem *horizontalSpacer_2;
    QLineEdit *le_password;
    QWidget *widget;
    QGridLayout *gridLayout;
    QPushButton *btn_exit;
    QPushButton *btn_login;
    QSpacerItem *horizontalSpacer_5;
    QSpacerItem *horizontalSpacer_4;
    QSpacerItem *horizontalSpacer_3;

    void setupUi(QWidget *Page_Login)
    {
        if (Page_Login->objectName().isEmpty())
            Page_Login->setObjectName("Page_Login");
        Page_Login->resize(400, 240);
        Page_Login->setMinimumSize(QSize(400, 240));
        Page_Login->setMaximumSize(QSize(400, 240));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/Image/icon.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        Page_Login->setWindowIcon(icon);
        gridLayout_3 = new QGridLayout(Page_Login);
        gridLayout_3->setObjectName("gridLayout_3");
        lb_title = new QLabel(Page_Login);
        lb_title->setObjectName("lb_title");
        lb_title->setMinimumSize(QSize(0, 40));
        lb_title->setMaximumSize(QSize(16777215, 40));
        QFont font;
        font.setPointSize(16);
        lb_title->setFont(font);
        lb_title->setAlignment(Qt::AlignmentFlag::AlignCenter);

        gridLayout_3->addWidget(lb_title, 0, 0, 1, 1);

        widget_2 = new QWidget(Page_Login);
        widget_2->setObjectName("widget_2");
        widget_2->setMinimumSize(QSize(0, 80));
        widget_2->setMaximumSize(QSize(16777215, 80));
        widget_2->setLayoutDirection(Qt::LayoutDirection::LeftToRight);
        gridLayout_2 = new QGridLayout(widget_2);
        gridLayout_2->setObjectName("gridLayout_2");
        gridLayout_2->setContentsMargins(2, 0, 2, 0);
        lb2 = new QLabel(widget_2);
        lb2->setObjectName("lb2");
        QFont font1;
        font1.setPointSize(22);
        lb2->setFont(font1);
        lb2->setAlignment(Qt::AlignmentFlag::AlignRight|Qt::AlignmentFlag::AlignTrailing|Qt::AlignmentFlag::AlignVCenter);

        gridLayout_2->addWidget(lb2, 1, 1, 1, 1);

        lb1 = new QLabel(widget_2);
        lb1->setObjectName("lb1");
        lb1->setFont(font1);
        lb1->setAlignment(Qt::AlignmentFlag::AlignCenter);

        gridLayout_2->addWidget(lb1, 0, 1, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer, 0, 0, 1, 1);

        le_user = new QLineEdit(widget_2);
        le_user->setObjectName("le_user");
        le_user->setMinimumSize(QSize(200, 25));
        le_user->setMaximumSize(QSize(200, 25));
        le_user->setMaxLength(8);

        gridLayout_2->addWidget(le_user, 0, 2, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_2, 0, 3, 1, 1);

        le_password = new QLineEdit(widget_2);
        le_password->setObjectName("le_password");
        le_password->setMinimumSize(QSize(200, 25));
        le_password->setMaximumSize(QSize(200, 25));
        le_password->setMaxLength(8);
        le_password->setEchoMode(QLineEdit::EchoMode::Password);

        gridLayout_2->addWidget(le_password, 1, 2, 1, 1);


        gridLayout_3->addWidget(widget_2, 1, 0, 1, 1);

        widget = new QWidget(Page_Login);
        widget->setObjectName("widget");
        widget->setMinimumSize(QSize(0, 40));
        widget->setMaximumSize(QSize(16777215, 40));
        gridLayout = new QGridLayout(widget);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setVerticalSpacing(0);
        gridLayout->setContentsMargins(2, 0, 2, 0);
        btn_exit = new QPushButton(widget);
        btn_exit->setObjectName("btn_exit");
        btn_exit->setMinimumSize(QSize(60, 30));

        gridLayout->addWidget(btn_exit, 0, 3, 1, 1);

        btn_login = new QPushButton(widget);
        btn_login->setObjectName("btn_login");
        btn_login->setMinimumSize(QSize(60, 30));

        gridLayout->addWidget(btn_login, 0, 1, 1, 1);

        horizontalSpacer_5 = new QSpacerItem(30, 20, QSizePolicy::Policy::Fixed, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_5, 0, 2, 1, 1);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_4, 0, 4, 1, 1);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_3, 0, 0, 1, 1);


        gridLayout_3->addWidget(widget, 2, 0, 1, 1);

        QWidget::setTabOrder(le_user, le_password);
        QWidget::setTabOrder(le_password, btn_login);
        QWidget::setTabOrder(btn_login, btn_exit);

        retranslateUi(Page_Login);

        QMetaObject::connectSlotsByName(Page_Login);
    } // setupUi

    void retranslateUi(QWidget *Page_Login)
    {
        Page_Login->setWindowTitle(QCoreApplication::translate("Page_Login", "\347\231\273\345\275\225", nullptr));
#if QT_CONFIG(tooltip)
        Page_Login->setToolTip(QCoreApplication::translate("Page_Login", "\350\277\231\346\230\257\347\231\273\345\275\225\347\252\227\345\217\243", nullptr));
#endif // QT_CONFIG(tooltip)
        lb_title->setText(QCoreApplication::translate("Page_Login", "\345\255\246\347\224\237\344\277\241\346\201\257\347\256\241\347\220\206\347\263\273\347\273\237", nullptr));
        lb2->setText(QCoreApplication::translate("Page_Login", "\345\257\206\347\240\201:", nullptr));
        lb1->setText(QCoreApplication::translate("Page_Login", "\347\224\250\346\210\267\345\220\215:", nullptr));
        le_user->setPlaceholderText(QCoreApplication::translate("Page_Login", "\350\257\267\350\276\223\345\205\245\347\224\250\346\210\267\345\220\215", nullptr));
        le_password->setPlaceholderText(QCoreApplication::translate("Page_Login", "\350\257\267\350\276\223\345\205\245\345\257\206\347\240\201", nullptr));
        btn_exit->setText(QCoreApplication::translate("Page_Login", "\351\200\200\345\207\272", nullptr));
        btn_login->setText(QCoreApplication::translate("Page_Login", "\347\231\273\345\275\225", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Page_Login: public Ui_Page_Login {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PAGE_LOGIN_H
