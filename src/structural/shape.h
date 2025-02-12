#ifndef SHAPE_H
#define SHAPE_H

class Manipulator;
class Point;

class Shape {
public:
  Shape();
  virtual void BoundingBox(Point &bottomLeft, Point &topRight) const;
  virtual Manipulator *CreateManipulator() const;
};
#endif // SHAPE_H
