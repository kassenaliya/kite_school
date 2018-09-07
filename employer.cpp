#include <iostream>
#include <string>
using namespace std;

class Employer
{
  public:
  string name;
  int years;
  enum jobs{Manager, Cooker, Waiter};
  jobs job;

  Employer(string name, int years, jobs job)
  {
    this->name=name;
    this->years=years;
    this->job=job;
  }

  friend ostream& operator << (ostream& out, const Employer& emp){
    cout<<"Employer's name is: "<<emp.name<<endl;
    cout<<"Working years: "<<emp.years<<endl;
    cout<<"Job: ";
    {
      switch (emp.job)
      {
        case Employer::jobs::Manager :
          cout<<"Manager"<<endl;
          break;
        case Employer::jobs::Cooker :
          cout<<"Cooker"<<endl;
          break;
        case Employer::jobs::Waiter :
          cout<<"Waiter"<<endl;
          break;
      }
      cout<<endl;
    }
  }


  void print()
  {
    cout<<"Employer's name is: "<<name<<endl;
    cout<<"Working years: "<<years<<endl;
    cout<<"Job: ";
    {
      switch (job)
      {
        case Employer::jobs::Manager :
          cout<<"Manager"<<endl;
          break;
        case Employer::jobs::Cooker :
          cout<<"Cooker"<<endl;
          break;
        case Employer::jobs::Waiter :
          cout<<"Waiter"<<endl;
          break;
      }
      cout<<endl;
    }
  }

};

void  print_array(Employer** arr, int n) {
    cout<<endl<<"-------------"<<endl;
    for(int i=0; i<n; i++){
        cout<<*arr[i]<<endl;
    }
    cout<<"-------------"<<endl;
}

int year_inc(Employer** arr, int n){
  Employer* emp;
  for(int i=0; i<n; i++){
    //arr[i]->years++;
    arr[i]->years+=5;
    /*emp->name = "";
    emp->job;
    emp->years++;*/

  }
}

int main() {
int n = 6;
Employer** employers = new Employer*[n];

employers[0]= new Employer("Aidana", 3, Employer::jobs::Manager);
employers[1]= new Employer ("Aisulu", 9, Employer::jobs::Cooker);
employers[2]= new Employer ("Aray", 7, Employer::jobs::Waiter);
employers[3]=new Employer ("Bakhyt", 7, Employer::jobs::Manager);
employers[4]= new Employer ("Tleu", 19, Employer::jobs::Cooker);
employers[5]= new Employer ("Alikhan", 2, Employer::jobs::Manager);

print_array(employers, n);
year_inc(employers, n);
print_array(employers, n);

}
