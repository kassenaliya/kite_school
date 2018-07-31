#include <iostream>
#include <string>
using namespace std;


class Object{
private:
string _name;
double _price;
int _count=0;

public:
Object(string name, double price){
  this->_name=name;
  this->_price=price;
}

void set_name(string name){
  _name=name;
  ++_count;
}

string get_name(){
  ++_count;
  return _name;
}

double get_price(){
  ++_count;
  return _price;
}

void print(){
  cout<<"Name: "<<_name<<endl;
  cout<<"Price: "<<_price<<endl;
  cout<<"Count: "<<++_count<<endl; 
}
};




int main() {
  Object o1 ("Phone", 2.9);
  o1.print();
  cout<<endl;
  o1.set_name("Iphone");
  cout<<o1.get_name()<<endl;
  cout<<o1.get_price()<<endl;
  o1.print();
  
}
