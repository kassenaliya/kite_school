#include <iostream>
#include <string>
using namespace std;

class Object{
  public:
  int num;

  Object(int num){
    this->num=num;
  }
};

class Fruit{
public:
string name;
double cost;
Fruit(string name, double cost){
  this->name=name;
  this->cost=cost;
}

};

class Tropical: public Object, public Fruit{
public:
string location;
Tropical(int num, string name, double cost,string location): Object(num), Fruit(name, cost){
  this->location=location;
}

friend ostream& operator <<(ostream& os, const Tropical&  t){
  os<<"Num: "<<t.num<<endl;
  os<<"Name: "<<t.name<<endl;
  os<<"Cost: "<<t.cost<<endl;
  os<<"Location: "<<t.location<<endl;
  return os;
}
};

int main() {
Tropical t1 (1, "kiwi", 55,"Marocco");
//cout<<"Location: "<<t1.location;
cout<<t1;
}
