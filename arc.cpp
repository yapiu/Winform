#include "arc.h"

void arc::draw(int red, int green, int blue) {
  Sleep(2);
  std::setcolor(red, green, blue);
  std::putarc(xc, yc, r, a1, a2);
}

arc::arc(int x, int y, double R, double angular1, double angular2) {
  xc = x;
  yc = y;
  r = R;
  a1 = angular1;
  a2 = angular2;
}

arc::~arc() {}

void arc::move() {
  //std::vgetchar();
  //draw(0, 0, 0);
  xc += x0;
  yc += y0;
  //arc::draw(255, 255, 255);
}