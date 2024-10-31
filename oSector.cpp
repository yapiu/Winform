#include "oSector.h"
#include "basePoint.h"
#include "line.h"
#include "object.h"
#include <cmath>

oSector::oSector(int x1, int y1, int x2, int y2) : oSegment(x1, y1, x2, y2) {

}

void oSector::draw(int red, int green, int blue) {
  oArc::draw(red, green, blue);
  oLine l1(x1, y1, xc + 2 * r * atan(a1), yc + 2 * r);
  oLine l2(xc + 2 * r * atan(a1), yc + 2 * r, x2, y2);
  l1.draw(red, green, blue);
  l2.draw(red, green, blue);
  num -= 2;
}

const char *oSector::who() {
  std::vc << object::num << ":";
  return "I'm a oSector";
}

oSector oSector::move() {
  oSegment::move();
}
