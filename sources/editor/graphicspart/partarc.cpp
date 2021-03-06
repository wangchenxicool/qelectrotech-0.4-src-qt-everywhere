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
#include "partarc.h"

/**
 * @brief PartArc::PartArc
 * Constructor
 * @param editor : QETElementEditor of this part
 * @param parent : parent item
 */
PartArc::PartArc(QETElementEditor *editor, QGraphicsItem *parent) :
	AbstractPartEllipse(editor, parent)
{
	m_start_angle = 0;
	m_span_angle = -1440;
}

/**
 * @brief PartArc::~PartArc
 * Destructor
 */
PartArc::~PartArc() {}

/**
 * @brief PartArc::paint
 * Draw this arc
 * @param painter
 * @param options
 * @param widget
 */
void PartArc::paint(QPainter *painter, const QStyleOptionGraphicsItem *options, QWidget *widget)
{
	Q_UNUSED(widget);

	applyStylesToQPainter(*painter);

		//Always remove the brush
	painter -> setBrush(Qt::NoBrush);
	QPen t = painter -> pen();
	t.setCosmetic(options && options -> levelOfDetail < 1.0);
	painter -> setPen(t);
	
	if (isSelected())
	{
			//Draw the ellipse in black
		painter -> drawEllipse(rect());

			//Draw the arc in red
		t.setColor(Qt::red);
		painter -> setPen(t);
	}
	
	painter -> drawArc(m_rect, m_start_angle, m_span_angle);

	if (m_hovered)
		drawShadowShape(painter);

	if (isSelected())
		drawCross(m_rect.center(), painter);
}

/**
 * @brief PartArc::toXml
 * Export this arc in xml
 * @param xml_document : Xml document to use for create the xml element.
 * @return : an xml element that describe this arc
 */
const QDomElement PartArc::toXml(QDomDocument &xml_document) const {
	QDomElement xml_element = xml_document.createElement("arc");
	QPointF top_left(sceneTopLeft());
	xml_element.setAttribute("x", QString("%1").arg(top_left.x()));
	xml_element.setAttribute("y", QString("%1").arg(top_left.y()));
	xml_element.setAttribute("width",  QString("%1").arg(rect().width()));
	xml_element.setAttribute("height", QString("%1").arg(rect().height()));
		//to maintain compatibility with the previous version, we write the angle in degrees.
	xml_element.setAttribute("start", QString("%1").arg(m_start_angle / 16));
	xml_element.setAttribute("angle", QString("%1").arg(m_span_angle / 16));
	stylesToXml(xml_element);
	return(xml_element);
}

/**
 * @brief PartArc::fromXml
 * Import the properties of this arc from a xml element.
 * @param qde : Xml document to use.
 */
void PartArc::fromXml(const QDomElement &qde) {
	stylesFromXml(qde);
	m_rect = QRectF(mapFromScene(qde.attribute("x", "0").toDouble(),
								 qde.attribute("y", "0").toDouble()),
					QSizeF(qde.attribute("width",  "0").toDouble(),
						   qde.attribute("height", "0").toDouble()) );

	m_start_angle = qde.attribute("start", "0").toInt() * 16;
	m_span_angle  = qde.attribute("angle", "-1440").toInt() * 16;
}

/**
 * @brief PartArc::shape
 * @return the shape of this item
 */
QPainterPath PartArc::shape() const
{
	QPainterPath shape;
	shape.arcMoveTo(m_rect, m_start_angle/16);
	shape.arcTo(m_rect, m_start_angle/16, m_span_angle/16);

	QPainterPathStroker pps;
	pps.setWidth(penWeight());

	return (pps.createStroke(shape));
}
