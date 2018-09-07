#include <iostream>
#include <string>
#include <ctime>
#include <stdio.h>
using namespace std;

int random(int top, int bottom){
//srand(time(0));
 return (rand()%(top-bottom)+bottom);
}
int main() {
int rows=4;
int cols=3;
int arr[rows][cols];
srand(time(0));
cout<<"time = "<<  time(0)<<endl;

int bottom =10;
int top=500;

int c = rand()%top+bottom;
//int c= random(10,5);

for(int i=0; i<rows; i++)
{
  for(int j=0; j<cols; j++)
  {
    arr[i][j]=c;
    //c+=3;
    cout<<arr[i][j];//<<(arr[i][j]<10?"   ":arr[i][j]<100?"  ":" ");
  
  }
  cout<<endl;
}
}
