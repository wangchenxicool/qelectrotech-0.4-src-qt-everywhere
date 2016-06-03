/********************************************************************************
** Form generated from reading UI file 'dialogautonum.ui'
**
** Created: Sat Feb 27 15:01:33 2016
**      by: Qt User Interface Compiler version 4.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGAUTONUM_H
#define UI_DIALOGAUTONUM_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QPushButton>
#include <QtGui/QRadioButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QTabWidget>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DialogAutoNum
{
public:
    QVBoxLayout *verticalLayout_2;
    QTabWidget *tabWidget;
    QWidget *configuration_tab;
    QVBoxLayout *verticalLayout_6;
    QVBoxLayout *configuration_layout;
    QWidget *annotation_tab;
    QVBoxLayout *verticalLayout_3;
    QVBoxLayout *verticalLayout;
    QGroupBox *groupBox_Selection;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout_;
    QRadioButton *radioButton_conductor;
    QRadioButton *radioButton_component;
    QVBoxLayout *verticalLayout_Selection;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *pushButton_annotation;
    QPushButton *pushButton_delete;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton_close;

    void setupUi(QDialog *DialogAutoNum)
    {
        if (DialogAutoNum->objectName().isEmpty())
            DialogAutoNum->setObjectName(QString::fromUtf8("DialogAutoNum"));
        DialogAutoNum->resize(482, 416);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/ico/oxygen-icons/32x32/apps/qelectrotech.png"), QSize(), QIcon::Normal, QIcon::Off);
        DialogAutoNum->setWindowIcon(icon);
        verticalLayout_2 = new QVBoxLayout(DialogAutoNum);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        tabWidget = new QTabWidget(DialogAutoNum);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        configuration_tab = new QWidget();
        configuration_tab->setObjectName(QString::fromUtf8("configuration_tab"));
        verticalLayout_6 = new QVBoxLayout(configuration_tab);
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        configuration_layout = new QVBoxLayout();
        configuration_layout->setSpacing(0);
        configuration_layout->setObjectName(QString::fromUtf8("configuration_layout"));

        verticalLayout_6->addLayout(configuration_layout);

        tabWidget->addTab(configuration_tab, QString());
        annotation_tab = new QWidget();
        annotation_tab->setObjectName(QString::fromUtf8("annotation_tab"));
        verticalLayout_3 = new QVBoxLayout(annotation_tab);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        groupBox_Selection = new QGroupBox(annotation_tab);
        groupBox_Selection->setObjectName(QString::fromUtf8("groupBox_Selection"));
        verticalLayout_4 = new QVBoxLayout(groupBox_Selection);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        horizontalLayout_ = new QHBoxLayout();
        horizontalLayout_->setObjectName(QString::fromUtf8("horizontalLayout_"));
        radioButton_conductor = new QRadioButton(groupBox_Selection);
        radioButton_conductor->setObjectName(QString::fromUtf8("radioButton_conductor"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/ico/22x22/conductor2.png"), QSize(), QIcon::Normal, QIcon::Off);
        radioButton_conductor->setIcon(icon1);
        radioButton_conductor->setChecked(true);

        horizontalLayout_->addWidget(radioButton_conductor);

        radioButton_component = new QRadioButton(groupBox_Selection);
        radioButton_component->setObjectName(QString::fromUtf8("radioButton_component"));
        radioButton_component->setEnabled(false);
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/ico/22x22/single_page.png"), QSize(), QIcon::Normal, QIcon::Off);
        radioButton_component->setIcon(icon2);

        horizontalLayout_->addWidget(radioButton_component);


        verticalLayout_4->addLayout(horizontalLayout_);

        verticalLayout_Selection = new QVBoxLayout();
        verticalLayout_Selection->setObjectName(QString::fromUtf8("verticalLayout_Selection"));

        verticalLayout_4->addLayout(verticalLayout_Selection);


        verticalLayout->addWidget(groupBox_Selection);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        pushButton_annotation = new QPushButton(annotation_tab);
        pushButton_annotation->setObjectName(QString::fromUtf8("pushButton_annotation"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/ico/16x16/edit-select-all.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_annotation->setIcon(icon3);

        horizontalLayout_2->addWidget(pushButton_annotation);

        pushButton_delete = new QPushButton(annotation_tab);
        pushButton_delete->setObjectName(QString::fromUtf8("pushButton_delete"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/ico/16x16/edit-delete.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_delete->setIcon(icon4);

        horizontalLayout_2->addWidget(pushButton_delete);


        verticalLayout->addLayout(horizontalLayout_2);


        verticalLayout_3->addLayout(verticalLayout);

        tabWidget->addTab(annotation_tab, QString());

        verticalLayout_2->addWidget(tabWidget);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        pushButton_close = new QPushButton(DialogAutoNum);
        pushButton_close->setObjectName(QString::fromUtf8("pushButton_close"));
        pushButton_close->setDefault(true);

        horizontalLayout->addWidget(pushButton_close);


        verticalLayout_2->addLayout(horizontalLayout);


        retranslateUi(DialogAutoNum);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(DialogAutoNum);
    } // setupUi

    void retranslateUi(QDialog *DialogAutoNum)
    {
        DialogAutoNum->setWindowTitle(QApplication::translate("DialogAutoNum", "Annotation des sch\303\251mas", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(configuration_tab), QApplication::translate("DialogAutoNum", "Configuration", 0, QApplication::UnicodeUTF8));
        groupBox_Selection->setTitle(QApplication::translate("DialogAutoNum", "S\303\251lection", 0, QApplication::UnicodeUTF8));
        radioButton_conductor->setText(QApplication::translate("DialogAutoNum", "Conducteurs", 0, QApplication::UnicodeUTF8));
        radioButton_component->setText(QApplication::translate("DialogAutoNum", "Composants", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        pushButton_annotation->setToolTip(QApplication::translate("DialogAutoNum", "<html><head/><body><p>Num\303\251rot\303\251e les folio s\303\251lectionn\303\251</p></body></html>", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        pushButton_annotation->setText(QApplication::translate("DialogAutoNum", "Annotation (alpha)", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        pushButton_delete->setToolTip(QApplication::translate("DialogAutoNum", "<html><head/><body><p>Supprim\303\251 la num\303\251rotation des folio s\303\251lectionn\303\251</p></body></html>", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        pushButton_delete->setText(QApplication::translate("DialogAutoNum", "Supprimer l'annotation", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(annotation_tab), QApplication::translate("DialogAutoNum", "Annotation", 0, QApplication::UnicodeUTF8));
        pushButton_close->setText(QApplication::translate("DialogAutoNum", "Fermer", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class DialogAutoNum: public Ui_DialogAutoNum {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGAUTONUM_H
