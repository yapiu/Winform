#include "oSegment.h"

class oSector : public oSegment {
public:
  void draw(int, int, int);
  const char *who(void);
  oSector(int x1 = 0, int y1 = 0, int x2 = 0, int y2 = 0);
  oSector move();
};