#ifndef __DRAWER_H_INCLUDED__
#define __DRAWER_H_INCLUDED__

#include "vstub.h"

class basePoint{
  protected:
  int x0, y0;
  virtual void draw(int, int, int) = 0;

  public:
  void move(int, int);
  basePoint(int x = 0, int y = 0);
  ~basePoint(){}
};

class line : public basePoint{
  protected:
  int x1,y1;
  int x2,y2;

  public:
  void move();
  void draw(int, int, int);

  line(int x1 = 0, int y1 = 0, int x2 = 0, int y2 = 0);
  ~line();
};

class arc : public basePoint{
  protected:
  int xc, yc;
  double r;
  double a1, a2;

  public:
  void move();
  void draw(int, int, int);

  arc(int xc = 0, int yc = 0, double r = 0, double a1 = 0, double a2 = 0);
  ~arc();
};

#endif