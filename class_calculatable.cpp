#include <iostream>
#include <string>
#include <exception>
using namespace std;

#define error_115 "a cannot be -"

class Calculatable
{
  public:
  double virtual calc(int n)=0;
};

class C1: public Calculatable
{
public:
double a;
C1(double a)
{
  this->a=a;
}

double calc(int n)
{
  if(n==0){
    //throw exception();
    throw "n cannot be 0";
  }
  if (a<0){
    //throw "a cannot be negative";
    throw 115;
  }
  double sum=a;
  for(int i=2; i<=n; i++)
  {
    sum += a/i;
  }
  return sum;
}
};


class C2: public C1
{
public:
double b;
C2(double a, double b):C1(a)
{
  this->b=b;
}

double calc(int n)
{
  if(n==0){
    //throw exception();
    throw "n cannot be 0";
  }

  if (a<0){
    throw "a cannot be negative";
  }

  double sum=b+a;
  for (int i=2; i<=n; i++)
  {
    sum+=b/i;
  }
  return sum;
}

};


int main() {

  try{

  C1 c1(10);
  C2 c2(15,10);
  cout<<c1.calc(5)<<endl;
  cout<<c2.calc(3)<<endl;

  Calculatable* c;
  c  = new C1(22);
  cout<<c->calc(15)<<endl;
  delete c;

  c= new C2(-90, 4);
  cout<<c->calc(2)<<endl;
  delete c;
}
catch(const char* ex){
  cout<<ex<<endl;
}
catch(int ex){
  cout<<"exception error No " << ex<<endl;
}

}
