/*
	Copyright 2006-2015 The QElectroTech Team
	This file is part of QElectroTech.

	QElectroTech is free software: you can redistribute it and/or modify
	it under the terms of the GNU General Public License as published by
	the Free Software Foundation, either version 2 of the License, or
	(at your option) any later version.

	QElectroTech is distributed in the hope that it will be useful,
	but WITHOUT ANY WARRANTY; without even the implied warranty of
	MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
	GNU General Public License for more details.

	You should have received a copy of the GNU General Public License
	along with QElectroTech. If not, see <http://www.gnu.org/licenses/>.
*/
#ifndef BORDERPROPERTIESWIDGET_H
#define BORDERPROPERTIESWIDGET_H

#include <QWidget>
#include "borderproperties.h"

namespace Ui {
	class BorderPropertiesWidget;
}

/**
 * @brief The BorderPropertiesWidget class
 * this widget edit the properties of a border
 */
class BorderPropertiesWidget : public QWidget
{
		Q_OBJECT

	public:
		explicit BorderPropertiesWidget(const BorderProperties &bp, QWidget *parent = 0);
		~BorderPropertiesWidget();

		void setProperties(const BorderProperties &bp);
		const BorderProperties &properties();
		void setReadOnly (const bool &ro);

	private slots:
		void on_m_grey_bg_cb_clicked(bool checked);

	private:
		Ui::BorderPropertiesWidget *ui;
		BorderProperties m_properties;
};

#endif // BORDERPROPERTIESWIDGET_H
