#include <iostream>
#include <string>
using namespace std;

class Triangle{
public:
int height;

Triangle(int height)
{
  this->height=height;
}

void draw(int type)
{
  int a = height/2;
  switch(type){
  case 1:
  for(int i=1; i<=height; i+=2){
    for(int b=a--;b>0; b--)
    {
      cout<<" ";
    }
    for (int j=1; j<=i; j++)
    {
      cout<<j;
    }
    cout<<endl;
  }
    break;

  
  case 2:
    for (int i=1; i<=height; i+=2){
      for (int b=a--; b>0; b--)
        {
          cout<<" ";
        }
        for (int j=1; j<=i; j++)
        {
          cout<<height;
        }
      cout<<endl;
    }
      break;

case 3:
  for(int i=1; i<=height; i+=2){
    for(int b=a--;b>0; b--)
    {
      cout<<" ";
    }
    for (int j=i; j>=1; j--)
    {
      cout<<j;
    }
    cout<<endl;
  }
    break;
  
 case 4:
 a=0;
  for(int i=height; i>=1; i-=2){
    for(int b=0; b<a; b++)
    {
      cout<<" ";
    }
    a++;
    for (int j=1; j<=i; j++)
    {
      cout<<j;
    }
    cout<<endl;
  }
    break;


}//switch
}//draw()
void draw(char ch)
{
  int space = height/2;
  for (int i=1; i<=height; i+=2){
    for (int b=space--; b>0; b--)
    {
      cout<<" ";
    }
    for(int j=1; j<=i; j++)
    {
      cout<<ch;
    }
    cout<<endl;
  }
}

};


