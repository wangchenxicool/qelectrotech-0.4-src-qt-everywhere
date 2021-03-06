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
#include "partrectangle.h"

/**
 * @brief PartRectangle::PartRectangle
 * Constructor
 * @param editor the QETElementEditor of this item
 * @param parent parent item
 */
PartRectangle::PartRectangle(QETElementEditor *editor, QGraphicsItem *parent) :
	CustomElementGraphicPart(editor, parent)
{}

/**
 * @brief PartRectangle::~PartRectangle
 */
PartRectangle::~PartRectangle() {}

/**
 * @brief PartRectangle::paint
 * Draw this Rectangle
 * @param painter
 * @param options
 * @param widget
 */
void PartRectangle::paint(QPainter *painter, const QStyleOptionGraphicsItem *options, QWidget *widget)
{
	Q_UNUSED(widget);
	applyStylesToQPainter(*painter);
	QPen t = painter -> pen();
	t.setCosmetic(options && options -> levelOfDetail < 1.0);

	if (isSelected())
		t.setColor(Qt::red);

	t.setJoinStyle(Qt::MiterJoin);
	
		//Force the pen to width 0 if one of dimension is null
	if (!rect().width() || !rect().height())
		t.setWidth(0);
	
	painter -> setPen(t);
	painter -> drawRect(rect());

	if (m_hovered)
		drawShadowShape(painter);

	if (isSelected())
		drawCross(m_rect.center(), painter);
}

/**
 * @brief PartRectangle::toXml
 * Export this rectangle in xml
 * @param xml_document : Xml document to use for create the xml element.
 * @return an xml element that describe this ellipse
 */
const QDomElement PartRectangle::toXml(QDomDocument &xml_document) const
{
	QDomElement xml_element = xml_document.createElement("rect");
	QPointF top_left(sceneTopLeft());
	xml_element.setAttribute("x", QString("%1").arg(top_left.x()));
	xml_element.setAttribute("y", QString("%1").arg(top_left.y()));
	xml_element.setAttribute("width",  QString("%1").arg(m_rect.width()));
	xml_element.setAttribute("height", QString("%1").arg(m_rect.height()));
	stylesToXml(xml_element);
	return(xml_element);
}

/**
 * @brief PartRectangle::fromXml
 * Import the properties of this rectangle from a xml element.
 * @param qde : Xml document to use.
 */
void PartRectangle::fromXml(const QDomElement &qde)
{
	stylesFromXml(qde);
	setRect(QRectF(mapFromScene(qde.attribute("x", "0").toDouble(),
								qde.attribute("y", "0").toDouble()),
				   QSizeF(qde.attribute("width",  "0").toDouble(),
						  qde.attribute("height", "0").toDouble())));
}

/**
 * @brief PartRectangle::rect
 * @return : Returns the item's rectangle.
 */
QRectF PartRectangle::rect() const {
	return m_rect;
}

/**
 * @brief PartRectangle::setRect
 * Sets the item's rectangle to be the given rectangle.
 * @param rect
 */
void PartRectangle::setRect(const QRectF &rect)
{
	if (rect == m_rect) return;
	prepareGeometryChange();
	m_rect = rect;
}

/**
 * @brief PartRectangle::rectTopLeft
 * @return the rectangle top left in item coordinate
 */
QPointF PartRectangle::rectTopLeft() const {
	return m_rect.topLeft();
}

/**
 * @brief PartRectangle::setRectTopLeft
 * @param point, set the rectangle top left in item coordinate.
 * The rectangle size is unchanged
 */
void PartRectangle::setRectTopLeft(const QPointF &point) {
	m_rect.moveTopLeft(point);
}

/**
 * @brief PartRectangle::setWidth
 * Sets the width of the rectangle to the given width.
 * The right edge is changed, but not the left one.
 * @param w new value
 */
void PartRectangle::setWidth(qreal w)
{
	prepareGeometryChange();
	m_rect.setWidth(qAbs(w));
}

/**
 * @brief PartRectangle::setHeight
 * Sets the height of the rectangle to the given height.
 * The bottom edge is changed, but not the top one.
 * @param h new value
 */
void PartRectangle::setHeight(qreal h)
{
	prepareGeometryChange();
	m_rect.setHeight(qAbs(h));
}

/**
 * @brief PartRectangle::sceneGeometricRect
 * @return the minimum, margin-less rectangle this part can fit into, in scene
 * coordinates. It is different from boundingRect() because it is not supposed
 * to imply any margin, and it is different from shape because it is a regular
 * rectangle, not a complex shape.
 */
QRectF PartRectangle::sceneGeometricRect() const {
	return(mapToScene(rect()).boundingRect());
}

/**
 * @brief PartRectangle::sceneTopLeft
 * @return the top left of rectangle, in scene coordinate
 */
QPointF PartRectangle::sceneTopLeft() const {
	return(mapToScene(rect().topLeft()));
}

/**
 * @brief PartRectangle::shape
 * @return the shape of this item
 */
QPainterPath PartRectangle::shape() const
{
	QPainterPath shape;
	shape.addRect(m_rect);

	QPainterPathStroker pps;
	pps.setWidth(penWeight());

	return (pps.createStroke(shape));
}

/**
 * @brief PartRectangle::boundingRect
 * @return Bounding rectangle this part can fit into
 */
QRectF PartRectangle::boundingRect() const
{
	qreal adjust = (SHADOWS_HEIGHT + penWeight()) / 2;
		//We add 0.5 because CustomElementGraphicPart::drawShadowShape
		//draw a shape bigger of 0.5 when pen weight is to 0.
	if (penWeight() == 0) adjust += 0.5;

	QRectF r = m_rect.normalized();
	r.adjust(-adjust, -adjust, adjust, adjust);
	return(r);
}

/**
 * @brief PartRectangle::isUseless
 * @return true if this part is irrelevant and does not deserve to be Retained / registered.
 * An rectangle is relevant when he's not null.
 */
bool PartRectangle::isUseless() const {
	return(rect().isNull());
}

/**
 * @brief PartRectangle::startUserTransformation
 * Start the user-induced transformation, provided this primitive is contained
 * within the initial_selection_rect bounding rectangle.
 * @param initial_selection_rect
 */
void PartRectangle::startUserTransformation(const QRectF &initial_selection_rect)
{
	Q_UNUSED(initial_selection_rect)
		// we keep track of our own rectangle at the moment in scene coordinates too
	saved_points_.clear();
	saved_points_ << mapToScene(rect().topLeft()) << mapToScene(rect().bottomRight());
}

/**
 * @brief PartRectangle::handleUserTransformation
 * Handle the user-induced transformation from \a initial_selection_rect to \a new_selection_rect
 * @param initial_selection_rect
 * @param new_selection_rect
 */
void PartRectangle::handleUserTransformation(const QRectF &initial_selection_rect, const QRectF &new_selection_rect)
{
	QList<QPointF> mapped_points = mapPoints(initial_selection_rect, new_selection_rect, saved_points_);
	setRect(QRectF(mapFromScene(mapped_points.at(0)), mapFromScene(mapped_points.at(1))));
}
