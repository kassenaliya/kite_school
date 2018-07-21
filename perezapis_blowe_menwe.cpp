#include <iostream>
#include <string>
using namespace std;

class Test{
public:
int num1 =0;
int num2 =0;

Test(int num1, int num2){
  this->num1=num1;
  this->num2=num2;
}

bool operator ==(const Test& value){
  return num1==value.num1 && num2==value.num2;
}

bool operator !=(const Test& value){
  return num1!=value.num1 || num2!=value.num2;
}


bool operator ==(double value){
  return num1==value && num2==value;
}

bool operator < (const Test& value) {
  return num1<value.num1 && num2<value.num2;
}

bool operator > (const Test& value) {
  return num1>value.num1 && num2>value.num2;
}

bool operator <= (const Test& value) {
  return num1<=value.num1 && num2<=value.num2;
}

bool operator >= (const Test& value) {
  return num1>=value.num1 && num2>=value.num2;
}
};


int main() {
 Test test1 (6,6);
 Test* test2 = new Test(6,22);
 cout<<(test1==*test2? "equals":"not equal")<<endl;
 cout<<(test1!=*test2? "not equal":"equals")<<endl;
cout<<(test1==6? "equals":"not equal")<<endl;
bool val1 = test1<*test2;
bool val2 = test1>*test2;
bool val3 = test1<=*test2;
bool val4 = test1>=*test2;
cout<<val1<<" "<<val2<<" "<<val3<<" "<<val4<<endl;


}
