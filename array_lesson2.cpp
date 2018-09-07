#include <iostream>
#include <string>
using namespace std;

int main() {

int n=10;
int* arr = new int[n]{1,2,3,4,5,6,7,8,9,10};
int* ptr = arr;
for(int i=0; i<n; i++)
{
cout<<*ptr<<endl;
ptr++;
} 
}
