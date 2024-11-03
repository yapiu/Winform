#ifndef REAPERCLASS_H
#define REAPERCLASS_H

#include "line.h"
#include "object.h"

class reaperOline : public line, public virtual object {
protected:
public:
  void draw(int, int, int);
  reaperOline(int x1 = 0, int y1 = 0, int x2 = 0, int y2 = 0);
  void move();
};

#endif