#ifndef TEXT_SHAPE_H
#define TEXT_SHAPE_H

#include "shape.h"

class TextView;

class TextShape : public Shape {
public:
  TextShape(TextView *);

  virtual void BoundingBox(Point &bottomLeft, Point &topRight) const;
  virtual bool IsEmpty() const;
  virtual Manipulator *CreateManipulator() const;

private:
  TextView *_text;
};
#endif // TEXT_SHAPE_H
