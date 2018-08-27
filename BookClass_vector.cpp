#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Book{
public:
string name;
string author;
int year;
int pages;

Book(string name, string author, int year, int pages)
{
  this->name=name;
  this->author=author;
  this->year=year;
  this->pages=pages;
}

friend ostream& operator <<(ostream& out,  Book book){
  out<<book.name<<". ";
  out<<book.author<<". ";
  out<<"Year: "<<book.year<<". ";
  out<<"Pages: "<<book.pages;
  return out;
}
};


int main() {
  char key;
  vector<Book> books{ 
    Book("Flowers for Algernon", "D. Keys", 2014, 260),
    Book("Harry Potter", "J.K.Rowling", 1997, 411),  
    Book("Dead souls", "N.V. Gogol", 1882, 230) , 
    Book("Flower", "Me", 2004, 255) ,
     Book("Courier", "K.G. Shakhnazarov", 1963, 235)
    };

while (true) {
		cout << "Enter 1- add, enter 2-show list, other-exit ";
		cin >> key;
		if (key == '1') {
      //Book book;
      //Book* book;
      //book = new Book();

      string name;
      string author;
      int year;
      int pages;

			cout<<"Enter a book: "<<endl;
      cin>>name;
      cout<<"Enter a author: "<<endl;
      cin>>author;
      cout<<"Enter a year: "<<endl;
      cin>>year;
      cout<<"Enter a pages: "<<endl;
      cin>>pages;

      books.push_back(Book(name,author, year, pages));
		}
		else if (key == '2') {
    cout<<"\n-------\n";
		for (int i = 0; i < books.size(); i++) {
		cout << books.at(i)<<(i==books.size()-1?".":"; ")<<endl<<endl;
		}
    cout<<"\n-------\n\n";
    }

		else if (key!='1' && key!='2'){
			break;
		}
	}
  
  auto iter = books.begin();
  while(iter!=books.end())
  {
    if((*iter).pages>300)
    {
      books.erase(iter);
      iter=books.begin();
      continue;
    }
    iter++;
  }


  cout<<"\n-------\n";
  for(auto book:books){
		cout << book<<endl<<endl;
		}
    cout<<"\n-------\n\n";

iter = books.begin();
  while(iter!=books.end())
  {
    if((*iter).year<1900 || (*iter).year>2010)
    {
      books.erase(iter);
      iter=books.begin();
      continue;
    }
    iter++;
  }

cout<<"\n-------\n";
  for(auto book:books){
		cout << book<<endl<<endl;
		}
    cout<<"\n-------\n\n";

}
