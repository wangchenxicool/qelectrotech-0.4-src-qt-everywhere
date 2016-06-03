/********************************************************************************
** Form generated from reading UI file 'selectautonumw.ui'
**
** Created: Sat Feb 27 15:01:33 2016
**      by: Qt User Interface Compiler version 4.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SELECTAUTONUMW_H
#define UI_SELECTAUTONUMW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SelectAutonumW
{
public:
    QVBoxLayout *verticalLayout;
    QGroupBox *definition_groupe;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *remove_button;
    QPushButton *add_button;
    QPushButton *m_previous_pb;
    QPushButton *m_next_pb;
    QSpacerItem *horizontalSpacer;
    QVBoxLayout *editor_layout;
    QHBoxLayout *label_layout;
    QLabel *type_label;
    QLabel *value_label;
    QLabel *increase_label;
    QSpacerItem *verticalSpacer;
    QDialogButtonBox *buttonBox;

    void setupUi(QWidget *SelectAutonumW)
    {
        if (SelectAutonumW->objectName().isEmpty())
            SelectAutonumW->setObjectName(QString::fromUtf8("SelectAutonumW"));
        SelectAutonumW->resize(432, 273);
        verticalLayout = new QVBoxLayout(SelectAutonumW);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        definition_groupe = new QGroupBox(SelectAutonumW);
        definition_groupe->setObjectName(QString::fromUtf8("definition_groupe"));
        verticalLayout_3 = new QVBoxLayout(definition_groupe);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        remove_button = new QPushButton(definition_groupe);
        remove_button->setObjectName(QString::fromUtf8("remove_button"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/ico/22x22/list-remove.png"), QSize(), QIcon::Normal, QIcon::Off);
        remove_button->setIcon(icon);
        remove_button->setFlat(false);

        horizontalLayout->addWidget(remove_button);

        add_button = new QPushButton(definition_groupe);
        add_button->setObjectName(QString::fromUtf8("add_button"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/ico/22x22/list-add.png"), QSize(), QIcon::Normal, QIcon::Off);
        add_button->setIcon(icon1);
        add_button->setFlat(false);

        horizontalLayout->addWidget(add_button);

        m_previous_pb = new QPushButton(definition_groupe);
        m_previous_pb->setObjectName(QString::fromUtf8("m_previous_pb"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/ico/16x16/arrow-left.png"), QSize(), QIcon::Normal, QIcon::Off);
        m_previous_pb->setIcon(icon2);

        horizontalLayout->addWidget(m_previous_pb);

        m_next_pb = new QPushButton(definition_groupe);
        m_next_pb->setObjectName(QString::fromUtf8("m_next_pb"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/ico/16x16/arrow-right.png"), QSize(), QIcon::Normal, QIcon::Off);
        m_next_pb->setIcon(icon3);

        horizontalLayout->addWidget(m_next_pb);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        verticalLayout_3->addLayout(horizontalLayout);

        editor_layout = new QVBoxLayout();
        editor_layout->setSpacing(0);
        editor_layout->setObjectName(QString::fromUtf8("editor_layout"));
        label_layout = new QHBoxLayout();
        label_layout->setSpacing(0);
        label_layout->setObjectName(QString::fromUtf8("label_layout"));
        type_label = new QLabel(definition_groupe);
        type_label->setObjectName(QString::fromUtf8("type_label"));
        type_label->setAlignment(Qt::AlignCenter);

        label_layout->addWidget(type_label);

        value_label = new QLabel(definition_groupe);
        value_label->setObjectName(QString::fromUtf8("value_label"));
        value_label->setAlignment(Qt::AlignCenter);

        label_layout->addWidget(value_label);

        increase_label = new QLabel(definition_groupe);
        increase_label->setObjectName(QString::fromUtf8("increase_label"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(increase_label->sizePolicy().hasHeightForWidth());
        increase_label->setSizePolicy(sizePolicy);
        increase_label->setAlignment(Qt::AlignCenter);

        label_layout->addWidget(increase_label);


        editor_layout->addLayout(label_layout);


        verticalLayout_3->addLayout(editor_layout);


        verticalLayout->addWidget(definition_groupe);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        buttonBox = new QDialogButtonBox(SelectAutonumW);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setStandardButtons(QDialogButtonBox::Apply|QDialogButtonBox::Help|QDialogButtonBox::Reset);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(SelectAutonumW);

        QMetaObject::connectSlotsByName(SelectAutonumW);
    } // setupUi

    void retranslateUi(QWidget *SelectAutonumW)
    {
        SelectAutonumW->setWindowTitle(QApplication::translate("SelectAutonumW", "Form", 0, QApplication::UnicodeUTF8));
        definition_groupe->setTitle(QApplication::translate("SelectAutonumW", "D\303\251finition", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        remove_button->setToolTip(QApplication::translate("SelectAutonumW", "<html><head/><body><p>Supprimer une variable de num\303\251rotation</p></body></html>", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        remove_button->setText(QString());
#ifndef QT_NO_TOOLTIP
        add_button->setToolTip(QApplication::translate("SelectAutonumW", "<html><head/><body><p>Ajouter une variable de num\303\251rotation</p></body></html>", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        add_button->setText(QString());
#ifndef QT_NO_TOOLTIP
        m_previous_pb->setToolTip(QApplication::translate("SelectAutonumW", "Pr\303\251c\303\251dent", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        m_previous_pb->setText(QString());
#ifndef QT_NO_TOOLTIP
        m_next_pb->setToolTip(QApplication::translate("SelectAutonumW", "Suivant", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        m_next_pb->setText(QString());
        type_label->setText(QApplication::translate("SelectAutonumW", "Type", 0, QApplication::UnicodeUTF8));
        value_label->setText(QApplication::translate("SelectAutonumW", "Valeur", 0, QApplication::UnicodeUTF8));
        increase_label->setText(QApplication::translate("SelectAutonumW", "Incr\303\251mentation", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class SelectAutonumW: public Ui_SelectAutonumW {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SELECTAUTONUMW_H
