/********************************************************************************
** Form generated from reading UI file 'elementinfopartwidget.ui'
**
** Created: Sat Feb 27 15:01:33 2016
**      by: Qt User Interface Compiler version 4.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ELEMENTINFOPARTWIDGET_H
#define UI_ELEMENTINFOPARTWIDGET_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ElementInfoPartWidget
{
public:
    QGridLayout *gridLayout_2;
    QLabel *label_;
    QCheckBox *checkBox;
    QLineEdit *line_edit;

    void setupUi(QWidget *ElementInfoPartWidget)
    {
        if (ElementInfoPartWidget->objectName().isEmpty())
            ElementInfoPartWidget->setObjectName(QString::fromUtf8("ElementInfoPartWidget"));
        ElementInfoPartWidget->resize(400, 300);
        gridLayout_2 = new QGridLayout(ElementInfoPartWidget);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setSizeConstraint(QLayout::SetMinimumSize);
        gridLayout_2->setHorizontalSpacing(0);
        gridLayout_2->setVerticalSpacing(2);
        gridLayout_2->setContentsMargins(0, 2, 0, 2);
        label_ = new QLabel(ElementInfoPartWidget);
        label_->setObjectName(QString::fromUtf8("label_"));

        gridLayout_2->addWidget(label_, 1, 0, 1, 1);

        checkBox = new QCheckBox(ElementInfoPartWidget);
        checkBox->setObjectName(QString::fromUtf8("checkBox"));

        gridLayout_2->addWidget(checkBox, 2, 1, 1, 1);

        line_edit = new QLineEdit(ElementInfoPartWidget);
        line_edit->setObjectName(QString::fromUtf8("line_edit"));

        gridLayout_2->addWidget(line_edit, 2, 0, 1, 1);


        retranslateUi(ElementInfoPartWidget);

        QMetaObject::connectSlotsByName(ElementInfoPartWidget);
    } // setupUi

    void retranslateUi(QWidget *ElementInfoPartWidget)
    {
        ElementInfoPartWidget->setWindowTitle(QApplication::translate("ElementInfoPartWidget", "Form", 0, QApplication::UnicodeUTF8));
        label_->setText(QApplication::translate("ElementInfoPartWidget", "TextLabel", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        checkBox->setToolTip(QApplication::translate("ElementInfoPartWidget", "Visible", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        checkBox->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class ElementInfoPartWidget: public Ui_ElementInfoPartWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ELEMENTINFOPARTWIDGET_H
