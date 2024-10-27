#include "line.h"

void line::draw(int red, int green, int blue) {
  std::setcolor(red, green, blue);
  std::putline(x1, y1, x2, y2);
}

line::line(int x_1, int y_1, int x_2, int y_2) {
  x1 = x_1;
  y1 = y_1;
  x2 = x_2;
  y2 = y_2;
}

void line::move(bool cx1, bool cy1, bool cx2, bool cy2) {
  //line::draw(0, 0, 0);
  if (cx1 == 1) {
    x1 += x0;
  }
  if (cy1 == 1) {
    y1 += y0;
  }
  if (cx2 == 1) {
    x2 += x0;
  }
  if (cy2 == 1) {
    y2 += y0;
  }
  line::draw(255, 255, 255);
}

line::~line() {}