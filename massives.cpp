#include <iostream>
#include <string>
#include <deque>
using namespace std;

class Employer{
public:
string name;
int years;
enum jobs{Manager, Cooker, Waiter};
jobs job;

Employer(string name, int years, jobs job){
  this->name=name;
  this->years=years;
  this->job=job;
}

friend ostream& operator << (ostream& out, const Employer& emp){
  out<<emp.name<<endl;
  out<<emp.years<<endl;

  switch (emp.job)
  {
    case Employer::jobs::Manager :
      out<<"Manager"<<endl;
      break;
    case Employer::jobs::Cooker :
      out<<"Cooker"<<endl;
      break;
    case Employer::jobs::Waiter :
      out<<"Waiter"<<endl;
      break;
  } 
}
};

int main() {
/*
Employer* emp1=new Employer ("Aidana", 3, Employer::jobs::Manager);
Employer* emp2= new Employer ("Aisulu", 9, Employer::jobs::Cooker);
Employer* emp3= new Employer ("Aray", 7, Employer::jobs::Waiter);
cout<<*emp1<<endl;
cout<<*emp2<<endl;
cout<<*emp3<<endl;*/
Employer emp1("Aidana", 3, Employer::jobs::Manager);
Employer* ptr_e;

//string names[3];
Employer* emps[10];
emps[0] =new Employer();
Employer** emp = new Employer*[4];

//создать массив дин., из работников, создать функции вывода инф, увеличить стаж на один год у каждого.
}
