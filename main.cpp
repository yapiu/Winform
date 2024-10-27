#include "basePoint.h"
#include "oSector.h"
#include "vstub.h"

namespace std {

int main(void) {

  vc << "Hello!\n";

  line l1(1, 1, 100, 100);
  arc ar1(120, 120, 50, 1.5, 2.5);

  const int number = 10;

  basePoint *Ar[number];

  Ar[0] = &l1;
  Ar[1] = &ar1;

  for (int i = 0; i <= number; i++) {
    if (Ar[i] == nullptr) {
      break;
    }
    Ar[i]->move(5, 10);
  }

  ar1.draw(255, 255, 255);
  l1.draw(255, 255, 255);

  vgetchar();

  ar1.draw(0, 0, 0);
  l1.draw(0, 0, 0);

  ar1.move();
  l1.move(1,1,1,1);

  vgetchar();

  ar1.draw(0, 0, 0);
  l1.draw(0, 0, 0);

  vgetchar();

  oLine ol1(2, 3, 4, 5);
  vc << ol1.who() << endl;
  vgetchar();

  oArc oar1(10, 5, 1, 2, 4);
  vc << oar1.who() << endl;
  vgetchar();

  oSegment osg1(100, 100, 200, 200);
  vc << osg1.who() << endl;
  osg1.draw(255, 255, 255);
  vgetchar();

  osg1.draw(0, 0, 0);
  vgetchar();

  oSector osc1(100, 100, 200, 200);
  vc << osc1.who() << endl;
  osc1.draw(255, 255, 255);
  vgetchar();

  return 0;
}
} // namespace std