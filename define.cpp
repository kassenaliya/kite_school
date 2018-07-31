#include <iostream>
#include <string>
using namespace std;
 #define PI 3.14
 //#define HELLO "Hello"

void print();
#ifdef HELLO
void print(){
  cout<<HELLO<<endl;
}
#endif

#ifndef HELLO
void print(){
  cout<<"Undefined"<<endl;
}
#endif



int main() {
cout<<PI<<endl;
//cout<<HELLO<<endl;
print();

}
