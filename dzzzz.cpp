#include <iostream>
#include <string>
#include <vector>
#include <deque>

using namespace std;

class Letters 
{
  public:
  enum Header { Bill, Letter, Card };
  string from;
	Header type;

	Letters(string name, Header type)
  {
		this->from = from;
		this->type = type;
	}

void print() {
 		cout << "From: " << from << endl;
		switch (type) {
		case Header::Bill:
			cout << "Bill" << endl;
			break;
		case Header::Letter:
			cout << "Letter" << endl;
			break;
		case Card:
			cout << "Card" << endl;
			break;
		}
	}



friend ostream& operator <<(ostream& out,  Letters letter)
{
  out<<letter.from<<". ";
  out<<letter.type<<". ";
  return out;
}
};



int main() {
char key;
vector<Letters> letters
{ 
  Letters("Rose", "Card"),
  Letters("Jennie", "Letter"),  
  Letters("Lisa", "Card") , 
  Letters("Jisoo", "Bill"),
};
 
for (int i = 0; i < letters.size(); i++) {
		cout << letters.at(i)<<(i==letters.size()-1?".":"; ")<<endl<<endl;
		}

}
