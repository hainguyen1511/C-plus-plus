#include <iostream>
using namespace std;

void gentNums(int nums[], int& size)  {
while(cin)  {
  cout << "Enter interger at index " << size << ": ";
  cin >> nums[size];
  if(!cin)  {
    cin.clear();
    cin.ignore(100,'\n');
    break;
  }
  size++;
}
return;
}

void print(int nums[], int size)  {
  for(int i = 0; i < size; i++) {
    cout << nums[i];
    if(i < size - 1)  {
      cout << ", ";
    }
  }
  cout << endl;
return;
}

void isEven(int nums[], int size, int& numsEven) {
  for(int i = 0; i < size; i++) {
    if((nums[i] % 2) == 0)  {
      numsEven++;
    }
  }
return;
}

void removeNums(int nums[],int& size,int reNums) {
for(int i = 0; i < size; i++) {
  if(nums[i] == reNums) {
    for(int j = i; j < size - 1; j++) {
      nums[j] = nums[j + 1];
    }
  size--;
  i--;
  }
}
return;
}

void addNums(int nums[], int& size,int addNum, int addIndex) {
for(int i = 0; i < size; i++) {
  if (i == addIndex)  {
    for(int j = size - 1; j <= addIndex; j--) {
      nums[j + 1] = nums[j];
    }
  nums[addIndex] = addNum;
  size++;
  }
}
return;
}

int main() {
const int MAX_NUM = 100;
int nums[MAX_NUM] = {0};
int size = 0;
int numsEven = 0;
int reNums = 0;
int addNum = 0;
int addIndex = 0;
cout << "Enter an array of intergers (type any letter to end the array): " << endl;
gentNums(nums, size);
cout << "Original list: " << endl;
print(nums,size);
isEven(nums,size,numsEven);
cout << "There are " << numsEven << " even numbers" << endl;
cout << "Add a number: ";
cin >> addNum;
cout << "At index: ";
cin >> addIndex;
addNums(nums,size, addNum , addIndex);
cout << "Remove number: ";
cin >> reNums;
removeNums(nums,size,reNums);
cout << "Result after removal: ";
print(nums,size);
}