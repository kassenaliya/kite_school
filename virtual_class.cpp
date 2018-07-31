#include <iostream>
#include <string>
using namespace std;

class Printable
{
  public:
  void virtual print()=0;
};

class Person: public Printable
{
public:
  string name;
  int age;
  string gender;

Person(string name, int age, string gender)
  {
    this->name=name;
    this->age=age;
    this->gender=gender;
  }

  void print(){
    cout<<"name: "<<name<<endl;
    cout<<"age: "<<age<<endl;
    cout<<"gender: "<<gender<<endl;
  }
};

class Animal: public Printable
{
public:
  string name;
  string type;
  int age;
  int weight;

Animal(string name, string type, int age, int weight)
  {
    this->name=name;
    this->type=type;
    this->age=age;
    this->weight=weight;
  }

  void print(){
    cout<<"name: "<<name<<endl;
    cout<<"type: "<<type<<endl;
    cout<<"age: "<<age<<endl;
    cout<<"weight: "<<weight<<endl;
  }
};

class Output{
public:
  static void out(Printable& object){
    object.print();
  }
  static void outline(Printable& object){
    object.print();
    cout<<endl;
  }
};

int main(){
  Person t1 ("Aidana", 25, "female");
  Person t2 ("Alikhan", 15, "male");
  Animal a1 ("Jackson", "dog", 6, 50 );
  Animal a2 ("Tilda", "dog", 4, 20);

  Output::outline(t1);
  Output::outline(t2);
  Output::outline(a1);
  Output::outline(a2);

}


