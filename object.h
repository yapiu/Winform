#ifndef OBJECT_H
#define OBJECT_H
class object {
protected:
  int static num;
  virtual const char *who(void) = 0;
  object();
};

#endif