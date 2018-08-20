#include <iostream>
#include <string>
using namespace std;

void print(int* arr, int n){
for(int i=n-1; i>=0; i--)
{
  cout<<arr[i]<<" ";
}
cout<<endl<<endl;
}


void print(int** arr, int k, int l){
  for(int i=0; i<k; i++){
    for (int j=0; j<l; j++){
      int a = arr[i][j];
      cout<<a<<(a<10?"   ":(a<100?"  ":" "));
    }
    cout<<endl;
  }
}



int main() {

int n=5;
int* arr = new int[n]{1,2,3,4,5};
print(arr, n);

int k=5;
int l=4;
int** arr2 = new int*[k];
for(int i=0; i<k; i++){
  arr2[i]=new int[l]{};
}

for(int i=0; i<k; i++)
{
  for(int j=0; j<l; j++)
  {
    arr2[i][j]= i*i*j*j + i+j+4;
  }
}
print(arr2, k, l);


}
