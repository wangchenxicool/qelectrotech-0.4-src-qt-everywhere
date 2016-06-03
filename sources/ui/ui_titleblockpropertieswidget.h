/********************************************************************************
** Form generated from reading UI file 'titleblockpropertieswidget.ui'
**
** Created: Sat Feb 27 15:01:33 2016
**      by: Qt User Interface Compiler version 4.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TITLEBLOCKPROPERTIESWIDGET_H
#define UI_TITLEBLOCKPROPERTIESWIDGET_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QDateEdit>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QRadioButton>
#include <QtGui/QTabWidget>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TitleBlockPropertiesWidget
{
public:
    QVBoxLayout *verticalLayout_4;
    QGroupBox *m_tbt_gb;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *m_tbt_hlayout;
    QLabel *m_tbt_label;
    QComboBox *m_tbt_cb;
    QPushButton *m_tbt_pb;
    QTabWidget *tabWidget;
    QWidget *tab;
    QVBoxLayout *verticalLayout_2;
    QGridLayout *gridLayout_4;
    QLabel *label_6;
    QLabel *label_3;
    QLineEdit *m_file_le;
    QGridLayout *gridLayout_2;
    QRadioButton *m_no_date_rb;
    QRadioButton *m_current_date_rb;
    QPushButton *m_date_now_pb;
    QDateEdit *m_date_edit;
    QRadioButton *m_fixed_date_rb;
    QLabel *label_2;
    QLabel *label_5;
    QLineEdit *m_folio_le;
    QLabel *label_7;
    QLabel *label_4;
    QLineEdit *m_author_le;
    QLineEdit *m_title_le;
    QWidget *tab_2;
    QVBoxLayout *verticalLayout;
    QVBoxLayout *m_tab2_vlayout;
    QLabel *label_8;

    void setupUi(QWidget *TitleBlockPropertiesWidget)
    {
        if (TitleBlockPropertiesWidget->objectName().isEmpty())
            TitleBlockPropertiesWidget->setObjectName(QString::fromUtf8("TitleBlockPropertiesWidget"));
        TitleBlockPropertiesWidget->resize(528, 387);
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(TitleBlockPropertiesWidget->sizePolicy().hasHeightForWidth());
        TitleBlockPropertiesWidget->setSizePolicy(sizePolicy);
        TitleBlockPropertiesWidget->setMinimumSize(QSize(0, 0));
        verticalLayout_4 = new QVBoxLayout(TitleBlockPropertiesWidget);
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(-1, -1, -1, 9);
        m_tbt_gb = new QGroupBox(TitleBlockPropertiesWidget);
        m_tbt_gb->setObjectName(QString::fromUtf8("m_tbt_gb"));
        m_tbt_gb->setCheckable(false);
        m_tbt_gb->setChecked(false);
        verticalLayout_3 = new QVBoxLayout(m_tbt_gb);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        m_tbt_hlayout = new QHBoxLayout();
        m_tbt_hlayout->setObjectName(QString::fromUtf8("m_tbt_hlayout"));
        m_tbt_hlayout->setSizeConstraint(QLayout::SetDefaultConstraint);
        m_tbt_label = new QLabel(m_tbt_gb);
        m_tbt_label->setObjectName(QString::fromUtf8("m_tbt_label"));

        m_tbt_hlayout->addWidget(m_tbt_label);

        m_tbt_cb = new QComboBox(m_tbt_gb);
        m_tbt_cb->setObjectName(QString::fromUtf8("m_tbt_cb"));

        m_tbt_hlayout->addWidget(m_tbt_cb);

        m_tbt_pb = new QPushButton(m_tbt_gb);
        m_tbt_pb->setObjectName(QString::fromUtf8("m_tbt_pb"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/ico/16x16/label.png"), QSize(), QIcon::Normal, QIcon::Off);
        m_tbt_pb->setIcon(icon);
        m_tbt_pb->setFlat(false);

        m_tbt_hlayout->addWidget(m_tbt_pb);

        m_tbt_hlayout->setStretch(1, 1);

        verticalLayout_3->addLayout(m_tbt_hlayout);

        tabWidget = new QTabWidget(m_tbt_gb);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(tabWidget->sizePolicy().hasHeightForWidth());
        tabWidget->setSizePolicy(sizePolicy1);
        tabWidget->setTabPosition(QTabWidget::South);
        tabWidget->setTabShape(QTabWidget::Rounded);
        tabWidget->setElideMode(Qt::ElideNone);
        tabWidget->setUsesScrollButtons(true);
        tabWidget->setTabsClosable(false);
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        verticalLayout_2 = new QVBoxLayout(tab);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        gridLayout_4 = new QGridLayout();
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        label_6 = new QLabel(tab);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        gridLayout_4->addWidget(label_6, 5, 1, 1, 1);

        label_3 = new QLabel(tab);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout_4->addWidget(label_3, 2, 1, 1, 1);

        m_file_le = new QLineEdit(tab);
        m_file_le->setObjectName(QString::fromUtf8("m_file_le"));

        gridLayout_4->addWidget(m_file_le, 4, 2, 1, 1);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        m_no_date_rb = new QRadioButton(tab);
        m_no_date_rb->setObjectName(QString::fromUtf8("m_no_date_rb"));

        gridLayout_2->addWidget(m_no_date_rb, 0, 0, 1, 1);

        m_current_date_rb = new QRadioButton(tab);
        m_current_date_rb->setObjectName(QString::fromUtf8("m_current_date_rb"));

        gridLayout_2->addWidget(m_current_date_rb, 1, 0, 1, 1);

        m_date_now_pb = new QPushButton(tab);
        m_date_now_pb->setObjectName(QString::fromUtf8("m_date_now_pb"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/ico/22x22/start.png"), QSize(), QIcon::Normal, QIcon::Off);
        m_date_now_pb->setIcon(icon1);

        gridLayout_2->addWidget(m_date_now_pb, 2, 2, 1, 1);

        m_date_edit = new QDateEdit(tab);
        m_date_edit->setObjectName(QString::fromUtf8("m_date_edit"));
        m_date_edit->setFrame(true);
        m_date_edit->setCalendarPopup(true);

        gridLayout_2->addWidget(m_date_edit, 2, 1, 1, 1);

        m_fixed_date_rb = new QRadioButton(tab);
        m_fixed_date_rb->setObjectName(QString::fromUtf8("m_fixed_date_rb"));

        gridLayout_2->addWidget(m_fixed_date_rb, 2, 0, 1, 1);

        gridLayout_2->setColumnStretch(1, 1);

        gridLayout_4->addLayout(gridLayout_2, 3, 2, 1, 1);

        label_2 = new QLabel(tab);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout_4->addWidget(label_2, 1, 1, 1, 1);

        label_5 = new QLabel(tab);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout_4->addWidget(label_5, 4, 1, 1, 1);

        m_folio_le = new QLineEdit(tab);
        m_folio_le->setObjectName(QString::fromUtf8("m_folio_le"));

        gridLayout_4->addWidget(m_folio_le, 5, 2, 1, 1);

        label_7 = new QLabel(tab);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setFrameShape(QFrame::NoFrame);
        label_7->setScaledContents(false);
        label_7->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);

        gridLayout_4->addWidget(label_7, 6, 2, 1, 1);

        label_4 = new QLabel(tab);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);

        gridLayout_4->addWidget(label_4, 3, 1, 1, 1);

        m_author_le = new QLineEdit(tab);
        m_author_le->setObjectName(QString::fromUtf8("m_author_le"));

        gridLayout_4->addWidget(m_author_le, 2, 2, 1, 1);

        m_title_le = new QLineEdit(tab);
        m_title_le->setObjectName(QString::fromUtf8("m_title_le"));

        gridLayout_4->addWidget(m_title_le, 1, 2, 1, 1);


        verticalLayout_2->addLayout(gridLayout_4);

        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        verticalLayout = new QVBoxLayout(tab_2);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        m_tab2_vlayout = new QVBoxLayout();
        m_tab2_vlayout->setObjectName(QString::fromUtf8("m_tab2_vlayout"));
        label_8 = new QLabel(tab_2);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setWordWrap(true);

        m_tab2_vlayout->addWidget(label_8);


        verticalLayout->addLayout(m_tab2_vlayout);

        tabWidget->addTab(tab_2, QString());

        verticalLayout_3->addWidget(tabWidget);


        verticalLayout_4->addWidget(m_tbt_gb);


        retranslateUi(TitleBlockPropertiesWidget);
        QObject::connect(m_fixed_date_rb, SIGNAL(toggled(bool)), m_date_edit, SLOT(setEnabled(bool)));
        QObject::connect(m_fixed_date_rb, SIGNAL(toggled(bool)), m_date_now_pb, SLOT(setEnabled(bool)));

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(TitleBlockPropertiesWidget);
    } // setupUi

    void retranslateUi(QWidget *TitleBlockPropertiesWidget)
    {
        TitleBlockPropertiesWidget->setWindowTitle(QApplication::translate("TitleBlockPropertiesWidget", "Form", 0, QApplication::UnicodeUTF8));
        m_tbt_gb->setTitle(QApplication::translate("TitleBlockPropertiesWidget", "Informations des cartouches", 0, QApplication::UnicodeUTF8));
        m_tbt_label->setText(QApplication::translate("TitleBlockPropertiesWidget", "Mod\303\250le :", 0, QApplication::UnicodeUTF8));
        m_tbt_pb->setText(QString());
        label_6->setText(QApplication::translate("TitleBlockPropertiesWidget", "Folio :", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("TitleBlockPropertiesWidget", "Auteur :", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        m_file_le->setToolTip(QApplication::translate("TitleBlockPropertiesWidget", "Disponible en tant que %filename pour les mod\303\250les de cartouches", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        m_no_date_rb->setText(QApplication::translate("TitleBlockPropertiesWidget", "Pas de date", 0, QApplication::UnicodeUTF8));
        m_current_date_rb->setText(QApplication::translate("TitleBlockPropertiesWidget", "Date courante", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        m_date_now_pb->setToolTip(QApplication::translate("TitleBlockPropertiesWidget", "Appliquer la date actuelle", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        m_date_now_pb->setText(QString());
#ifndef QT_NO_TOOLTIP
        m_date_edit->setToolTip(QApplication::translate("TitleBlockPropertiesWidget", "Disponible en tant que %date pour les mod\303\250les de cartouches", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        m_fixed_date_rb->setText(QApplication::translate("TitleBlockPropertiesWidget", "Date fixe :", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("TitleBlockPropertiesWidget", "Titre :", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("TitleBlockPropertiesWidget", "Fichier :", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        m_folio_le->setToolTip(QApplication::translate("TitleBlockPropertiesWidget", "Disponible en tant que %folio pour les mod\303\250les de cartouches", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        label_7->setText(QApplication::translate("TitleBlockPropertiesWidget", "Les variables suivantes sont utilisables dans le champ Folio :\n"
"- %id : num\303\251ro du sch\303\251ma courant dans le projet \n"
"- %total : nombre total de sch\303\251mas dans le projet", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("TitleBlockPropertiesWidget", "Date :", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        m_author_le->setToolTip(QApplication::translate("TitleBlockPropertiesWidget", "Disponible en tant que %author pour les mod\303\250les de cartouches", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        m_title_le->setToolTip(QApplication::translate("TitleBlockPropertiesWidget", "Disponible en tant que %title pour les mod\303\250les de cartouches", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("TitleBlockPropertiesWidget", "Principales", 0, QApplication::UnicodeUTF8));
        label_8->setText(QApplication::translate("TitleBlockPropertiesWidget", "Vous pouvez d\303\251finir ici vos propres associations noms/valeurs pour que le cartouche en tienne compte. Exemple :\n"
"associer le nom \"volta\" et la valeur \"1745\" remplacera %{volta} par 1745 dans le cartouche.", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("TitleBlockPropertiesWidget", "Personnalis\303\251es", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class TitleBlockPropertiesWidget: public Ui_TitleBlockPropertiesWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TITLEBLOCKPROPERTIESWIDGET_H
