#include "drawer.h"
#include "vstub.h"
#include "object.h"

namespace std {

int main(void) {
  time_t t=clock();
  //drawgrid();
  vc<< "Hello!\n";

  line l1(1, 1, 100, 100);
  arc ar1(120,120,50,1.5,2.5);
  ar1.draw(255,255,255);

  l1.draw(255,255,255);

  vgetchar();

  l1.draw(0,0,0);
  ar1.draw(0,0,0);
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

  l1.move();
  ar1.move();

  l1.draw(255,255,255);
  ar1.draw(255,255,255);
  
  vgetchar();

  //vc << "\nTime diff is : " << clock()-t << endl;

  oLine ol1(1, 2,3,4,5);
  vc << ol1.who() << endl;
  vgetchar();

  oArc oar1(2,10,5,1, 2,4);
  vc << oar1.who() << endl;
  vgetchar();

  oSegment osg1(0,100,100,140,140,10, 1.5, 2.5);
  osg1.draw(255,255,255);
  vgetchar();

  return 0;
}

}