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
#ifndef QETGRAPHICSITEM_H
#define QETGRAPHICSITEM_H

#include <QGraphicsObject>

class Diagram;

class QetGraphicsItem : public QGraphicsObject
{
	Q_OBJECT

	public:
			//constructor destructor
		QetGraphicsItem(QGraphicsItem *parent = 0);
		virtual ~QetGraphicsItem() = 0;

			//public methode
				Diagram *diagram       () const;
		virtual void     setPos        (const QPointF &p);
		virtual void     setPos        (qreal x, qreal y);
		virtual void     rotateBy      (const qreal &);
		virtual void     applyRotation (const qreal &);
		virtual void     editProperty  ()      {}
		virtual QString  name       ()const {return QString("");}

		//protected method
	protected:
		virtual void mousePressEvent(QGraphicsSceneMouseEvent *e);
		virtual void mouseDoubleClickEvent(QGraphicsSceneMouseEvent *e);
		virtual void mouseMoveEvent(QGraphicsSceneMouseEvent *e);
		virtual void mouseReleaseEvent(QGraphicsSceneMouseEvent *e);

	protected:
		bool is_movable_;
		bool first_move_;
		bool snap_to_grid_;
		QPointF mouse_to_origin_movement_;

};

#endif // QETGRAPHICSITEM_H
