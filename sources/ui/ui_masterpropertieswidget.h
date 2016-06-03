/********************************************************************************
** Form generated from reading UI file 'masterpropertieswidget.ui'
**
** Created: Sat Feb 27 15:01:33 2016
**      by: Qt User Interface Compiler version 4.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MASTERPROPERTIESWIDGET_H
#define UI_MASTERPROPERTIESWIDGET_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QListWidget>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MasterPropertiesWidget
{
public:
    QGridLayout *gridLayout_2;
    QListWidget *free_list;
    QSpacerItem *verticalSpacer_2;
    QPushButton *unlink_button;
    QListWidget *linked_list;
    QPushButton *link_button;
    QLabel *label;
    QLabel *label_2;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *MasterPropertiesWidget)
    {
        if (MasterPropertiesWidget->objectName().isEmpty())
            MasterPropertiesWidget->setObjectName(QString::fromUtf8("MasterPropertiesWidget"));
        MasterPropertiesWidget->resize(564, 318);
        gridLayout_2 = new QGridLayout(MasterPropertiesWidget);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        free_list = new QListWidget(MasterPropertiesWidget);
        free_list->setObjectName(QString::fromUtf8("free_list"));

        gridLayout_2->addWidget(free_list, 1, 1, 5, 1);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer_2, 5, 2, 1, 1);

        unlink_button = new QPushButton(MasterPropertiesWidget);
        unlink_button->setObjectName(QString::fromUtf8("unlink_button"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/ico/16x16/arrow-left.png"), QSize(), QIcon::Normal, QIcon::Off);
        unlink_button->setIcon(icon);

        gridLayout_2->addWidget(unlink_button, 4, 2, 1, 1);

        linked_list = new QListWidget(MasterPropertiesWidget);
        linked_list->setObjectName(QString::fromUtf8("linked_list"));

        gridLayout_2->addWidget(linked_list, 1, 3, 5, 1);

        link_button = new QPushButton(MasterPropertiesWidget);
        link_button->setObjectName(QString::fromUtf8("link_button"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/ico/16x16/arrow-right.png"), QSize(), QIcon::Normal, QIcon::Off);
        link_button->setIcon(icon1);

        gridLayout_2->addWidget(link_button, 3, 2, 1, 1);

        label = new QLabel(MasterPropertiesWidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(label, 0, 1, 1, 1);

        label_2 = new QLabel(MasterPropertiesWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(label_2, 0, 3, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer, 1, 2, 1, 1);


        retranslateUi(MasterPropertiesWidget);

        QMetaObject::connectSlotsByName(MasterPropertiesWidget);
    } // setupUi

    void retranslateUi(QWidget *MasterPropertiesWidget)
    {
        MasterPropertiesWidget->setWindowTitle(QApplication::translate("MasterPropertiesWidget", "Form", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        unlink_button->setToolTip(QApplication::translate("MasterPropertiesWidget", "D\303\251lier l'\303\251l\303\251ment s\303\251l\303\251ctionn\303\251", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        unlink_button->setText(QString());
#ifndef QT_NO_TOOLTIP
        link_button->setToolTip(QApplication::translate("MasterPropertiesWidget", "Lier l'\303\251l\303\251ment s\303\251l\303\251ctionn\303\251", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        link_button->setText(QString());
        label->setText(QApplication::translate("MasterPropertiesWidget", "\303\211l\303\251ments disponibles", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("MasterPropertiesWidget", "\303\211l\303\251ments li\303\251s", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MasterPropertiesWidget: public Ui_MasterPropertiesWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MASTERPROPERTIESWIDGET_H
