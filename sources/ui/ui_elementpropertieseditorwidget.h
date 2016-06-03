/********************************************************************************
** Form generated from reading UI file 'elementpropertieseditorwidget.ui'
**
** Created: Sat Feb 27 15:01:33 2016
**      by: Qt User Interface Compiler version 4.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ELEMENTPROPERTIESEDITORWIDGET_H
#define UI_ELEMENTPROPERTIESEDITORWIDGET_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QSpacerItem>
#include <QtGui/QSpinBox>
#include <QtGui/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_ElementPropertiesEditorWidget
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QComboBox *m_base_type_cb;
    QGroupBox *m_slave_gb;
    QVBoxLayout *verticalLayout_2;
    QGridLayout *gridLayout;
    QSpinBox *m_number_ctc;
    QLabel *label_4;
    QLabel *label_3;
    QLabel *label_2;
    QComboBox *m_state_cb;
    QComboBox *m_type_cb;
    QGroupBox *m_master_gb;
    QGridLayout *gridLayout_3;
    QLabel *label_5;
    QComboBox *m_master_type_cb;
    QSpacerItem *verticalSpacer;
    QDialogButtonBox *m_buttonBox;

    void setupUi(QDialog *ElementPropertiesEditorWidget)
    {
        if (ElementPropertiesEditorWidget->objectName().isEmpty())
            ElementPropertiesEditorWidget->setObjectName(QString::fromUtf8("ElementPropertiesEditorWidget"));
        ElementPropertiesEditorWidget->resize(400, 300);
        ElementPropertiesEditorWidget->setSizeGripEnabled(false);
        verticalLayout = new QVBoxLayout(ElementPropertiesEditorWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(ElementPropertiesEditorWidget);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        m_base_type_cb = new QComboBox(ElementPropertiesEditorWidget);
        m_base_type_cb->setObjectName(QString::fromUtf8("m_base_type_cb"));

        horizontalLayout->addWidget(m_base_type_cb);


        verticalLayout->addLayout(horizontalLayout);

        m_slave_gb = new QGroupBox(ElementPropertiesEditorWidget);
        m_slave_gb->setObjectName(QString::fromUtf8("m_slave_gb"));
        verticalLayout_2 = new QVBoxLayout(m_slave_gb);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        m_number_ctc = new QSpinBox(m_slave_gb);
        m_number_ctc->setObjectName(QString::fromUtf8("m_number_ctc"));
        m_number_ctc->setMinimum(1);

        gridLayout->addWidget(m_number_ctc, 3, 1, 1, 1);

        label_4 = new QLabel(m_slave_gb);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout->addWidget(label_4, 3, 0, 1, 1);

        label_3 = new QLabel(m_slave_gb);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 2, 0, 1, 1);

        label_2 = new QLabel(m_slave_gb);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        m_state_cb = new QComboBox(m_slave_gb);
        m_state_cb->setObjectName(QString::fromUtf8("m_state_cb"));

        gridLayout->addWidget(m_state_cb, 1, 1, 1, 1);

        m_type_cb = new QComboBox(m_slave_gb);
        m_type_cb->setObjectName(QString::fromUtf8("m_type_cb"));

        gridLayout->addWidget(m_type_cb, 2, 1, 1, 1);


        verticalLayout_2->addLayout(gridLayout);


        verticalLayout->addWidget(m_slave_gb);

        m_master_gb = new QGroupBox(ElementPropertiesEditorWidget);
        m_master_gb->setObjectName(QString::fromUtf8("m_master_gb"));
        gridLayout_3 = new QGridLayout(m_master_gb);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        label_5 = new QLabel(m_master_gb);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout_3->addWidget(label_5, 0, 0, 1, 1);

        m_master_type_cb = new QComboBox(m_master_gb);
        m_master_type_cb->setObjectName(QString::fromUtf8("m_master_type_cb"));

        gridLayout_3->addWidget(m_master_type_cb, 0, 1, 1, 1);


        verticalLayout->addWidget(m_master_gb);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        m_buttonBox = new QDialogButtonBox(ElementPropertiesEditorWidget);
        m_buttonBox->setObjectName(QString::fromUtf8("m_buttonBox"));
        m_buttonBox->setOrientation(Qt::Horizontal);
        m_buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(m_buttonBox);


        retranslateUi(ElementPropertiesEditorWidget);
        QObject::connect(m_buttonBox, SIGNAL(accepted()), ElementPropertiesEditorWidget, SLOT(accept()));
        QObject::connect(m_buttonBox, SIGNAL(rejected()), ElementPropertiesEditorWidget, SLOT(reject()));

        QMetaObject::connectSlotsByName(ElementPropertiesEditorWidget);
    } // setupUi

    void retranslateUi(QDialog *ElementPropertiesEditorWidget)
    {
        ElementPropertiesEditorWidget->setWindowTitle(QApplication::translate("ElementPropertiesEditorWidget", "Propri\303\251t\303\251 de l'\303\251l\303\251ment", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("ElementPropertiesEditorWidget", "Type de base :", 0, QApplication::UnicodeUTF8));
        m_slave_gb->setTitle(QApplication::translate("ElementPropertiesEditorWidget", "\303\211l\303\251ment esclave", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("ElementPropertiesEditorWidget", "Nombre de contact repr\303\251sent\303\251", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("ElementPropertiesEditorWidget", "Type de contact", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("ElementPropertiesEditorWidget", "\303\211tat du contact", 0, QApplication::UnicodeUTF8));
        m_master_gb->setTitle(QApplication::translate("ElementPropertiesEditorWidget", "\303\211l\303\251ment ma\303\256tre", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("ElementPropertiesEditorWidget", "Type concret", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class ElementPropertiesEditorWidget: public Ui_ElementPropertiesEditorWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ELEMENTPROPERTIESEDITORWIDGET_H
