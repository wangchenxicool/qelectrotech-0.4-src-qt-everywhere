/********************************************************************************
** Form generated from reading UI file 'potentialtextsdialog.ui'
**
** Created: Sat Feb 27 15:01:33 2016
**      by: Qt User Interface Compiler version 4.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_POTENTIALTEXTSDIALOG_H
#define UI_POTENTIALTEXTSDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QSpacerItem>
#include <QtGui/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_PotentialTextsDialog
{
public:
    QVBoxLayout *verticalLayout;
    QVBoxLayout *verticalLayout_3;
    QLabel *label;
    QVBoxLayout *m_buttons_layout;
    QSpacerItem *verticalSpacer;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *PotentialTextsDialog)
    {
        if (PotentialTextsDialog->objectName().isEmpty())
            PotentialTextsDialog->setObjectName(QString::fromUtf8("PotentialTextsDialog"));
        PotentialTextsDialog->resize(400, 94);
        verticalLayout = new QVBoxLayout(PotentialTextsDialog);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        label = new QLabel(PotentialTextsDialog);
        label->setObjectName(QString::fromUtf8("label"));

        verticalLayout_3->addWidget(label);


        verticalLayout->addLayout(verticalLayout_3);

        m_buttons_layout = new QVBoxLayout();
        m_buttons_layout->setObjectName(QString::fromUtf8("m_buttons_layout"));

        verticalLayout->addLayout(m_buttons_layout);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        buttonBox = new QDialogButtonBox(PotentialTextsDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(PotentialTextsDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), PotentialTextsDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), PotentialTextsDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(PotentialTextsDialog);
    } // setupUi

    void retranslateUi(QDialog *PotentialTextsDialog)
    {
        PotentialTextsDialog->setWindowTitle(QApplication::translate("PotentialTextsDialog", "Textes de potentiel", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("PotentialTextsDialog", "Les textes de ce potentiel \303\251lectrique ne sont pas identiques.\n"
"Appliquer un texte \303\240 l'ensemble de ces conducteurs?", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class PotentialTextsDialog: public Ui_PotentialTextsDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_POTENTIALTEXTSDIALOG_H
