/********************************************************************************
** Form generated from reading UI file 'reportpropertiewidget.ui'
**
** Created: Sat Feb 27 15:01:33 2016
**      by: Qt User Interface Compiler version 4.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REPORTPROPERTIEWIDGET_H
#define UI_REPORTPROPERTIEWIDGET_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QSpacerItem>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ReportPropertieWidget
{
public:
    QVBoxLayout *verticalLayout;
    QGroupBox *report_label_gb;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout;
    QLineEdit *line_edit;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *ReportPropertieWidget)
    {
        if (ReportPropertieWidget->objectName().isEmpty())
            ReportPropertieWidget->setObjectName(QString::fromUtf8("ReportPropertieWidget"));
        ReportPropertieWidget->resize(400, 300);
        verticalLayout = new QVBoxLayout(ReportPropertieWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        report_label_gb = new QGroupBox(ReportPropertieWidget);
        report_label_gb->setObjectName(QString::fromUtf8("report_label_gb"));
        verticalLayout_2 = new QVBoxLayout(report_label_gb);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        line_edit = new QLineEdit(report_label_gb);
        line_edit->setObjectName(QString::fromUtf8("line_edit"));

        horizontalLayout->addWidget(line_edit);


        verticalLayout_2->addLayout(horizontalLayout);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        label_ = new QLabel(report_label_gb);
        label_->setObjectName(QString::fromUtf8("label_"));
        label_->setScaledContents(false);
        label_->setWordWrap(true);

        verticalLayout_3->addWidget(label_);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer);


        verticalLayout_2->addLayout(verticalLayout_3);


        verticalLayout->addWidget(report_label_gb);


        retranslateUi(ReportPropertieWidget);

        QMetaObject::connectSlotsByName(ReportPropertieWidget);
    } // setupUi

    void retranslateUi(QWidget *ReportPropertieWidget)
    {
        ReportPropertieWidget->setWindowTitle(QApplication::translate("ReportPropertieWidget", "Form", 0, QApplication::UnicodeUTF8));
        report_label_gb->setTitle(QApplication::translate("ReportPropertieWidget", "Label de report de folio", 0, QApplication::UnicodeUTF8));
        label_->setText(QApplication::translate("ReportPropertieWidget", "Vous pouvez d\303\251finir un label personnalis\303\251 pour les reports de folio.\n"
"Cr\303\251er votre propre texte en vous aidant des variables suivantes :\n"
"%f : le num\303\251ro de folio \n"
"%l : le num\303\251ro de ligne\n"
"%c : le num\303\251ro de colonne", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class ReportPropertieWidget: public Ui_ReportPropertieWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REPORTPROPERTIEWIDGET_H
