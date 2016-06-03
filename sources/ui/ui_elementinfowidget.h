/********************************************************************************
** Form generated from reading UI file 'elementinfowidget.ui'
**
** Created: Sat Feb 27 15:01:33 2016
**      by: Qt User Interface Compiler version 4.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ELEMENTINFOWIDGET_H
#define UI_ELEMENTINFOWIDGET_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QScrollArea>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ElementInfoWidget
{
public:
    QVBoxLayout *verticalLayout;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QVBoxLayout *scroll_vlayout;

    void setupUi(QWidget *ElementInfoWidget)
    {
        if (ElementInfoWidget->objectName().isEmpty())
            ElementInfoWidget->setObjectName(QString::fromUtf8("ElementInfoWidget"));
        ElementInfoWidget->resize(443, 300);
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(ElementInfoWidget->sizePolicy().hasHeightForWidth());
        ElementInfoWidget->setSizePolicy(sizePolicy);
        verticalLayout = new QVBoxLayout(ElementInfoWidget);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        scrollArea = new QScrollArea(ElementInfoWidget);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        sizePolicy.setHeightForWidth(scrollArea->sizePolicy().hasHeightForWidth());
        scrollArea->setSizePolicy(sizePolicy);
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 423, 280));
        scrollAreaWidgetContents->setMinimumSize(QSize(0, 280));
        scroll_vlayout = new QVBoxLayout(scrollAreaWidgetContents);
        scroll_vlayout->setSpacing(2);
        scroll_vlayout->setObjectName(QString::fromUtf8("scroll_vlayout"));
        scroll_vlayout->setSizeConstraint(QLayout::SetMinimumSize);
        scroll_vlayout->setContentsMargins(0, 2, 0, 4);
        scrollArea->setWidget(scrollAreaWidgetContents);

        verticalLayout->addWidget(scrollArea);


        retranslateUi(ElementInfoWidget);

        QMetaObject::connectSlotsByName(ElementInfoWidget);
    } // setupUi

    void retranslateUi(QWidget *ElementInfoWidget)
    {
        ElementInfoWidget->setWindowTitle(QApplication::translate("ElementInfoWidget", "Form", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class ElementInfoWidget: public Ui_ElementInfoWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ELEMENTINFOWIDGET_H
