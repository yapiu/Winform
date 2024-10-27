#include "oArc.h"
#include "oLine.h"

class oSegment : public oLine, public oArc, public virtual object {
public:
  void draw(int, int, int);
  const char *who(void);
  oSegment(int x1 = 0, int y1 = 0, int x2 = 0, int y2 = 0);

};