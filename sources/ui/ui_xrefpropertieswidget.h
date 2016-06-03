/********************************************************************************
** Form generated from reading UI file 'xrefpropertieswidget.ui'
**
** Created: Sat Feb 27 15:01:33 2016
**      by: Qt User Interface Compiler version 4.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_XREFPROPERTIESWIDGET_H
#define UI_XREFPROPERTIESWIDGET_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QComboBox>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QRadioButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_XRefPropertiesWidget
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_4;
    QComboBox *m_type_cb;
    QGroupBox *m_display_gb;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout;
    QLabel *label_3;
    QComboBox *m_snap_to_cb;
    QVBoxLayout *verticalLayout_2;
    QRadioButton *m_display_has_cross_rb;
    QRadioButton *m_display_has_contacts_rb;
    QGroupBox *m_cross_properties_gb;
    QVBoxLayout *verticalLayout_4;
    QCheckBox *m_show_power_cb;
    QGridLayout *gridLayout;
    QLabel *label;
    QLabel *label_2;
    QLineEdit *m_delay_prefix_le;
    QLineEdit *m_power_prefix_le;
    QLabel *label_5;
    QLineEdit *m_switch_prefix_le;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *XRefPropertiesWidget)
    {
        if (XRefPropertiesWidget->objectName().isEmpty())
            XRefPropertiesWidget->setObjectName(QString::fromUtf8("XRefPropertiesWidget"));
        XRefPropertiesWidget->resize(484, 470);
        verticalLayout = new QVBoxLayout(XRefPropertiesWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_4 = new QLabel(XRefPropertiesWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        horizontalLayout_2->addWidget(label_4);

        m_type_cb = new QComboBox(XRefPropertiesWidget);
        m_type_cb->setObjectName(QString::fromUtf8("m_type_cb"));

        horizontalLayout_2->addWidget(m_type_cb);


        verticalLayout->addLayout(horizontalLayout_2);

        m_display_gb = new QGroupBox(XRefPropertiesWidget);
        m_display_gb->setObjectName(QString::fromUtf8("m_display_gb"));
        verticalLayout_3 = new QVBoxLayout(m_display_gb);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label_3 = new QLabel(m_display_gb);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout->addWidget(label_3);

        m_snap_to_cb = new QComboBox(m_display_gb);
        m_snap_to_cb->setObjectName(QString::fromUtf8("m_snap_to_cb"));

        horizontalLayout->addWidget(m_snap_to_cb);


        verticalLayout_3->addLayout(horizontalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        m_display_has_cross_rb = new QRadioButton(m_display_gb);
        m_display_has_cross_rb->setObjectName(QString::fromUtf8("m_display_has_cross_rb"));

        verticalLayout_2->addWidget(m_display_has_cross_rb);

        m_display_has_contacts_rb = new QRadioButton(m_display_gb);
        m_display_has_contacts_rb->setObjectName(QString::fromUtf8("m_display_has_contacts_rb"));

        verticalLayout_2->addWidget(m_display_has_contacts_rb);


        verticalLayout_3->addLayout(verticalLayout_2);


        verticalLayout->addWidget(m_display_gb);

        m_cross_properties_gb = new QGroupBox(XRefPropertiesWidget);
        m_cross_properties_gb->setObjectName(QString::fromUtf8("m_cross_properties_gb"));
        verticalLayout_4 = new QVBoxLayout(m_cross_properties_gb);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        m_show_power_cb = new QCheckBox(m_cross_properties_gb);
        m_show_power_cb->setObjectName(QString::fromUtf8("m_show_power_cb"));

        verticalLayout_4->addWidget(m_show_power_cb);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label = new QLabel(m_cross_properties_gb);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        label_2 = new QLabel(m_cross_properties_gb);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        m_delay_prefix_le = new QLineEdit(m_cross_properties_gb);
        m_delay_prefix_le->setObjectName(QString::fromUtf8("m_delay_prefix_le"));

        gridLayout->addWidget(m_delay_prefix_le, 1, 1, 1, 1);

        m_power_prefix_le = new QLineEdit(m_cross_properties_gb);
        m_power_prefix_le->setObjectName(QString::fromUtf8("m_power_prefix_le"));

        gridLayout->addWidget(m_power_prefix_le, 0, 1, 1, 1);

        label_5 = new QLabel(m_cross_properties_gb);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout->addWidget(label_5, 2, 0, 1, 1);

        m_switch_prefix_le = new QLineEdit(m_cross_properties_gb);
        m_switch_prefix_le->setObjectName(QString::fromUtf8("m_switch_prefix_le"));

        gridLayout->addWidget(m_switch_prefix_le, 2, 1, 1, 1);


        verticalLayout_4->addLayout(gridLayout);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_4->addItem(verticalSpacer);


        verticalLayout->addWidget(m_cross_properties_gb);


        retranslateUi(XRefPropertiesWidget);

        QMetaObject::connectSlotsByName(XRefPropertiesWidget);
    } // setupUi

    void retranslateUi(QWidget *XRefPropertiesWidget)
    {
        XRefPropertiesWidget->setWindowTitle(QApplication::translate("XRefPropertiesWidget", "Form", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("XRefPropertiesWidget", "Type :", 0, QApplication::UnicodeUTF8));
        m_display_gb->setTitle(QApplication::translate("XRefPropertiesWidget", "Repr\303\251sentation:", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("XRefPropertiesWidget", "Positionner :", 0, QApplication::UnicodeUTF8));
        m_display_has_cross_rb->setText(QApplication::translate("XRefPropertiesWidget", "Afficher en croix", 0, QApplication::UnicodeUTF8));
        m_display_has_contacts_rb->setText(QApplication::translate("XRefPropertiesWidget", "Afficher en contacts", 0, QApplication::UnicodeUTF8));
        m_cross_properties_gb->setTitle(QApplication::translate("XRefPropertiesWidget", "Option d'affichage en croix", 0, QApplication::UnicodeUTF8));
        m_show_power_cb->setText(QApplication::translate("XRefPropertiesWidget", "Afficher les contacts de puissance dans la croix", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("XRefPropertiesWidget", "Pr\303\251fixe des contacts de puissance :", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("XRefPropertiesWidget", "Pr\303\251fixe des contacts temporis\303\251s :", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("XRefPropertiesWidget", "Pr\303\251fixe des contacts inverseurs :", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class XRefPropertiesWidget: public Ui_XRefPropertiesWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_XREFPROPERTIESWIDGET_H
