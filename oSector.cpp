#include "oSector.h"
#include "basePoint.h"
#include "object.h"
#include <cmath>

oSector::oSector(int x1, int y1, int x2, int y2) : oSegment(x1, y1, x2, y2) {
  storageX = x2;
  storageY = y2;
}

// сделать через мув только мув надо переделать чтоьбы он определенные части мувал
void oSector::draw(int red, int green, int blue) {
  oArc::draw(red, green, blue);
  basePoint::move(xc + 2 * r * atan(a1) - x2, yc + 2 * r - y2);
  line::move(0,0,1,1);
  basePoint::resetBasePoint();
  basePoint::move(-(xc + 2 * r * atan(a1))+storageX, -(yc + 2 * r)+storageY);
  line::move(0,0,1,1);
  line::draw(0, 0, 0);
  basePoint::resetBasePoint();
  basePoint::move(xc + 2 * r * atan(a1) - x1, yc + 2 * r - y1);
  line::move(1,1,0,0);
  //line::draw(red, green, blue);
  // oLine l1(x1, y1, xc + 2 * r * atan(a1), yc + 2 * r);
  // oLine l2(xc + 2 * r * atan(a1), yc + 2 * r, x2, y2);
  // l1.draw(red, green, blue);
  // l2.draw(red, green, blue);
}

const char *oSector::who() {
  std::vc << object::num << ":";
  return "I'm a oSector";
}

