#ifndef MAP_SITE_H
#define MAP_SITE_H

enum Direction { North, South, East, West };

class MapSite {
public:
  virtual void Enter() = 0;
};
#endif // MAP_SITE_H
