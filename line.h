#ifndef __LINE_H_INCLUDED__
#define __LINE_H_INCLUDED__

#include "basePoint.h"

class line : virtual public basePoint {
protected:
  int x1, y1;
  int x2, y2;

public:
  void move(bool, bool, bool, bool);
  void draw(int, int, int);

  line(int x1 = 0, int y1 = 0, int x2 = 0, int y2 = 0);
  ~line();
};

#endif