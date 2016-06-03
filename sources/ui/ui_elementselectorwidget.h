/********************************************************************************
** Form generated from reading UI file 'elementselectorwidget.ui'
**
** Created: Sat Feb 27 15:01:33 2016
**      by: Qt User Interface Compiler version 4.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ELEMENTSELECTORWIDGET_H
#define UI_ELEMENTSELECTORWIDGET_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QScrollArea>
#include <QtGui/QSpacerItem>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ElementSelectorWidget
{
public:
    QVBoxLayout *verticalLayout;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QVBoxLayout *scroll_layout_;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *ElementSelectorWidget)
    {
        if (ElementSelectorWidget->objectName().isEmpty())
            ElementSelectorWidget->setObjectName(QString::fromUtf8("ElementSelectorWidget"));
        ElementSelectorWidget->resize(400, 300);
        verticalLayout = new QVBoxLayout(ElementSelectorWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        scrollArea = new QScrollArea(ElementSelectorWidget);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollArea->setWidgetResizable(true);
        scrollArea->setAlignment(Qt::AlignBottom|Qt::AlignLeading|Qt::AlignLeft);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 380, 280));
        scroll_layout_ = new QVBoxLayout(scrollAreaWidgetContents);
        scroll_layout_->setObjectName(QString::fromUtf8("scroll_layout_"));
        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        scroll_layout_->addItem(verticalSpacer);

        scrollArea->setWidget(scrollAreaWidgetContents);

        verticalLayout->addWidget(scrollArea);


        retranslateUi(ElementSelectorWidget);

        QMetaObject::connectSlotsByName(ElementSelectorWidget);
    } // setupUi

    void retranslateUi(QWidget *ElementSelectorWidget)
    {
        ElementSelectorWidget->setWindowTitle(QApplication::translate("ElementSelectorWidget", "Form", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class ElementSelectorWidget: public Ui_ElementSelectorWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ELEMENTSELECTORWIDGET_H
