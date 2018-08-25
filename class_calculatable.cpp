#include <iostream>
#include <string>
using namespace std;

void print(int* arr, int n){
for(int i=0; i<n; i++)
{
  cout<<arr[i]<<" ";
}
cout<<endl<<endl;
}

int* mirror(int* arr, int n){
int* arr2= new int[n];
for(int i=n-1, j=0; i>=0; i--, j++)
  {
    arr2[j]=arr[i];
  }
  return arr2;
}

int** mirror(int** arr, int  k, int l)
{
int** arr2= new int*[k];
for(int i=0; i<k; i++)
{
  arr2[i]=new int[l];
}

  for(int i=0; i<k; i++)
  {
    for(int a=l-1,j=0; a>=0; a--, j++)
    {
      arr2[i][j]=arr[i][a];
    }
  }
  return arr2;
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
int*  m = mirror(arr, n);
print(m, n);

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
    arr2[i][j]= i*i*j*j + i+j;
  }
}

int** m2= mirror(arr2, k, l);

print(m2, k, l);


}
