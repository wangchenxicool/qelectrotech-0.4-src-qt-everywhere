/*
	Copyright 2006-2015 The QElectroTech Team
	This file is part of QElectroTech.

	QElectroTech is free software: you can redistribute it and/or modify
	it under the terms of the GNU General Public License as published by
	the Free Software Foundation, either version 2 of the License, or
	(at your option) any later version.

	QElectroTech is distributed in the hope that it will be useful,
	but WITHOUT ANY WARRANTY; without even the implied warranty of
	MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
	GNU General Public License for more details.

	You should have received a copy of the GNU General Public License
	along with QElectroTech.  If not, see <http://www.gnu.org/licenses/>.
*/
#ifndef SIMPLEELEMENT_H
#define SIMPLEELEMENT_H

#include "customelement.h"

class CommentItem;
class QETProject;

/**
 * @brief The SimpleElement class
 *this class represente a simple element with no specific attribute
 */
class SimpleElement : public CustomElement {

	Q_OBJECT

	public  :
		explicit SimpleElement(const ElementsLocation &, QGraphicsItem * = 0, int * = 0);
		~SimpleElement();

		virtual void initLink(QETProject *project);

	signals:

	public slots:
		void updateLabel(DiagramContext old_info, DiagramContext new_info);

	private:
		CommentItem *m_comment_item;

};

#endif // SIMPLEELEMENT_H
