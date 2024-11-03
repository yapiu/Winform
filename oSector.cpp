
#include "oSector.h"
#include "oArc.h"
#include "oLine.h"
#include "object.h"
#include "reaperOline.h"
#include <cmath>


oSector::oSector(int x1, int y1, int x2, int y2)
    : oSegment(x1, y1, x2, y2), reaperOline(x1, y1, x2, y2) {
  oLine::x2 = xc + 2 * r * atan(a1);
  oLine::y2 = yc + 2 * r;
  reaperOline::x1 = xc + 2 * r * atan(a1);
  reaperOline::y1 = yc + 2 * r;
}

void oSector::draw(int red, int green, int blue) {
  reaperOline::draw(red, green, blue);
  oLine::draw(red, green, blue);
  oArc::draw(red, green, blue);
}

const char *oSector::who() {
  std::vc << object::num << ":";
  return "I'm a oSector";
}

void oSector::move() {
  reaperOline::move(); 
  oLine::move();
  oArc::move(); 
}
