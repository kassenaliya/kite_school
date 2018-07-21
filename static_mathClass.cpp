#include <iostream>
#include <string>
using namespace std;

class Math{
public:
static double pow2(int a){
  return a*a;
  }

static double pow3(int a){
  return a*a*a;
  }

static int factorial(int a){
  int result=1;
  for(int i=1; i<=a; result*=i, i++);
  return result;
}



};


int main() {
cout<<"Factorial: "<<Math::factorial(5)<<endl;
cout<<"pow2: "<<Math::pow2(5)<<endl;
cout<<"pow3: "<<Math::pow3(5)<<endl;
}
