#include <iostream>
#include <string>
using namespace std;

void print(int** arr, int rows, int col){
  for(int i=0; i<rows; i++){
    for (int j=0; j<col; j++){
      int b = arr[i][j];
      cout<<b<<(b<10?"   ":(b<100?"  ":" "));
    }
    cout<<endl;
  }
}


int main() 
{
  int k=10;
  int l=k;
  int** arr= new int*[k];
  for(int i=0; i<k; i++){
    arr[i]=new int[l];
  }

  for(int i=0; i<k; i++){
    for(int j=0; j<l; j++){
      arr[i][j]=(i+1)*(j+1);
    }
  }

  print(arr, k, l);
}
