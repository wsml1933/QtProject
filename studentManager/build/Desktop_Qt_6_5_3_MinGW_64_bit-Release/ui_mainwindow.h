/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout_3;
    QStackedWidget *stackedWidget;
    QWidget *page;
    QGridLayout *gridLayout_4;
    QCheckBox *checkBox;
    QPushButton *btn_simulation;
    QPushButton *btn_delete;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *btn_clear;
    QLineEdit *le_search;
    QPushButton *btn_add;
    QLabel *lb_cnt;
    QPushButton *btn_update;
    QTableWidget *tableWidget;
    QSpacerItem *horizontalSpacer_5;
    QPushButton *btn_search;
    QWidget *page_2;
    QGridLayout *gridLayout_5;
    QPushButton *btn_update_2;
    QLineEdit *le_search_2;
    QPushButton *btn_search_2;
    QPushButton *btn_add_2;
    QPushButton *btn_simulation_2;
    QPushButton *btn_delete_2;
    QSpacerItem *horizontalSpacer_3;
    QSpacerItem *horizontalSpacer_4;
    QTableWidget *tableWidget_2;
    QCheckBox *checkBox_2;
    QLabel *lb_cnt_2;
    QWidget *bg_title;
    QGridLayout *gridLayout_2;
    QSpacerItem *horizontalSpacer;
    QLabel *label;
    QWidget *widget;
    QGridLayout *gridLayout;
    QPushButton *btn_exit;
    QLabel *label_2;
    QLabel *lb_user;
    QLabel *label_3;
    QTreeWidget *treeWidget;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(1200, 640);
        MainWindow->setMinimumSize(QSize(1200, 480));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/Image/icon.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        MainWindow->setWindowIcon(icon);
        MainWindow->setStyleSheet(QString::fromUtf8("QWidget#centralwidget(background-color: #409eff;);"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        centralwidget->setStyleSheet(QString::fromUtf8(""));
        gridLayout_3 = new QGridLayout(centralwidget);
        gridLayout_3->setSpacing(0);
        gridLayout_3->setObjectName("gridLayout_3");
        gridLayout_3->setContentsMargins(0, 0, 0, 0);
        stackedWidget = new QStackedWidget(centralwidget);
        stackedWidget->setObjectName("stackedWidget");
        stackedWidget->setStyleSheet(QString::fromUtf8(""));
        page = new QWidget();
        page->setObjectName("page");
        gridLayout_4 = new QGridLayout(page);
        gridLayout_4->setObjectName("gridLayout_4");
        checkBox = new QCheckBox(page);
        checkBox->setObjectName("checkBox");

        gridLayout_4->addWidget(checkBox, 0, 0, 1, 1);

        btn_simulation = new QPushButton(page);
        btn_simulation->setObjectName("btn_simulation");

        gridLayout_4->addWidget(btn_simulation, 2, 0, 1, 1);

        btn_delete = new QPushButton(page);
        btn_delete->setObjectName("btn_delete");
        btn_delete->setMinimumSize(QSize(60, 30));

        gridLayout_4->addWidget(btn_delete, 0, 4, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_4->addItem(horizontalSpacer_2, 0, 5, 1, 1);

        btn_clear = new QPushButton(page);
        btn_clear->setObjectName("btn_clear");

        gridLayout_4->addWidget(btn_clear, 2, 1, 1, 1);

        le_search = new QLineEdit(page);
        le_search->setObjectName("le_search");
        le_search->setMinimumSize(QSize(270, 0));
        le_search->setMaximumSize(QSize(270, 16777215));

        gridLayout_4->addWidget(le_search, 0, 6, 1, 1);

        btn_add = new QPushButton(page);
        btn_add->setObjectName("btn_add");
        btn_add->setMinimumSize(QSize(60, 30));

        gridLayout_4->addWidget(btn_add, 0, 2, 1, 1);

        lb_cnt = new QLabel(page);
        lb_cnt->setObjectName("lb_cnt");

        gridLayout_4->addWidget(lb_cnt, 2, 2, 1, 1);

        btn_update = new QPushButton(page);
        btn_update->setObjectName("btn_update");
        btn_update->setMinimumSize(QSize(60, 30));

        gridLayout_4->addWidget(btn_update, 0, 3, 1, 1);

        tableWidget = new QTableWidget(page);
        if (tableWidget->rowCount() < 1)
            tableWidget->setRowCount(1);
        tableWidget->setObjectName("tableWidget");
        tableWidget->horizontalHeader()->setStretchLastSection(true);
        tableWidget->verticalHeader()->setVisible(false);

        gridLayout_4->addWidget(tableWidget, 1, 0, 1, 11);

        horizontalSpacer_5 = new QSpacerItem(100, 20, QSizePolicy::Policy::Fixed, QSizePolicy::Minimum);

        gridLayout_4->addItem(horizontalSpacer_5, 0, 1, 1, 1);

        btn_search = new QPushButton(page);
        btn_search->setObjectName("btn_search");
        btn_search->setMinimumSize(QSize(60, 30));

        gridLayout_4->addWidget(btn_search, 0, 7, 1, 4);

        stackedWidget->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName("page_2");
        gridLayout_5 = new QGridLayout(page_2);
        gridLayout_5->setObjectName("gridLayout_5");
        btn_update_2 = new QPushButton(page_2);
        btn_update_2->setObjectName("btn_update_2");
        btn_update_2->setMinimumSize(QSize(60, 30));

        gridLayout_5->addWidget(btn_update_2, 0, 3, 1, 1);

        le_search_2 = new QLineEdit(page_2);
        le_search_2->setObjectName("le_search_2");
        le_search_2->setMinimumSize(QSize(270, 0));
        le_search_2->setMaximumSize(QSize(270, 16777215));

        gridLayout_5->addWidget(le_search_2, 0, 6, 1, 1);

        btn_search_2 = new QPushButton(page_2);
        btn_search_2->setObjectName("btn_search_2");
        btn_search_2->setMinimumSize(QSize(60, 30));

        gridLayout_5->addWidget(btn_search_2, 0, 7, 1, 1);

        btn_add_2 = new QPushButton(page_2);
        btn_add_2->setObjectName("btn_add_2");
        btn_add_2->setMinimumSize(QSize(60, 30));

        gridLayout_5->addWidget(btn_add_2, 0, 2, 1, 1);

        btn_simulation_2 = new QPushButton(page_2);
        btn_simulation_2->setObjectName("btn_simulation_2");

        gridLayout_5->addWidget(btn_simulation_2, 3, 0, 1, 1);

        btn_delete_2 = new QPushButton(page_2);
        btn_delete_2->setObjectName("btn_delete_2");
        btn_delete_2->setMinimumSize(QSize(60, 30));

        gridLayout_5->addWidget(btn_delete_2, 0, 4, 1, 1);

        horizontalSpacer_3 = new QSpacerItem(335, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_5->addItem(horizontalSpacer_3, 0, 5, 1, 1);

        horizontalSpacer_4 = new QSpacerItem(100, 20, QSizePolicy::Policy::Fixed, QSizePolicy::Minimum);

        gridLayout_5->addItem(horizontalSpacer_4, 0, 1, 1, 1);

        tableWidget_2 = new QTableWidget(page_2);
        if (tableWidget_2->rowCount() < 1)
            tableWidget_2->setRowCount(1);
        tableWidget_2->setObjectName("tableWidget_2");
        tableWidget_2->horizontalHeader()->setStretchLastSection(true);
        tableWidget_2->verticalHeader()->setVisible(false);

        gridLayout_5->addWidget(tableWidget_2, 2, 0, 1, 8);

        checkBox_2 = new QCheckBox(page_2);
        checkBox_2->setObjectName("checkBox_2");

        gridLayout_5->addWidget(checkBox_2, 0, 0, 1, 1);

        lb_cnt_2 = new QLabel(page_2);
        lb_cnt_2->setObjectName("lb_cnt_2");

        gridLayout_5->addWidget(lb_cnt_2, 3, 1, 1, 1);

        stackedWidget->addWidget(page_2);

        gridLayout_3->addWidget(stackedWidget, 1, 1, 1, 1);

        bg_title = new QWidget(centralwidget);
        bg_title->setObjectName("bg_title");
        bg_title->setMinimumSize(QSize(0, 50));
        bg_title->setMaximumSize(QSize(16777215, 50));
        bg_title->setStyleSheet(QString::fromUtf8(""));
        gridLayout_2 = new QGridLayout(bg_title);
        gridLayout_2->setSpacing(0);
        gridLayout_2->setObjectName("gridLayout_2");
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer = new QSpacerItem(253, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer, 0, 0, 1, 1);

        label = new QLabel(bg_title);
        label->setObjectName("label");
        QFont font;
        font.setPointSize(18);
        label->setFont(font);
        label->setAlignment(Qt::AlignmentFlag::AlignCenter);

        gridLayout_2->addWidget(label, 0, 1, 1, 1);

        widget = new QWidget(bg_title);
        widget->setObjectName("widget");
        gridLayout = new QGridLayout(widget);
        gridLayout->setSpacing(0);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(5, 0, 5, 0);
        btn_exit = new QPushButton(widget);
        btn_exit->setObjectName("btn_exit");
        btn_exit->setMinimumSize(QSize(60, 20));
        btn_exit->setMaximumSize(QSize(60, 16777215));
        btn_exit->setStyleSheet(QString::fromUtf8(""));

        gridLayout->addWidget(btn_exit, 0, 3, 1, 1);

        label_2 = new QLabel(widget);
        label_2->setObjectName("label_2");
        label_2->setMinimumSize(QSize(45, 45));
        label_2->setMaximumSize(QSize(45, 45));
        label_2->setStyleSheet(QString::fromUtf8("border-image: url(:/Image/user.jpg);"));

        gridLayout->addWidget(label_2, 0, 0, 1, 1);

        lb_user = new QLabel(widget);
        lb_user->setObjectName("lb_user");

        gridLayout->addWidget(lb_user, 0, 2, 1, 1);

        label_3 = new QLabel(widget);
        label_3->setObjectName("label_3");
        label_3->setMaximumSize(QSize(60, 16777215));
        label_3->setAlignment(Qt::AlignmentFlag::AlignRight|Qt::AlignmentFlag::AlignTrailing|Qt::AlignmentFlag::AlignVCenter);

        gridLayout->addWidget(label_3, 0, 1, 1, 1);


        gridLayout_2->addWidget(widget, 0, 2, 1, 1);

        gridLayout_2->setColumnStretch(0, 1);
        gridLayout_2->setColumnStretch(1, 1);
        gridLayout_2->setColumnStretch(2, 1);

        gridLayout_3->addWidget(bg_title, 0, 0, 1, 2);

        treeWidget = new QTreeWidget(centralwidget);
        QTreeWidgetItem *__qtreewidgetitem = new QTreeWidgetItem();
        __qtreewidgetitem->setText(0, QString::fromUtf8("1"));
        treeWidget->setHeaderItem(__qtreewidgetitem);
        treeWidget->setObjectName("treeWidget");
        treeWidget->setMinimumSize(QSize(200, 0));
        treeWidget->setMaximumSize(QSize(200, 16777215));
        treeWidget->setStyleSheet(QString::fromUtf8(""));
        treeWidget->header()->setVisible(false);

        gridLayout_3->addWidget(treeWidget, 1, 0, 1, 1);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 1200, 18));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        stackedWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "\345\255\246\347\224\237\344\277\241\346\201\257\347\256\241\347\220\206\347\263\273\347\273\237", nullptr));
#if QT_CONFIG(tooltip)
        MainWindow->setToolTip(QCoreApplication::translate("MainWindow", "\350\277\231\346\230\257\345\255\246\347\224\237\344\277\241\346\201\257\347\256\241\347\220\206\347\263\273\347\273\237", nullptr));
#endif // QT_CONFIG(tooltip)
        checkBox->setText(QCoreApplication::translate("MainWindow", "\345\205\250\351\200\211", nullptr));
        btn_simulation->setText(QCoreApplication::translate("MainWindow", "\346\250\241\346\213\237\346\225\260\346\215\256", nullptr));
        btn_simulation->setProperty("btn", QVariant(QCoreApplication::translate("MainWindow", "main", nullptr)));
        btn_delete->setText(QCoreApplication::translate("MainWindow", "\345\210\240\351\231\244", nullptr));
        btn_delete->setProperty("btn", QVariant(QCoreApplication::translate("MainWindow", "main", nullptr)));
        btn_clear->setText(QCoreApplication::translate("MainWindow", "\346\270\205\347\251\272\345\255\246\347\224\237\350\241\250", nullptr));
        btn_clear->setProperty("btn", QVariant(QCoreApplication::translate("MainWindow", "main", nullptr)));
        btn_add->setText(QCoreApplication::translate("MainWindow", "\345\242\236\345\212\240", nullptr));
        btn_add->setProperty("btn", QVariant(QCoreApplication::translate("MainWindow", "main", nullptr)));
        lb_cnt->setText(QString());
        btn_update->setText(QCoreApplication::translate("MainWindow", "\344\277\256\346\224\271", nullptr));
        btn_update->setProperty("btn", QVariant(QCoreApplication::translate("MainWindow", "main", nullptr)));
        btn_search->setText(QCoreApplication::translate("MainWindow", "\346\220\234\347\264\242", nullptr));
        btn_search->setProperty("btn", QVariant(QCoreApplication::translate("MainWindow", "main", nullptr)));
        btn_update_2->setText(QCoreApplication::translate("MainWindow", "\344\277\256\346\224\271", nullptr));
        btn_update_2->setProperty("btn", QVariant(QCoreApplication::translate("MainWindow", "main", nullptr)));
        btn_update_2->setProperty("btn1", QVariant(QCoreApplication::translate("MainWindow", "main", nullptr)));
        btn_search_2->setText(QCoreApplication::translate("MainWindow", "\346\220\234\347\264\242", nullptr));
        btn_search_2->setProperty("btn", QVariant(QCoreApplication::translate("MainWindow", "main", nullptr)));
        btn_search_2->setProperty("btn1", QVariant(QCoreApplication::translate("MainWindow", "main", nullptr)));
        btn_add_2->setText(QCoreApplication::translate("MainWindow", "\345\242\236\345\212\240", nullptr));
        btn_add_2->setProperty("btn", QVariant(QCoreApplication::translate("MainWindow", "main", nullptr)));
        btn_add_2->setProperty("btn1", QVariant(QCoreApplication::translate("MainWindow", "main", nullptr)));
        btn_simulation_2->setText(QCoreApplication::translate("MainWindow", "\346\250\241\346\213\237\346\225\260\346\215\256", nullptr));
        btn_simulation_2->setProperty("btn1", QVariant(QCoreApplication::translate("MainWindow", "main", nullptr)));
        btn_delete_2->setText(QCoreApplication::translate("MainWindow", "\345\210\240\351\231\244", nullptr));
        btn_delete_2->setProperty("btn", QVariant(QCoreApplication::translate("MainWindow", "main", nullptr)));
        btn_delete_2->setProperty("btn1", QVariant(QCoreApplication::translate("MainWindow", "main", nullptr)));
        checkBox_2->setText(QCoreApplication::translate("MainWindow", "\345\205\250\351\200\211", nullptr));
        lb_cnt_2->setText(QString());
        label->setText(QCoreApplication::translate("MainWindow", "\345\255\246\347\224\237\344\277\241\346\201\257\347\256\241\347\220\206\347\263\273\347\273\237", nullptr));
        btn_exit->setText(QCoreApplication::translate("MainWindow", "\351\200\200\345\207\272", nullptr));
        btn_exit->setProperty("btn", QVariant(QCoreApplication::translate("MainWindow", "main", nullptr)));
        label_2->setText(QString());
        lb_user->setText(QCoreApplication::translate("MainWindow", "admin", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "\347\224\250\346\210\267\345\220\215\357\274\232", nullptr));
        treeWidget->setProperty("btn", QVariant(QCoreApplication::translate("MainWindow", "main", nullptr)));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
