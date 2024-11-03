#ifndef OLINE_H
#define OLINE_H

#include "line.h"
#include "object.h"

class oLine : public virtual object, public line {
public:
  oLine(int x1 = 0, int y1 = 0, int x2 = 0, int y2 = 0);
  const char *who(void);
  void draw(int red, int green, int blue);
  void move();
};

#endif