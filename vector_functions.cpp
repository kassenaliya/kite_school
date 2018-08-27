#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
/*
vector<int> num{1,2,3,4,5,6,7}; 
for(auto n:num){
  cout<<n<<" ";
}
cout<<endl;

for(int i=10; i>0; i--){
  num.insert(num.begin()+1, i);
}
for(auto n:num){
  cout<<n<<" ";
}
cout<<endl;*/

/*
vector<int> numbers;
for(int i=5; i>0; i--){
  numbers.insert(numbers.begin(), i, i);
}

for(auto num:numbers){
  cout<<num<<" ";
}
cout<<endl;
*/
/*
vector<int>num1{1,2,3,4,5,6,7,8,9,10};
vector<int>num2{5,6,7,8,9,11,12,13,14,15,16};
vector<int>num3;

num3.insert(num3.begin(), num1.begin()+2, num1.end()-2);
num3.insert(num3.begin(), num2.begin()+2, num2.end()-2);
num3.insert(num3.end(),{9,10,11,12,13});

for(auto n:num3){
  cout<<n<<" ";
}
cout<<endl;
*/
/*
vector<int>numbers{1,2,3,4,5,6,7,8,9,10};
for(auto n:numbers){
  cout<<n<<" ";
}
cout<<endl;

numbers.resize(7);
for(auto n:numbers){
  cout<<n<<" ";
}
cout<<endl;

numbers.resize(10,8);
for(auto n:numbers){
  cout<<n<<" ";
}
cout<<endl;
*/

/*
vector<int>num{1,2,3,4,5,6,7};
num.assign({8,9,10,11,12,13});
for(auto n:num){
  cout<<n<<" ";
}
cout<<endl;

num.assign(17,11);
for(auto n:num){
  cout<<n<<" ";
}
cout<<endl;

vector<int> num1{0,1,7,6,5,3,9};
num.assign(num1.rbegin(), num1.rend());
//num.assign(num1.begin(), num1.end());
for(auto n:num){
  cout<<n<<" ";
}
cout<<endl;
*/

vector<int> num1{1,2,3,4,5};
vector<int>num2{6,7,8,9,10};
num1.swap(num2);
cout<<"num1: "<<endl;
for(auto v:num1){
  cout<<v<<" ";
}
cout<<endl;

cout<<"num2: "<<endl;
for(auto v:num2){
  cout<<v<<" ";
}
cout<<endl;

}
