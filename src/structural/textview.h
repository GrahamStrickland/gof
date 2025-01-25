#ifndef TEXT_VIEW_H
#define TEXT_VIEW_H

class Coord;

class TextView {
public:
  TextView();
  void GetOrigin(Coord &x, Coord &y) const;
  void GetExtent(Coord &width, Coord &height) const;
  virtual bool IsEmpty() const;
};
#endif // TEXT_VIEW_H
