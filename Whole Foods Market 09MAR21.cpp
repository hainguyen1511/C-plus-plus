#include <iostream>
#include <iomanip>
using namespace std;

struct Item {
  string name;
  double priceTag;
  int quantity;
};

void getInfo(Item Shopping[], int & size,bool & more,char & isMore) {
while(more) {
cout << endl;
cout << "Enter item name: ";
getline(cin,Shopping[size].name);
cout << "Enter quantity: ";
cin >> Shopping[size].quantity;
cout << "Enter unit price: $";
cin >> Shopping[size].priceTag;
size++;
cout << "Buy more items? (y/n): ";
cin >> isMore;
  if(isMore == 'n') {
  more = false;
  }
cin.clear();
cin.ignore(100,'\n');
}
return;
}

void print(Item Shopping[],int size,double& totalAm)  {
cout << "************************" << endl;
cout << "Your cart contents: " << endl;
cout << left << setw(20) << "Name Item";
cout << left << setw(20) << "Quantity";
cout << left << setw(20) << "Price";
cout << endl;
for(int i = 0; i < size; i++) {
  cout << left << setw(20) << Shopping[i].name;
  cout << left << setw(20) << Shopping[i].quantity;
  cout << left << setw(20) << fixed << setprecision(2) << Shopping[i].priceTag * static_cast<double>(Shopping[i].quantity);
  cout << endl;
totalAm += (Shopping[i].priceTag * static_cast<double>(Shopping[i].quantity));
}
cout << endl;
return;
}

int main() {
const int MAX_NUM = 100;
Item Shopping[100];
int size = 0;
bool more = true;
char isMore = 'y';
double totalAm = 0.00;
cout << "Welcome to AwesomeShopping.com!" << endl;
getInfo(Shopping, size, more, isMore);
print(Shopping, size, totalAm);
cout << "Total: " << fixed << setprecision(2) << totalAm << endl;
cout << "Thank you for shopping with AwesomeShopping.com!" << endl;
return 0;
}