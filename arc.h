#ifndef __ARC_H_INCLUDED__
#define __ARC_H_INCLUDED__

#include "basePoint.h"

class arc : virtual public basePoint {
protected:
  int xc, yc;
  double r;
  double a1, a2;

public:
  void move();
  void draw(int, int, int);

  arc(int xc = 0, int yc = 0, double r = 0, double a1 = 0, double a2 = 0);
  ~arc();
};

#endif