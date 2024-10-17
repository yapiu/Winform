#include "object.h"
#include "drawer.h"
#include <cmath>
#include <math.h>

#define XC x1 + (x2 - x1) / 2
#define YC y1 + (y2 - y1) / 2
#define M_PI 3.14159265358979323846

int numberOfObjects = 0;

object::object() { num = ++numberOfObjects; }

oLine::oLine(int x1, int y1, int x2, int y2) : line(x1, y1, x2, y2), object() {}

const char *oLine::who() {
  std::vc << num << ":";
  return "I'm a oLine";
}

void oLine::draw(int red, int green, int blue) { line::draw(red, green, blue); }

oArc::oArc(int xc, int yc, double r, double a1, double a2)
    : arc(xc, yc, r, a1, a2), object() {}

const char *oArc::who() {
  std::vc << num << ":";
  return "I'm a oArc";
}

void oArc::draw(int red, int green, int blue) { arc::draw(red, green, blue); }

oSegment::oSegment(int x1, int y1, int x2, int y2)
    : oArc(XC, YC, r, a2, a1), oLine(x1, y1, x2, y2) {
  r = sqrt((x2 - xc) * (x2 - xc) + (y2 - yc) * (y2 - yc));
  a1 = atan((double)(-yc + y1) / (double)(xc - x1));
  a2 = a1 + 5 * M_PI / 4;
}

const char *oSegment::who() {
  std::vc << oLine::num << ":";
  return "I'm oSegment";
}

void oSegment::draw(int red, int green, int blue) {
  oLine::draw(red, green, blue);
  oArc::draw(red, green, blue);
}

// использовать не наследование а вызхывать конструкторы внутри класса
oSector::oSector(int x1, int y1, int x2, int y2)
    : oSegment(x1, y1, x2, y2) {}

void oSector::draw(int red, int green, int blue) {
  oArc::draw(red, green, blue);
  oLine l1(x1, y1, xc + 2*r*atan(a1), yc + 2*r);
  oLine l2(xc + 2*r*atan(a1), yc + 2*r, x2, y2);
  l1.draw(red, green, blue);
  l2.draw(red, green, blue);
}

const char *oSector::who() {
  std::vc << oLine::num << ":";
  return "I'm a oSegment";
}
