#include "object.h"
#include "drawer.h"
#include <cmath>

#define XC (pow(x2,2) - pow(x1,2) + pow(y2,2) - pow(y1,2))/(2*(x2-x1+y2-y1))
#define YC -y1 + sqrt(-pow(R,2) + pow((x1 - pow(x2,2) - pow(x1,2) + pow(y2,2) - pow(y1,2))/(2*(x2-x1+y2-y1)),2))

object::object(int number){
  num = number;
}

oLine::oLine(int number, int x1, int y1, int x2, int y2):line(x1,y1,x2,y2), object(number){}

char* oLine::who() {
  static char str[] = "I'm a oLine";
  return str;
}

void oLine::draw(int red, int green, int blue){
  line::draw(red, green, blue);
}

oArc::oArc(int number, int xc, int yc, double r, double a1, double a2) : arc(xc, yc, r, a1, a2),object(number){}

char* oArc::who() {
  static char str[] = "I'm a oArc";
  return str;
}

void oArc::draw(int red, int green, int blue){
  arc::draw(red, green, blue);
}

oSegment::oSegment(int number, int x1, int y1, int x2, int y2, double R, double angular1, double angular2) 
: oArc(number,XC, YC, R, angular1, angular2), oLine(number, x1, y1, x2, y2){}

char* oSegment::who(){
  static char str[] = "I'm oSegment";
  return str;
}

void oSegment::draw(int red, int green, int blue){
  oLine::draw(red, green, blue);
  oArc::draw(red, green, blue);
}