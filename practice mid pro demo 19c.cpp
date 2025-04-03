#include <iostream>
#include <cctype>
#include <cstring>
using namespace std;
int main() {
  int i = 0;
  int j = 0;
  int SIZE = 50;
  char letter[SIZE];
  cout << "Enter the phrase with space: ";
  cin.get(letter,SIZE);
  SIZE = strlen(letter);
  for ( i = 0; i < SIZE; i++)
    {
      if(letter[i] == ' ')
      {
        for(j=i; j < SIZE; j++)
          {
            letter[j] = letter[j+1];
          }
      i--;  
      SIZE--;
      }
    }
  cout << letter << endl;
  return 0;
}