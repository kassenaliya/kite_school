#include <iostream>
#include <string>
using namespace std;

class Eatable;
class Feedable;
class Animal;
class Plant;
class Vegetables;
class Fruits;

class Object
{
  public:
  string name;

  Object(string name)
  {
    this->name=name;
  }

  void virtual action(const Eatable& e)=0;
  void virtual action(const Feedable& f)=0;

};

class Eatable
{
  public:
  void virtual eat()=0;
};

class Feedable
{
  public:
  void virtual feed()=0;
};

class Animal: public Object, public Eatable, public Feedable 
{
  public:
  double height;
  string location;

  Animal(double height, string location):Object(name)
  {
    this->height=height;
    this->location=location;
  }

    void eat(){
      cout<<name<<" eats meat"<<endl;
    }

    void feed(const Animal& a){
      cout<<" Feed a"<<a.name<<endl;
    }

  
};

class Plant: public Object, public Eatable, public Feedable 
{
  public:
  double height;
  string colour;

  Plant(double height, string colour):Object(name)
  {
    this->height=height;
    this->colour=colour;
  }
   void eat(){
      cout<<name<<" drinks water"<<endl;
    }

    void feed(const Plant& p){
      cout<<" Feed a"<<p.name<<endl;
    }
};

class Vegetables: public Object, public Eatable, public Feedable 
{
  public:
  double cost;
  string  colour;

  Vegetables(double cost, string colour):Object(name)
  {
    this->cost=cost;
    this->colour=colour;
  }

   void eat(){
      cout<<name<<" drinks water"<<endl;
    }

    void feed(const Vegetables& v){
      cout<<" Feed a"<<v.name<<endl;
    }
};

class Fruits: public Object, public Eatable, public Feedable 
{
  public:
  double cost;
  string  colour;

  Fruits(double cost, string colour):Object(name)
  {
    this->cost=cost;
    this->colour=colour;
  }

  void eat(){
      cout<<name<<" drinks water"<<endl;
    }

    void feed(const Fruits& f){
      cout<<" Feed a"<<f.name<<endl;
    }
};



int main() {

}
