/********************************************************************************
** Form generated from reading UI file 'autonumselectorwidget.ui'
**
** Created: Sat Feb 27 15:01:33 2016
**      by: Qt User Interface Compiler version 4.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_AUTONUMSELECTORWIDGET_H
#define UI_AUTONUMSELECTORWIDGET_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AutonumSelectorWidget
{
public:
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QComboBox *m_available_autonum_cb;
    QSpacerItem *horizontalSpacer;
    QPushButton *m_edit_autonum_pb;

    void setupUi(QWidget *AutonumSelectorWidget)
    {
        if (AutonumSelectorWidget->objectName().isEmpty())
            AutonumSelectorWidget->setObjectName(QString::fromUtf8("AutonumSelectorWidget"));
        AutonumSelectorWidget->resize(400, 300);
        horizontalLayout = new QHBoxLayout(AutonumSelectorWidget);
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(AutonumSelectorWidget);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        m_available_autonum_cb = new QComboBox(AutonumSelectorWidget);
        m_available_autonum_cb->setObjectName(QString::fromUtf8("m_available_autonum_cb"));

        horizontalLayout->addWidget(m_available_autonum_cb);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        m_edit_autonum_pb = new QPushButton(AutonumSelectorWidget);
        m_edit_autonum_pb->setObjectName(QString::fromUtf8("m_edit_autonum_pb"));
        m_edit_autonum_pb->setEnabled(true);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/ico/16x16/configure.png"), QSize(), QIcon::Normal, QIcon::Off);
        m_edit_autonum_pb->setIcon(icon);

        horizontalLayout->addWidget(m_edit_autonum_pb);


        retranslateUi(AutonumSelectorWidget);

        QMetaObject::connectSlotsByName(AutonumSelectorWidget);
    } // setupUi

    void retranslateUi(QWidget *AutonumSelectorWidget)
    {
        AutonumSelectorWidget->setWindowTitle(QApplication::translate("AutonumSelectorWidget", "Form", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("AutonumSelectorWidget", "Autonum\303\251rotation :", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        m_edit_autonum_pb->setToolTip(QApplication::translate("AutonumSelectorWidget", "\303\251diter les num\303\251rotations", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        m_edit_autonum_pb->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class AutonumSelectorWidget: public Ui_AutonumSelectorWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_AUTONUMSELECTORWIDGET_H
