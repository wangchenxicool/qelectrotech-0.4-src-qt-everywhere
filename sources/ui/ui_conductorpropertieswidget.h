/********************************************************************************
** Form generated from reading UI file 'conductorpropertieswidget.ui'
**
** Created: Sat Feb 27 15:01:33 2016
**      by: Qt User Interface Compiler version 4.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONDUCTORPROPERTIESWIDGET_H
#define UI_CONDUCTORPROPERTIESWIDGET_H

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
#include <QtGui/QPushButton>
#include <QtGui/QRadioButton>
#include <QtGui/QSlider>
#include <QtGui/QSpinBox>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ConductorPropertiesWidget
{
public:
    QVBoxLayout *verticalLayout;
    QGroupBox *m_type_gb;
    QVBoxLayout *verticalLayout_2;
    QRadioButton *m_multi_rb;
    QGroupBox *m_multi_gb;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *m_text_le;
    QLabel *label_2;
    QSpinBox *m_text_size_sb;
    QCheckBox *m_show_text_cb;
    QVBoxLayout *m_autonum_layout;
    QCheckBox *m_one_text_per_folio_cb;
    QLabel *label_3;
    QGridLayout *m_text_angle_gl;
    QLabel *label_4;
    QLabel *label_5;
    QRadioButton *m_single_rb;
    QGroupBox *m_single_gb;
    QVBoxLayout *verticalLayout_4;
    QGridLayout *gridLayout;
    QSlider *m_phase_slider;
    QCheckBox *m_neutral_cb;
    QCheckBox *m_phase_cb;
    QSpinBox *m_phase_sb;
    QCheckBox *m_pen_cb;
    QCheckBox *m_earth_cb;
    QLabel *m_preview_label;
    QPushButton *m_update_preview_pb;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout_2;
    QComboBox *m_line_style_cb;
    QLabel *label_6;
    QPushButton *m_color_pb;
    QLabel *label_7;

    void setupUi(QWidget *ConductorPropertiesWidget)
    {
        if (ConductorPropertiesWidget->objectName().isEmpty())
            ConductorPropertiesWidget->setObjectName(QString::fromUtf8("ConductorPropertiesWidget"));
        ConductorPropertiesWidget->resize(633, 470);
        verticalLayout = new QVBoxLayout(ConductorPropertiesWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        m_type_gb = new QGroupBox(ConductorPropertiesWidget);
        m_type_gb->setObjectName(QString::fromUtf8("m_type_gb"));
        verticalLayout_2 = new QVBoxLayout(m_type_gb);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        m_multi_rb = new QRadioButton(m_type_gb);
        m_multi_rb->setObjectName(QString::fromUtf8("m_multi_rb"));

        verticalLayout_2->addWidget(m_multi_rb);

        m_multi_gb = new QGroupBox(m_type_gb);
        m_multi_gb->setObjectName(QString::fromUtf8("m_multi_gb"));
        verticalLayout_3 = new QVBoxLayout(m_multi_gb);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(-1, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(m_multi_gb);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        m_text_le = new QLineEdit(m_multi_gb);
        m_text_le->setObjectName(QString::fromUtf8("m_text_le"));

        horizontalLayout->addWidget(m_text_le);

        label_2 = new QLabel(m_multi_gb);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout->addWidget(label_2);

        m_text_size_sb = new QSpinBox(m_multi_gb);
        m_text_size_sb->setObjectName(QString::fromUtf8("m_text_size_sb"));
        m_text_size_sb->setMinimum(5);
        m_text_size_sb->setMaximum(9);

        horizontalLayout->addWidget(m_text_size_sb);

        m_show_text_cb = new QCheckBox(m_multi_gb);
        m_show_text_cb->setObjectName(QString::fromUtf8("m_show_text_cb"));
        m_show_text_cb->setChecked(true);

        horizontalLayout->addWidget(m_show_text_cb);


        verticalLayout_3->addLayout(horizontalLayout);

        m_autonum_layout = new QVBoxLayout();
        m_autonum_layout->setObjectName(QString::fromUtf8("m_autonum_layout"));
        m_one_text_per_folio_cb = new QCheckBox(m_multi_gb);
        m_one_text_per_folio_cb->setObjectName(QString::fromUtf8("m_one_text_per_folio_cb"));

        m_autonum_layout->addWidget(m_one_text_per_folio_cb);


        verticalLayout_3->addLayout(m_autonum_layout);

        label_3 = new QLabel(m_multi_gb);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);

        verticalLayout_3->addWidget(label_3);

        m_text_angle_gl = new QGridLayout();
        m_text_angle_gl->setObjectName(QString::fromUtf8("m_text_angle_gl"));
        label_4 = new QLabel(m_multi_gb);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setAlignment(Qt::AlignCenter);

        m_text_angle_gl->addWidget(label_4, 0, 0, 1, 1);

        label_5 = new QLabel(m_multi_gb);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setAlignment(Qt::AlignCenter);

        m_text_angle_gl->addWidget(label_5, 0, 1, 1, 1);


        verticalLayout_3->addLayout(m_text_angle_gl);


        verticalLayout_2->addWidget(m_multi_gb);

        m_single_rb = new QRadioButton(m_type_gb);
        m_single_rb->setObjectName(QString::fromUtf8("m_single_rb"));

        verticalLayout_2->addWidget(m_single_rb);

        m_single_gb = new QGroupBox(m_type_gb);
        m_single_gb->setObjectName(QString::fromUtf8("m_single_gb"));
        verticalLayout_4 = new QVBoxLayout(m_single_gb);
        verticalLayout_4->setSpacing(0);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(9, 0, 0, 0);
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        m_phase_slider = new QSlider(m_single_gb);
        m_phase_slider->setObjectName(QString::fromUtf8("m_phase_slider"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(m_phase_slider->sizePolicy().hasHeightForWidth());
        m_phase_slider->setSizePolicy(sizePolicy);
        m_phase_slider->setMinimum(1);
        m_phase_slider->setMaximum(3);
        m_phase_slider->setOrientation(Qt::Horizontal);

        gridLayout->addWidget(m_phase_slider, 2, 2, 1, 1);

        m_neutral_cb = new QCheckBox(m_single_gb);
        m_neutral_cb->setObjectName(QString::fromUtf8("m_neutral_cb"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/ico/16x16/neutral.png"), QSize(), QIcon::Normal, QIcon::Off);
        m_neutral_cb->setIcon(icon);

        gridLayout->addWidget(m_neutral_cb, 1, 1, 1, 1);

        m_phase_cb = new QCheckBox(m_single_gb);
        m_phase_cb->setObjectName(QString::fromUtf8("m_phase_cb"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/ico/16x16/phase.png"), QSize(), QIcon::Normal, QIcon::Off);
        m_phase_cb->setIcon(icon1);

        gridLayout->addWidget(m_phase_cb, 2, 1, 1, 1);

        m_phase_sb = new QSpinBox(m_single_gb);
        m_phase_sb->setObjectName(QString::fromUtf8("m_phase_sb"));
        m_phase_sb->setMinimum(1);
        m_phase_sb->setMaximum(3);

        gridLayout->addWidget(m_phase_sb, 2, 3, 1, 1);

        m_pen_cb = new QCheckBox(m_single_gb);
        m_pen_cb->setObjectName(QString::fromUtf8("m_pen_cb"));

        gridLayout->addWidget(m_pen_cb, 1, 2, 1, 1);

        m_earth_cb = new QCheckBox(m_single_gb);
        m_earth_cb->setObjectName(QString::fromUtf8("m_earth_cb"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/ico/16x16/ground.png"), QSize(), QIcon::Normal, QIcon::Off);
        m_earth_cb->setIcon(icon2);

        gridLayout->addWidget(m_earth_cb, 0, 1, 1, 1);

        m_preview_label = new QLabel(m_single_gb);
        m_preview_label->setObjectName(QString::fromUtf8("m_preview_label"));
        m_preview_label->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(m_preview_label, 0, 0, 3, 1);

        m_update_preview_pb = new QPushButton(m_single_gb);
        m_update_preview_pb->setObjectName(QString::fromUtf8("m_update_preview_pb"));

        gridLayout->addWidget(m_update_preview_pb, 0, 2, 1, 1);


        verticalLayout_4->addLayout(gridLayout);


        verticalLayout_2->addWidget(m_single_gb);


        verticalLayout->addWidget(m_type_gb);

        groupBox_2 = new QGroupBox(ConductorPropertiesWidget);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        gridLayout_2 = new QGridLayout(groupBox_2);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        m_line_style_cb = new QComboBox(groupBox_2);
        m_line_style_cb->setObjectName(QString::fromUtf8("m_line_style_cb"));

        gridLayout_2->addWidget(m_line_style_cb, 3, 2, 1, 1);

        label_6 = new QLabel(groupBox_2);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        gridLayout_2->addWidget(label_6, 1, 1, 1, 1);

        m_color_pb = new QPushButton(groupBox_2);
        m_color_pb->setObjectName(QString::fromUtf8("m_color_pb"));
        m_color_pb->setAutoFillBackground(false);
        m_color_pb->setFlat(false);

        gridLayout_2->addWidget(m_color_pb, 1, 2, 1, 1);

        label_7 = new QLabel(groupBox_2);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        gridLayout_2->addWidget(label_7, 3, 1, 1, 1);


        verticalLayout->addWidget(groupBox_2);


        retranslateUi(ConductorPropertiesWidget);
        QObject::connect(m_multi_rb, SIGNAL(toggled(bool)), m_multi_gb, SLOT(setEnabled(bool)));
        QObject::connect(m_phase_slider, SIGNAL(valueChanged(int)), m_phase_sb, SLOT(setValue(int)));
        QObject::connect(m_phase_sb, SIGNAL(valueChanged(int)), m_phase_slider, SLOT(setValue(int)));
        QObject::connect(m_single_rb, SIGNAL(toggled(bool)), m_single_gb, SLOT(setEnabled(bool)));
        QObject::connect(m_phase_cb, SIGNAL(toggled(bool)), m_phase_slider, SLOT(setEnabled(bool)));
        QObject::connect(m_phase_cb, SIGNAL(toggled(bool)), m_phase_sb, SLOT(setEnabled(bool)));
        QObject::connect(m_earth_cb, SIGNAL(clicked()), m_update_preview_pb, SLOT(click()));
        QObject::connect(m_neutral_cb, SIGNAL(clicked()), m_update_preview_pb, SLOT(click()));
        QObject::connect(m_phase_cb, SIGNAL(clicked()), m_update_preview_pb, SLOT(click()));
        QObject::connect(m_pen_cb, SIGNAL(clicked()), m_update_preview_pb, SLOT(click()));
        QObject::connect(m_phase_sb, SIGNAL(valueChanged(int)), m_update_preview_pb, SLOT(click()));

        QMetaObject::connectSlotsByName(ConductorPropertiesWidget);
    } // setupUi

    void retranslateUi(QWidget *ConductorPropertiesWidget)
    {
        ConductorPropertiesWidget->setWindowTitle(QApplication::translate("ConductorPropertiesWidget", "Form", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        ConductorPropertiesWidget->setToolTip(QApplication::translate("ConductorPropertiesWidget", "Protective Earth Neutral", "Tooltip displaying the meaning of the 'PEN' acronym", QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        m_type_gb->setTitle(QApplication::translate("ConductorPropertiesWidget", "Type de conducteur", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        m_multi_rb->setToolTip(QApplication::translate("ConductorPropertiesWidget", "Multifilaire", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        m_multi_rb->setText(QApplication::translate("ConductorPropertiesWidget", "Multifilaire", 0, QApplication::UnicodeUTF8));
        m_multi_gb->setTitle(QString());
        label->setText(QApplication::translate("ConductorPropertiesWidget", "Texte :", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        m_text_le->setToolTip(QApplication::translate("ConductorPropertiesWidget", "Texte", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        label_2->setText(QApplication::translate("ConductorPropertiesWidget", "Taille :", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        m_text_size_sb->setToolTip(QApplication::translate("ConductorPropertiesWidget", "Taille du texte", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        m_show_text_cb->setToolTip(QApplication::translate("ConductorPropertiesWidget", "Texte visible", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        m_show_text_cb->setText(QApplication::translate("ConductorPropertiesWidget", "Visible", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        m_one_text_per_folio_cb->setToolTip(QApplication::translate("ConductorPropertiesWidget", "activer l'option un texte par potentiel", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        m_one_text_per_folio_cb->setText(QApplication::translate("ConductorPropertiesWidget", "Afficher un texte de potentiel par folio. ", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("ConductorPropertiesWidget", "Rotation du texte de conducteur :", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("ConductorPropertiesWidget", "Vertical", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("ConductorPropertiesWidget", "Horizontal", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        m_single_rb->setToolTip(QApplication::translate("ConductorPropertiesWidget", "Unifilaire", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        m_single_rb->setText(QApplication::translate("ConductorPropertiesWidget", "Unifilaire", 0, QApplication::UnicodeUTF8));
        m_single_gb->setTitle(QString());
#ifndef QT_NO_TOOLTIP
        m_phase_slider->setToolTip(QApplication::translate("ConductorPropertiesWidget", "Nombre de phase", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        m_neutral_cb->setToolTip(QApplication::translate("ConductorPropertiesWidget", "Neutre", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        m_neutral_cb->setText(QApplication::translate("ConductorPropertiesWidget", "neutre", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        m_phase_cb->setToolTip(QApplication::translate("ConductorPropertiesWidget", "Phase", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        m_phase_cb->setText(QApplication::translate("ConductorPropertiesWidget", "phase", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        m_phase_sb->setToolTip(QApplication::translate("ConductorPropertiesWidget", "Nombre de phase", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        m_pen_cb->setToolTip(QApplication::translate("ConductorPropertiesWidget", "Protective Earth Neutral", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        m_pen_cb->setText(QApplication::translate("ConductorPropertiesWidget", "PEN", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        m_earth_cb->setToolTip(QApplication::translate("ConductorPropertiesWidget", "Terre", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        m_earth_cb->setText(QApplication::translate("ConductorPropertiesWidget", "terre", 0, QApplication::UnicodeUTF8));
        m_preview_label->setText(QApplication::translate("ConductorPropertiesWidget", "TextLabel", 0, QApplication::UnicodeUTF8));
        m_update_preview_pb->setText(QString());
        groupBox_2->setTitle(QApplication::translate("ConductorPropertiesWidget", "Apparence du conducteur", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        m_line_style_cb->setToolTip(QApplication::translate("ConductorPropertiesWidget", "Style du conducteur", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        label_6->setToolTip(QApplication::translate("ConductorPropertiesWidget", "Couleur du conducteur", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        label_6->setText(QApplication::translate("ConductorPropertiesWidget", "Couleur :", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        m_color_pb->setToolTip(QApplication::translate("ConductorPropertiesWidget", "Couleur du conducteur", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_ACCESSIBILITY
        m_color_pb->setAccessibleName(QString());
#endif // QT_NO_ACCESSIBILITY
        m_color_pb->setText(QString());
#ifndef QT_NO_TOOLTIP
        label_7->setToolTip(QApplication::translate("ConductorPropertiesWidget", "Style du conducteur", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        label_7->setText(QApplication::translate("ConductorPropertiesWidget", "Style :", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class ConductorPropertiesWidget: public Ui_ConductorPropertiesWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONDUCTORPROPERTIESWIDGET_H
