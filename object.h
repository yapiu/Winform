#ifndef OBJECT_H
#define OBJECT_H

#include "drawer.h"

class object{
  protected:
  int num;
  virtual const char* who(void) = 0;
  //virtual ~object() = default; 
  object();
};

class oLine : public object, public line {
  public:
  oLine(int x1 = 0, int y1 = 0, int x2 = 0, int y2 = 0);
  const char* who(void);
  void draw(int red, int green, int blue);
};

class oArc : public object, public arc{
  public:
  oArc(int x = 0, int y = 0,double R = 0, double angular1 = 0, double angular2 = 0);
  const char* who(void);
  void draw(int red, int green, int blue);
};

class oSegment : public oLine, public oArc{
  public:
  void draw(int, int, int);
  const char* who(void);
  oSegment(int x1 = 0, int y1 = 0, int x2 = 0, int y2 = 0);
};

class oSector : public oSegment{
  public:
  void draw(int, int, int);
  const char* who(void);
  oSector(int x1 = 0, int y1 = 0, int x2 = 0, int y2 = 0);
};
#endif