#include "oArc.h"

oArc::oArc(int xc, int yc, double r, double a1, double a2)
    : arc(xc, yc, r, a1, a2), object() {}

const char *oArc::who() {
  std::vc << num << ":";
  return "I'm a oArc";
}

void oArc::draw(int red, int green, int blue) { arc::draw(red, green, blue); }

void oArc::move() { arc::move(); }