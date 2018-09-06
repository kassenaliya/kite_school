#include <iostream>
#include <string>
#include <deque>
using namespace std;

class Book{
public:
string name;

Book(string name){
  this->name=name;
}

};

class Person{
public:
string name;
Book* current_book;

Person(string name){
  this->name=name;
}
void setCurrentBook(Book& book){
  current_book=&book;
}
void read(){
  cout<<"Book read: "<<current_book->name<<endl;
  }

};


int main() 
{
deque <Book> booksQue;
booksQue.push_back( Book("Little Prince") );
booksQue.push_back( Book("Harry Potter") );
booksQue.push_back( Book("Flowers for Algernon") );
booksQue.push_back( Book("Anna Karenina") );

Book book1 ("Book 1");
Person person1 ("Aidana");

person1.setCurrentBook(book1);
person1.read();
/*person1.setCurrentBook(booksQue.front());
person1.read();
booksQue.pop_front();*/

while(!booksQue.empty()){
  //cout<<booksQue.front().name<<endl;
  person1.setCurrentBook(booksQue.front());
  person1.read();
  booksQue.pop_front();
}

/*for(int i=0; i<booksQue.size(); i++){
  cout<<booksQue.front().name<<endl;
  booksQue.pop_front();
}
*/


}
