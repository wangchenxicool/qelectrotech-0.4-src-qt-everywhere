/********************************************************************************
** Form generated from reading UI file 'numparteditorw.ui'
**
** Created: Sat Feb 27 15:01:33 2016
**      by: Qt User Interface Compiler version 4.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NUMPARTEDITORW_H
#define UI_NUMPARTEDITORW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLineEdit>
#include <QtGui/QSpinBox>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_NumPartEditorW
{
public:
    QHBoxLayout *horizontalLayout_2;
    QComboBox *type_combo;
    QLineEdit *value_field;
    QSpinBox *increase_spinBox;

    void setupUi(QWidget *NumPartEditorW)
    {
        if (NumPartEditorW->objectName().isEmpty())
            NumPartEditorW->setObjectName(QString::fromUtf8("NumPartEditorW"));
        NumPartEditorW->resize(259, 42);
        horizontalLayout_2 = new QHBoxLayout(NumPartEditorW);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, -1, 0, -1);
        type_combo = new QComboBox(NumPartEditorW);
        type_combo->setObjectName(QString::fromUtf8("type_combo"));
        QSizePolicy sizePolicy(QSizePolicy::MinimumExpanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(type_combo->sizePolicy().hasHeightForWidth());
        type_combo->setSizePolicy(sizePolicy);

        horizontalLayout_2->addWidget(type_combo);

        value_field = new QLineEdit(NumPartEditorW);
        value_field->setObjectName(QString::fromUtf8("value_field"));
        sizePolicy.setHeightForWidth(value_field->sizePolicy().hasHeightForWidth());
        value_field->setSizePolicy(sizePolicy);

        horizontalLayout_2->addWidget(value_field);

        increase_spinBox = new QSpinBox(NumPartEditorW);
        increase_spinBox->setObjectName(QString::fromUtf8("increase_spinBox"));
        increase_spinBox->setEnabled(true);
        sizePolicy.setHeightForWidth(increase_spinBox->sizePolicy().hasHeightForWidth());
        increase_spinBox->setSizePolicy(sizePolicy);
        increase_spinBox->setMinimumSize(QSize(0, 0));
        increase_spinBox->setWrapping(false);
        increase_spinBox->setAlignment(Qt::AlignCenter);
        increase_spinBox->setAccelerated(true);
        increase_spinBox->setMinimum(1);

        horizontalLayout_2->addWidget(increase_spinBox);


        retranslateUi(NumPartEditorW);

        QMetaObject::connectSlotsByName(NumPartEditorW);
    } // setupUi

    void retranslateUi(QWidget *NumPartEditorW)
    {
        NumPartEditorW->setWindowTitle(QApplication::translate("NumPartEditorW", "Form", 0, QApplication::UnicodeUTF8));
        type_combo->clear();
        type_combo->insertItems(0, QStringList()
         << QApplication::translate("NumPartEditorW", "Chiffre 1", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("NumPartEditorW", "Chiffre 01", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("NumPartEditorW", "Chiffre 001", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("NumPartEditorW", "Texte", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("NumPartEditorW", "N\302\260 folio", 0, QApplication::UnicodeUTF8)
        );
        increase_spinBox->setSpecialValueText(QString());
        increase_spinBox->setPrefix(QString());
    } // retranslateUi

};

namespace Ui {
    class NumPartEditorW: public Ui_NumPartEditorW {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NUMPARTEDITORW_H
