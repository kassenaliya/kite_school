#include <iostream>
#include <string>
using namespace std;

class Vector2{

public:

  double x,y;

Vector2(double x, double y){
  this->x = x;
  this->y =  y;
}

void print(){
  cout<<"x= "<<x<<" y= "<<y<<endl;
}

Vector2 operator =(const Vector2& v){
  this->x=v.x;
  this->y=v.y;
  return *this;
}

Vector2 operator +(const Vector2& v){
  return Vector2(x+v.x, y+v.y);
}

Vector2 operator -(const Vector2& v){
  return Vector2(x-v.x, y-v.y);
}

Vector2 operator *(const Vector2& v){
  return Vector2(x*v.x, y*v.y);
}

Vector2 operator /(const Vector2& v){
  return Vector2(x/v.x, y/v.y);
}

Vector2 operator *(const double a){
  return Vector2(x*a, y*a);
}

Vector2 operator +=(const Vector2& v){
  this->x+=v.x;
  this->y+=v.y;
  return *this;
}

Vector2 operator -=(const Vector2& v){
  this->x-=v.x;
  this->y-=v.y;
  return *this;
}

Vector2 operator *=(const Vector2& v){
  this->x*=v.x;
  this->y*=v.y;
  return *this;
}

Vector2 operator /=(const Vector2& v){
  this->x/=v.x;
  this->y/=v.y;
  return *this;
}

Vector2 operator +=(const double a){
  this->x+=a;
  this->y+=a;
  return *this;
}

Vector2 operator -=(const double a){
  this->x-=a;
  this->y-=a;
  return *this;
}

Vector2 operator *=(const double a){
  this->x*=a;
  this->y*=a;
  return *this;
}

Vector2 operator /=(const double a){
  this->x/=a;
  this->y/=a;
  return *this;
}

friend ostream& operator <<(ostream& out, const Vector2& v){
  out<<"x= "<<v.x<<" y= "<<v.y;
  return out;
}

void operator  << (const Vector2& v){
  this->x= v.x;
  this->y= v.y;
}

void operator >> ( Vector2& v){
  v.x= this->x;
  v.y= this->y;
}


};



int main() {
  Vector2 vec1(3,9);
  Vector2 vec2(4,22);
  Vector2 vec3(7,11);
  vec1.print();
  vec2.print();
  vec3.print();
  cout<<endl;
  
  //vec3=vec2;
  //vec3.print();

//cout<<endl;
 // vec3= vec1+vec2;
 // vec3.print();

/*cout<<endl;
  vec3= vec1-vec2;
  vec3.print();*/

/*cout<<endl;
  vec3= vec1*vec2;
  vec3.print();*/

  /*cout<<endl;
  vec3= vec1/vec2;
  vec3.print();*/

/*
cout<<endl;
  vec3= vec1*3;
  vec3.print();*/
  /*cout<<endl;
  vec3 += vec1;
  vec3.print();

  cout<<endl;
  vec3 -= vec1;
  vec3.print();

  cout<<endl;
  vec3 *= vec1;
  vec3.print();

  cout<<endl;
  vec3 /= vec1;
  vec3.print();
*/

 /* vec3 += 3;
  vec3.print();

  vec3 -= 1;
  vec3.print();

  vec3 *= 13;
  vec3.print();

  vec3 /= 4;
  vec3.print();*/

  //cout<<vec2;

  vec1<<vec2;
  cout<<vec1<<endl;

  vec3>>vec2;
  cout<<vec2<<endl;

}
