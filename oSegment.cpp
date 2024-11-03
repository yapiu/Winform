#include "oSegment.h"
#include "object.h"
#include "vstub.h"
#include <cmath>

#define XC (x1 + (x2 - x1) / 2)
#define YC (y1 + (y2 - y1) / 2)
#define M_PI 3.14159265358979323846

oSegment::oSegment(int x1, int y1, int x2, int y2)
    : oArc(XC, YC, r, a2, a1), oLine(x1, y1, x2, y2) {
  r = sqrt((x2 - xc) * (x2 - xc) + (y2 - yc) * (y2 - yc));
  a1 = atan((double)(-yc + y1) / (double)(xc - x1));
  a2 = a1 + 5 * M_PI / 4;
}

const char *oSegment::who() {
  std::vc << oArc::num << ":";
  return "I'm oSegment";
}

void oSegment::draw(int red, int green, int blue) {
  oLine::draw(red, green, blue);
  oArc::draw(red, green, blue);
}

void oSegment::move() {
  oArc::move();
  oLine::move();
}