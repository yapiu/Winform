#include "line.h"
#include <synchapi.h>

void line::draw(int red, int green, int blue) {
  Sleep(2);
  std::setcolor(red, green, blue);
  std::putline(x1, y1, x2, y2);
}

line::line(int x_1, int y_1, int x_2, int y_2) {
  x1 = x_1;
  y1 = y_1;
  x2 = x_2;
  y2 = y_2;
}

void line::move() {
  line::draw(0, 0, 0);
    x1 += x0;
    y1 += y0;
    x2 += x0;
    y2 += y0;
  line::draw(255, 255, 255);
}

line::~line() {}