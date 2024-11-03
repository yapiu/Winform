#include "reaperOline.h"

reaperOline::reaperOline(int x1, int y1, int x2, int y2)
    : line(x1, y1, x2, y2), object() {}

void reaperOline::draw(int red, int green, int blue) {
  line::draw(red, green, blue);
}

void reaperOline::move() { line::move(); }