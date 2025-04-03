#include <iostream>
#include <iomanip>
using namespace std;
void printWinner(string names[], double votes[], int num, double totalVotes);
bool getMore();
void getCandidate(string names[], double votes[], int& num, double& totalVotes);

int main() {
    string names[100] = {""};
    double votes[100] = {0};
    int num_candidates = 0;
    bool more = true;
    double totalVotes = 0.00;

    while (more) {
        getCandidate(names, votes, num_candidates, totalVotes);
        more = getMore();
        }
    printWinner(names,votes,num_candidates,totalVotes);
}

void getCandidate(string names[], double votes[], int& num, double& totalVotes){
int temp = 1;
temp += num;
cout << "Enter name of candidate#" << temp << ": ";
cin >> names[num];
cout << "Enter the vote for candidate#" << temp << ": ";
cin >> votes[num];
totalVotes += votes[num];
num++;
}

bool getMore() {
  char more = ' ';
  cout << "would you like to enter another candidate and votes? (Y/N)" << endl;
  cin >> more;
  more = tolower(more);
  if(more == 'n'){
    return false;
  }
  return true;
}

void printWinner(string names[], double votes[], int num, double totalVotes){
  double percentVote[100];
  cout << "Candidate" << right << setw(20) << "Votes" << right << setw(20) << "% of Votes" << endl;
  for (int i = 0; i < num; i++) {
  percentVote[i] = (votes[i] / totalVotes) * 100.00;
  cout << left << setw(20) << names[i];
  cout << left << setw(20) << static_cast<int>(votes[i]); 
  cout << left << setw(20) << fixed << setprecision(2) << percentVote[i];
  cout << endl;
  }
  cout << "Total" << left << setw(20) << static_cast<int>(totalVotes) << endl;
  double highVote = 0.00;
  for (int i = 0; i < num; i++) {
    if (percentVote[i] > highVote)  {
    highVote = percentVote[i]; 
    }
  }
  for (int i = 0; i < num; i++) {
    if (percentVote[i] == highVote) {
      cout << "The winner is " << names[i] << endl;
    }
  }
return;
}