#include <iostream>
#include <string>
using namespace std;

class Rectangle{
  public:
  double x=0.0;
  double y=0.0;
  double w=0.0;
  double h=0.0;
  

  Rectangle(double x,double y, double w, double h){
    this->x=x;
    this->y=y;
    this->w=w;
    this->h=h;
  }
  friend ostream& operator <<(ostream& os, const Rectangle&  r){
  os<<"x: "<<r.x<<"  y: "<<r.y<<endl;
  //os<<"y: "<<r.y<<endl;
  os<<"w: "<<r.w<<"  h: "<<r.h<<endl;
  //os<<"Height: "<<r.h<<endl;
  return os;
}

Rectangle operator +(const Rectangle& r){
  return Rectangle(x, y, w+r.w, h+r.h);
}

Rectangle operator -(const Rectangle& r){
  return Rectangle(x, y, w-r.w, h-r.h);
}

Rectangle operator *(const Rectangle& r){
  return Rectangle(x, y, w*r.w, h*r.h);
}

Rectangle operator /(const Rectangle& r){
  return Rectangle(x, y, w/r.w, h/r.h);
}

bool operator ==(const Rectangle& value){
  return w==value.w && h==value.h;
}
bool operator !=(const Rectangle& value){
  return h!=value.h || w!=value.w;
}

bool operator < (const Rectangle& value){
  return w<value.w && h<value.h;
}

bool operator > (const Rectangle& value){
  return w>value.w && h>value.h;
}

bool operator <= (const Rectangle& value){
  return w<=value.w && h<=value.h;
}

bool operator >= (const Rectangle& value){
  return w>=value.w && h>=value.h;
}

};



int main() {
Rectangle rect1 (6,7,8,9);
 Rectangle* rect2 = new Rectangle(6,22,4,5);
  //cout<<rect1<<endl;
  //cout<<*rect2<<endl;
 cout<<(rect1==*rect2? "equals":"not equal")<<endl;
 cout<<(rect1!=*rect2? "not equal":"equals")<<endl;
bool val1 = rect1<*rect2;
bool val2 = rect1>*rect2;
bool val3 = rect1<=*rect2;
bool val4 = rect1>=*rect2;
cout<<val1<<" "<<val2<<" "<<val3<<" "<<val4<<endl;

rect1=*rect2;
cout<<rect1<<endl;

rect1= rect1+*rect2;
cout<<rect1<<endl;

rect1= rect1-*rect2;
cout<<rect1<<endl;

rect1= rect1* *rect2;
cout<<rect1<<endl;

rect1= rect1/ *rect2;
cout<<rect1<<endl;
}
