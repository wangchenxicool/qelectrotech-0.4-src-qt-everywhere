/********************************************************************************
** Form generated from reading UI file 'borderpropertieswidget.ui'
**
** Created: Sat Feb 27 15:01:33 2016
**      by: Qt User Interface Compiler version 4.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BORDERPROPERTIESWIDGET_H
#define UI_BORDERPROPERTIESWIDGET_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QSpinBox>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_BorderPropertiesWidget
{
public:
    QVBoxLayout *verticalLayout;
    QGroupBox *border_gb;
    QGridLayout *gridLayout;
    QSpinBox *m_rows_height_sp;
    QLabel *label_3;
    QCheckBox *m_grey_bg_cb;
    QLabel *label_2;
    QLabel *label_4;
    QCheckBox *m_display_rows_cb;
    QSpinBox *m_columns_width_sp;
    QSpinBox *m_rows_count_sp;
    QCheckBox *m_display_columns_cb;
    QSpinBox *m_colums_count_sp;

    void setupUi(QWidget *BorderPropertiesWidget)
    {
        if (BorderPropertiesWidget->objectName().isEmpty())
            BorderPropertiesWidget->setObjectName(QString::fromUtf8("BorderPropertiesWidget"));
        BorderPropertiesWidget->resize(412, 300);
        verticalLayout = new QVBoxLayout(BorderPropertiesWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        border_gb = new QGroupBox(BorderPropertiesWidget);
        border_gb->setObjectName(QString::fromUtf8("border_gb"));
        gridLayout = new QGridLayout(border_gb);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        m_rows_height_sp = new QSpinBox(border_gb);
        m_rows_height_sp->setObjectName(QString::fromUtf8("m_rows_height_sp"));
        m_rows_height_sp->setMaximum(1000);

        gridLayout->addWidget(m_rows_height_sp, 1, 2, 1, 1);

        label_3 = new QLabel(border_gb);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 1, 0, 1, 1);

        m_grey_bg_cb = new QCheckBox(border_gb);
        m_grey_bg_cb->setObjectName(QString::fromUtf8("m_grey_bg_cb"));

        gridLayout->addWidget(m_grey_bg_cb, 2, 3, 1, 1);

        label_2 = new QLabel(border_gb);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 0, 0, 1, 1);

        label_4 = new QLabel(border_gb);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout->addWidget(label_4, 2, 0, 1, 1);

        m_display_rows_cb = new QCheckBox(border_gb);
        m_display_rows_cb->setObjectName(QString::fromUtf8("m_display_rows_cb"));

        gridLayout->addWidget(m_display_rows_cb, 1, 3, 1, 1);

        m_columns_width_sp = new QSpinBox(border_gb);
        m_columns_width_sp->setObjectName(QString::fromUtf8("m_columns_width_sp"));
        m_columns_width_sp->setMaximum(1000);

        gridLayout->addWidget(m_columns_width_sp, 0, 2, 1, 1);

        m_rows_count_sp = new QSpinBox(border_gb);
        m_rows_count_sp->setObjectName(QString::fromUtf8("m_rows_count_sp"));

        gridLayout->addWidget(m_rows_count_sp, 1, 1, 1, 1);

        m_display_columns_cb = new QCheckBox(border_gb);
        m_display_columns_cb->setObjectName(QString::fromUtf8("m_display_columns_cb"));

        gridLayout->addWidget(m_display_columns_cb, 0, 3, 1, 1);

        m_colums_count_sp = new QSpinBox(border_gb);
        m_colums_count_sp->setObjectName(QString::fromUtf8("m_colums_count_sp"));

        gridLayout->addWidget(m_colums_count_sp, 0, 1, 1, 1);


        verticalLayout->addWidget(border_gb);


        retranslateUi(BorderPropertiesWidget);

        QMetaObject::connectSlotsByName(BorderPropertiesWidget);
    } // setupUi

    void retranslateUi(QWidget *BorderPropertiesWidget)
    {
        BorderPropertiesWidget->setWindowTitle(QApplication::translate("BorderPropertiesWidget", "Form", 0, QApplication::UnicodeUTF8));
        border_gb->setTitle(QApplication::translate("BorderPropertiesWidget", "Dimensions du sch\303\251ma", 0, QApplication::UnicodeUTF8));
        m_rows_height_sp->setSuffix(QApplication::translate("BorderPropertiesWidget", "px", "pixel", QApplication::UnicodeUTF8));
        m_rows_height_sp->setPrefix(QApplication::translate("BorderPropertiesWidget", "x", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("BorderPropertiesWidget", "Lignes :", 0, QApplication::UnicodeUTF8));
        m_grey_bg_cb->setText(QApplication::translate("BorderPropertiesWidget", "Gris", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("BorderPropertiesWidget", "Colonnes :", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("BorderPropertiesWidget", "Couleur de fond :", 0, QApplication::UnicodeUTF8));
        m_display_rows_cb->setText(QApplication::translate("BorderPropertiesWidget", "Afficher les en-t\303\252tes", 0, QApplication::UnicodeUTF8));
        m_columns_width_sp->setSuffix(QApplication::translate("BorderPropertiesWidget", "px", "pixel", QApplication::UnicodeUTF8));
        m_columns_width_sp->setPrefix(QApplication::translate("BorderPropertiesWidget", "x", 0, QApplication::UnicodeUTF8));
        m_display_columns_cb->setText(QApplication::translate("BorderPropertiesWidget", "Afficher les en-t\303\252tes", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class BorderPropertiesWidget: public Ui_BorderPropertiesWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BORDERPROPERTIESWIDGET_H
