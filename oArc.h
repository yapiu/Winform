#ifndef __OARC_DEFINED__
#define __OARC_DEFINED__

#include "arc.h"
#include "object.h"

class oArc : public virtual object, public arc {
public:
  oArc(int x = 0, int y = 0, double R = 0, double angular1 = 0,
       double angular2 = 0);
  const char *who(void);
  void draw(int red, int green, int blue);
  void move();
};

#endif