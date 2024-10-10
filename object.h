#ifndef OBJECT_H
#define OBJECT_H

#include "drawer.h"

class object{
  protected:
  int num;
  virtual char* who(void) = 0;
  //virtual ~object() = default; 
  object(int number = 0);
};

class oLine : public object, line {
  public:
  oLine(int number = 0, int x1 = 0, int y1 = 0, int x2 = 0, int y2 = 0);
  char* who(void);
  void draw(int red, int green, int blue);
};

class oArc : public object, arc{
  public:
  oArc(int number = 0, int x = 0, int y = 0,double R = 0, double angular1 = 0, double angular2 = 0);
  char* who(void);
  void draw(int red, int green, int blue);
};

class oSegment : public oLine, oArc{
  public:
  void draw(int, int, int);
  char* who(void);
  oSegment(int number = 0, int x1 = 0, int y1 = 0, int x2 = 0, int y2 = 0, double R = 0, double angular1 = 0, double angular2 = 0);
};

#endif