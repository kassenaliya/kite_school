#include <iostream>
#include <string>
using namespace std;

class Usable;
class Hungryable;
class Plant;
class Flower;
class Player;


class Usable{
public:
void virtual use(const Player& p)=0;
};

class Hungryable{
  public:
  void virtual eat()=0;
};


class Player{
public:
string name;

Player(string name){
  this->name=name;
}

void use_object(Usable& object){
  object.use(*this);
}
};

enum  Colours{ Red, Green, Pink, White, Black};

enum FlowerTypes{Rose, Peonies, Aster, Sunflower};

class Plant{
public:
  string name;
  Colours colour;
  Plant(string name, Colours colour){
    this->name=name;
    this->colour=colour;
  }

  void virtual print(){
    cout<< "Name: " << name<<endl;
    cout<< "Colour: ";
    switch(colour){
      case  Colours::Red: cout<<"Red";
      break;
      case  Colours::Green: cout<<"Green";
      break;
      case  Colours::Pink: cout<<"Pink";
      break;
      case  Colours::White: cout<<"White";
      break;
      case  Colours::Black: cout<<"Black";
      break;
    }
    cout<<endl;
  }
};


class Flower:public Plant, public Hungryable, public Usable {
  public:
  FlowerTypes type;
  double height;

  Flower(string name, FlowerTypes type, Colours colour, double height):Plant(name, colour)
  {
    this->type=type;
    this->height=height;
  }

  void print(){
    Plant::print();
    cout<<"Type: ";
      switch(type){
      case  FlowerTypes::Rose: cout<<"Rose";
      break;
      case  FlowerTypes::Peonies: cout<<"Peonies";
      break;
      case  FlowerTypes::Aster: cout<<"Aster";
      break;
      case  FlowerTypes::Sunflower: cout<<"Sunflower";
      break;
    }
    cout<<endl;
    cout<<"Height: "<<height<<endl;
    }

    void eat(){
      cout<<name<<" питается водой"<<endl;
    }

    void use(const Player& p){
      cout<<p.name<<" нюхает цветок"<<endl;
    }
};



int main() {
Flower f1 ("Rose", FlowerTypes::Rose, Colours::Black, 1.20);
f1.print();
cout<<endl;
f1.eat();
//f1.use();

Player p1("Knight");
p1.use_object(f1);




/*
Colours colour;
colour = Red;
cout<<colour<<endl;
colour = (Colours)(Red +1);
cout<<colour<<endl;
colour = (Colours)4;
if(colour == Colours::Black){
  cout<<"is Black"<<endl;
}
else{
  cout<<"is not black"<<endl;
}
*/

}
