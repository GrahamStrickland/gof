#include "coord.h"
#include "point.h"
#include "textmanipulator.h"
#include "textshape.h"
#include "textview.h"

TextShape::TextShape(TextView* t) {
    _text = t;
}

void TextShape::BoundingBox(
    Point& bottomLeft, Point& topRight
) const {
   Coord bottom, left, width, height; 

   _text->GetOrigin(bottom, left);
   _text->GetExtent(width, height);

   bottomLeft = Point(bottom, left);
   topRight = Point(bottom + height, left + width);
}

bool TextShape::IsEmpty() const {
    return _text->IsEmpty();
}

Manipulator* TextShape::CreateManipulator() const {
    return new TextManipulator(this);
}

