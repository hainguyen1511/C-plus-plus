#include <iostream>
#include <cctype>
#include <cstring>
using namespace std;
int main() 
{
  const int SIZE {100};
  char word[SIZE] {'a'};
  char hold {'a'};
  int i {0};
  int j {1};
  int len {0};
  cout << "Please enter a word: ";
  cin.width(SIZE);
  cin >> word;
  cin.ignore(100,'\n');
  cout << "Original word is: " << word << endl;
  hold = word[i];
  word[i] = word[j];
  word[j] = hold;
  cout << "After switching place first and second letter: " << word << endl;
  len = strlen(word);
  j = len - 1;
  hold = word[i];
  word[i] = word[j];
  word[j] = hold;
  cout << "Switching first letter to the end: " << word << endl;
  return 0;
}