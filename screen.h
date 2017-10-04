#ifndef SCREEN_H
#define SCREEN_H

#include<iostream>
#include<vector>
using namespace std;

class Screen{
private:

  int nlin, ncol;
  char brush = '0';
  vector< vector<char> > mat;

public:
  Screen(int nl=10, int nc=10);
  void setPixel(int x, int y);
  void clear();
  void setBrush(char _brush);
  friend ostream& operator<<(ostream &os, Screen &t);
};


#endif // SCREEN_H
