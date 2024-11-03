#include "basePoint.h"

basePoint::basePoint(int x, int y) {
  x0 = x;
  y0 = y;
}

void basePoint::move(int dx, int dy) {
  draw(255, 255, 255);
  x0 += dx;
  y0 += dy;
}

