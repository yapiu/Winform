#include "oLine.h"

oLine::oLine(int x1, int y1, int x2, int y2) : line(x1, y1, x2, y2), object() {}

const char *oLine::who() {
  std::vc << num << ":";
  return "I'm a oLine";
}

void oLine::draw(int red, int green, int blue) { line::draw(red, green, blue); }
