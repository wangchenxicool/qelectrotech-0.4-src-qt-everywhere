/********************************************************************************
** Form generated from reading UI file 'linksingleelementwidget.ui'
**
** Created: Sat Feb 27 15:01:33 2016
**      by: Qt User Interface Compiler version 4.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LINKSINGLEELEMENTWIDGET_H
#define UI_LINKSINGLEELEMENTWIDGET_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_LinkSingleElementWidget
{
public:
    QVBoxLayout *main_layout;
    QHBoxLayout *header_layout;
    QLabel *label;
    QComboBox *folio_combo_box;
    QSpacerItem *horizontalSpacer;
    QVBoxLayout *content_layout;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *button_this;
    QPushButton *button_linked;

    void setupUi(QWidget *LinkSingleElementWidget)
    {
        if (LinkSingleElementWidget->objectName().isEmpty())
            LinkSingleElementWidget->setObjectName(QString::fromUtf8("LinkSingleElementWidget"));
        LinkSingleElementWidget->resize(400, 300);
        main_layout = new QVBoxLayout(LinkSingleElementWidget);
        main_layout->setObjectName(QString::fromUtf8("main_layout"));
        header_layout = new QHBoxLayout();
        header_layout->setObjectName(QString::fromUtf8("header_layout"));
        label = new QLabel(LinkSingleElementWidget);
        label->setObjectName(QString::fromUtf8("label"));

        header_layout->addWidget(label);

        folio_combo_box = new QComboBox(LinkSingleElementWidget);
        folio_combo_box->setObjectName(QString::fromUtf8("folio_combo_box"));

        header_layout->addWidget(folio_combo_box);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        header_layout->addItem(horizontalSpacer);


        main_layout->addLayout(header_layout);

        content_layout = new QVBoxLayout();
        content_layout->setObjectName(QString::fromUtf8("content_layout"));

        main_layout->addLayout(content_layout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        button_this = new QPushButton(LinkSingleElementWidget);
        button_this->setObjectName(QString::fromUtf8("button_this"));

        horizontalLayout_2->addWidget(button_this);

        button_linked = new QPushButton(LinkSingleElementWidget);
        button_linked->setObjectName(QString::fromUtf8("button_linked"));

        horizontalLayout_2->addWidget(button_linked);


        main_layout->addLayout(horizontalLayout_2);


        retranslateUi(LinkSingleElementWidget);

        QMetaObject::connectSlotsByName(LinkSingleElementWidget);
    } // setupUi

    void retranslateUi(QWidget *LinkSingleElementWidget)
    {
        LinkSingleElementWidget->setWindowTitle(QApplication::translate("LinkSingleElementWidget", "Form", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("LinkSingleElementWidget", "Rechercher dans le folio :", 0, QApplication::UnicodeUTF8));
        button_this->setText(QApplication::translate("LinkSingleElementWidget", "Voir cet \303\251l\303\251ment", 0, QApplication::UnicodeUTF8));
        button_linked->setText(QApplication::translate("LinkSingleElementWidget", "Voir l'\303\251l\303\251ment li\303\251", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class LinkSingleElementWidget: public Ui_LinkSingleElementWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LINKSINGLEELEMENTWIDGET_H
