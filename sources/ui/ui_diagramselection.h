/********************************************************************************
** Form generated from reading UI file 'diagramselection.ui'
**
** Created: Sat Feb 27 15:01:33 2016
**      by: Qt User Interface Compiler version 4.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIAGRAMSELECTION_H
#define UI_DIAGRAMSELECTION_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QTableWidget>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_diagramselection
{
public:
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QLabel *label_prj;
    QTableWidget *tableDiagram;

    void setupUi(QWidget *diagramselection)
    {
        if (diagramselection->objectName().isEmpty())
            diagramselection->setObjectName(QString::fromUtf8("diagramselection"));
        diagramselection->resize(400, 300);
        verticalLayout_2 = new QVBoxLayout(diagramselection);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label_prj = new QLabel(diagramselection);
        label_prj->setObjectName(QString::fromUtf8("label_prj"));

        verticalLayout->addWidget(label_prj);

        tableDiagram = new QTableWidget(diagramselection);
        tableDiagram->setObjectName(QString::fromUtf8("tableDiagram"));
        tableDiagram->setContextMenuPolicy(Qt::CustomContextMenu);
        tableDiagram->setFrameShape(QFrame::StyledPanel);

        verticalLayout->addWidget(tableDiagram);


        verticalLayout_2->addLayout(verticalLayout);


        retranslateUi(diagramselection);

        QMetaObject::connectSlotsByName(diagramselection);
    } // setupUi

    void retranslateUi(QWidget *diagramselection)
    {
        diagramselection->setWindowTitle(QApplication::translate("diagramselection", "Form", 0, QApplication::UnicodeUTF8));
        label_prj->setText(QApplication::translate("diagramselection", "TextLabel", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class diagramselection: public Ui_diagramselection {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIAGRAMSELECTION_H
