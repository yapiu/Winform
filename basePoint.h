#ifndef __BASEPOINT_H_INCLUDED__
#define __BASEPOINT_H_INCLUDED__

#include "vstub.h"

class basePoint {
protected:
  int x0, y0;

public:
  void move(int, int);
  basePoint(int x = 0, int y = 0);
  ~basePoint() {}
  virtual void draw(int, int, int) = 0;
};

#endif