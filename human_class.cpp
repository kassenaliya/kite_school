#include <iostream>
#include <string>
//#include <human.h>
using namespace std;

class Human
{
public:
  string name;
  int age;
  double height;

Human(string name, int age, double height)
  {
  this->name=name;
  this->age=age;
  this->height=height;
  }

void virtual print()=0;
void virtual action()=0;
};

void Human::print()
{
  cout<<"Name is: "<<name<<endl;
  cout<<"Age is: "<<age<<endl;
  cout<<"Height is: "<<height<<endl;
}


class Student: public Human
{
public:
  string univ_name;
  int group_number;

Student(string name, int age, double height, string univ_name, int group_number) : Human(name, age, height)
  {
    this->univ_name=univ_name;
    this->group_number=group_number;
  }

void print(){
  Human::print();
  cout<<"University: "<<univ_name<<endl;
  cout<<"Group: "<<group_number<<endl;
}

void action(){
  cout<<name<<" is studying"<<endl;
}
};

class Employee: public Human
{
public:
string job_name;
string post;

Employee(string name, int age, double height, string job_name, string post)
: Human(name, age, height)
  {
    this->job_name=job_name;
    this->post=post;
  }

void print(){
  Human::print();
  cout<<"Job: "<<job_name<<endl;
  cout<<"Post: "<<post<<endl;
}

void action(){
  cout<<name<<" is working"<<endl;
}
};

int main() {
  //Student st1 ("Aliya", 19, 1.70, "Cov", 111);
  //st1.action();
  //st1.print();

  Student* st2 = new Student("Alikhan", 17, 1.70, "Nur", 9);
  st2->action();
  st2->print();
  delete st2;
  //st2 = NULL
  cout<<endl;
  st2 = new Student("Aidana", 22, 1.60, "KazGuu", 5);
  st2->action();
  st2->print();
  delete st2;
  cout<<endl;
  Employee* emp1 = new Employee("Bakhyt", 50, 1.69, "Meirym", "dentist");
  emp1->action();
  emp1->print();
  delete emp1;




}
