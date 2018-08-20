#include <iostream>
#include <string>
using namespace std;

class Human{
protected:
string _name;
public:
Human(string name)
{
  this->_name=name;
}

void go_to(string place){
  cout<<_name<<" is going to "<<place<<endl;
}
void  get_name(){
  cout<<_name;
}
};

class Employer:public Human{
public:
Employer(string name): Human(name){

}

void work(){
  cout<<_name<<" is working"<<endl;
}
};

class Pupil:public Human{
public:
int value = 100;
Pupil(string name): Human(name){

}

void study()
{
  cout<<_name<<"  is studying"<<endl;
}
};


int main(){
Employer emp1("Aidana");
Pupil p1 ("Bakhyt");
emp1.work();
p1.study();

Human* h1;
h1= new Human("Zaur");
h1->go_to("Uni");
delete h1;

//h1=&emp1;
h1=&emp1;
h1->go_to("school");
((Employer*)h1)->work();
}
