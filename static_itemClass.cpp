#include <iostream>
#include <string>
using namespace std;
class Item{
  public:
  static int last_id;
  string name;
  double cost;
  int id;

  Item(string name, double cost){
    this->name= name;
    this->cost= cost;
    id=++last_id;
  }

friend ostream& operator << (ostream& out, const Item& i){
  out<<"Name is: "<<i.name<<endl;
  out<<"Cost is: "<<i.cost<<endl;
  out<<"ID is: "<<i.id<<endl;
  return out;
}

};

int Item::last_id=0;

int main() {
  Item* i1 = new Item("Laptop", 200);
  cout<<*i1;

  Item* i2 = new Item("Phone", 100);
  cout<<*i2;

  cout<<Item::last_id;
}
