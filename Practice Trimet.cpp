#include <iostream>
#include <iomanip>
using namespace std;
int main() {
char input;
double oneWay = 2.50;
double entireDay = 5.00;
double senAstu = 2.00;
double numticket = 0.0;
cout << "*** TriMet Ticket Purchase ***" << endl;
cout << "A: One-way 2 hour $2.50" << endl;
cout << "B: Entire Day $5.00" << endl;
cout << "C: Senior/Student $2.00" << endl;
cout << "Q: to quit" << endl;
cout << "Enter ticket choice (A,B, or C): ";
cin >> input;
input = toupper(input);
while (input != 'Q')  {
  if (input == 'Q') {
    exit (0);
  }
  else if (input == 'A' || input == 'B' || input == 'C') {
  cout << "How many ticket do you want: ";
  cin >> numticket;
  cout << "You chose: " << input << endl;
  cout << fixed << setprecision(2);
  if (input == 'B') {
  cout << "Your total cost today is $" << entireDay * numticket << "\n\n";
  cout << "Please take your ticket." << endl;
  cout << "Thank you and have a nice day!" << endl;
  }
  else if (input == 'A')  {
  cout << "Your total cost today is $" << oneWay * numticket << "\n\n";
  cout << "Please take your ticket." << endl;
  cout << "Thank you and have a nice day!" << endl;
  }
  else  {
  cout << "Your total cost today is $" << senAstu * numticket << "\n\n";
  cout << "Please take your ticket." << endl;
  cout << "Thank you and have a nice day!" << endl; 
  }
  }
  else {
  cout << "Invalid input" << endl;
  }
cout << "\n" << endl;
cout << "Enter ticket choice (A,B, or C): ";
cin >> input;
input = toupper(input);
}

return 0;
}