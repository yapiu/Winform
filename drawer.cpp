#include "drawer.h"
#include "vstub.h"


basePoint::basePoint(int x, int y){
	x0 = x;
	y0 = y;
}

void basePoint::move(int dx, int dy){
  draw(255, 255, 255);
  x0 += dx;
  y0 += dy;
}

void line::draw(int red, int green, int blue){
  std::setcolor (red,green,blue);
  std::putline(x1, y1, x2, y2);
}

line::line(int x_1, int y_1, int x_2, int y_2){
  x1 = x_1;
  y1 = y_1;
  x2 = x_2;
  y2 = y_2;	
}

void line::move(){
  // std::vgetchar();
  draw(0, 0, 0);
  x1 += x0;
  y1 += y0;
  x2 += x0;
  y2 += y0;
  line::draw(255, 255, 255);
}

line::~line(){

}

void arc::draw(int red, int green, int blue){
  std::setcolor (red,green,blue);
  std::putarc (xc,yc,r,a1,a2);
}

arc::arc(int x, int y, double R, double angular1, double angular2){
  xc = x;
  yc = y;
  r = R;
  a1 = angular1;
  a2 = angular2;
}

arc::~arc(){

}

void arc::move(){
  std::vgetchar();
  draw(0, 0, 0);
  xc += x0;
  yc += y0;
  arc::draw(255, 255, 255);
}