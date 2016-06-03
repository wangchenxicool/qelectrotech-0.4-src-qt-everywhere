/********************************************************************************
** Form generated from reading UI file 'conductorpropertiesdialog.ui'
**
** Created: Sat Feb 27 15:01:33 2016
**      by: Qt User Interface Compiler version 4.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONDUCTORPROPERTIESDIALOG_H
#define UI_CONDUCTORPROPERTIESDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QHeaderView>
#include <QtGui/QSpacerItem>
#include <QtGui/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_ConductorPropertiesDialog
{
public:
    QVBoxLayout *main_layout;
    QSpacerItem *verticalSpacer;
    QCheckBox *m_apply_all_cb;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *ConductorPropertiesDialog)
    {
        if (ConductorPropertiesDialog->objectName().isEmpty())
            ConductorPropertiesDialog->setObjectName(QString::fromUtf8("ConductorPropertiesDialog"));
        ConductorPropertiesDialog->resize(430, 300);
        main_layout = new QVBoxLayout(ConductorPropertiesDialog);
        main_layout->setObjectName(QString::fromUtf8("main_layout"));
        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        main_layout->addItem(verticalSpacer);

        m_apply_all_cb = new QCheckBox(ConductorPropertiesDialog);
        m_apply_all_cb->setObjectName(QString::fromUtf8("m_apply_all_cb"));
        m_apply_all_cb->setChecked(true);

        main_layout->addWidget(m_apply_all_cb);

        buttonBox = new QDialogButtonBox(ConductorPropertiesDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        main_layout->addWidget(buttonBox);


        retranslateUi(ConductorPropertiesDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), ConductorPropertiesDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), ConductorPropertiesDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(ConductorPropertiesDialog);
    } // setupUi

    void retranslateUi(QDialog *ConductorPropertiesDialog)
    {
        ConductorPropertiesDialog->setWindowTitle(QApplication::translate("ConductorPropertiesDialog", "\303\211diter les propri\303\251t\303\251s d'un conducteur", 0, QApplication::UnicodeUTF8));
        m_apply_all_cb->setText(QApplication::translate("ConductorPropertiesDialog", "Appliquer les propri\303\251t\303\251s \303\240 l'ensemble des conducteurs de ce potentiel", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class ConductorPropertiesDialog: public Ui_ConductorPropertiesDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONDUCTORPROPERTIESDIALOG_H
