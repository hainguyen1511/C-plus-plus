// Name: Hai T. Nguyen
//PSU CS162 section 8 
/*The pupose of the program is to get input of users.
The inputs are width, depth and base price and ask if they want locked space.
Then output the monthly rental cost.*/
#include <iostream>
#include <iomanip>
#include <cctype>
using namespace std;
int main() {
  float width {-1};// user input values for width
  float depth {-1};// user input values for depth
  int month {13};// user input for months max is 12
  int lock_space {2};//locked space require
  float traffic {-1};//popular percentage
  float base_price {-1};//the base price
  float total_amount1 {0};//total monthy rent without charges.
  float total_amount2 {0};//total monthy rent with charges.
  float deduction {0};//the deduction will be calculated
  float surcharge {0};//the surcharge will be calculated
  float pop_price {0};//this will be calculated base on the traffic percentage
  char rep_val {'y'};//get back to input mode
  bool rep_pro {true};//stop inner loop.
  string name_shop1 {" "};//name of the shop. User input no space between
  string ans {" "};//display Yes or No for locked space 
//Welcome user to the program, make sure this out of loop because welcome once.
  cout << " ****************** Welcome to my calculator for monthly rental ************" << endl;
  while (rep_pro == true)
    {   
//Perform loop, make sure the user not enter negative numbers, users will be instructed to enter correct inputs.
    while (width < 0 || depth < 0 || month > 12 || month < 0 || lock_space > 1 || lock_space < 0 || traffic > 100 || traffic < 0 || base_price < 0)
      {
      cout <<".................................................." << endl;
      cout << "Let enter the measurements and base price." << endl;
      cout << endl;
      cout << "Input the width in feet: ";
      cin >> width;
      cout << "Input the depth in feet: ";
      cin >> depth;
      cout << "How long you want to rent (maximum 12 months): ";
      cin >> month;
      cout << "Do you want locked with wall or not? (Please answer 1 for 'Yes',0 for 'No'): ";
      cin >> lock_space;
      cout << "The popular rate from 0-100 in percentage (base price will increase depending on this): ";
      cin >> traffic;
      cout << "The base price per square foot: ";
      cin >> base_price;
//Only show error when inputs are incorrect.
        if (width < 0 || depth < 0 || month > 12 || month < 0 || lock_space > 1 || lock_space < 0 || traffic > 100 || traffic < 0 || base_price < 0)
          {
         cout << "\n..............................."
           << "Out of range, or negative numbers detected. Please enter correct input." << endl;
      cout << "..............................." << endl;
          }      
        }
//These if statements change words yes and no when echo the inputs.
  if (lock_space == 1)
  {
    ans = "Yes";
  }
  else if (lock_space == 0)
  {
    ans = "No";
  }
// Verify user the input is received and correct, calculation will performed.
cout << endl;
cout << "********** Input accepted ***********" << endl;
cout << endl;
//Ask name of the shop for printing.
cout << "Name of your shop (Without Space): ";
cin >> name_shop1;
//Echo the inputs and show users the inputs.
  cout << name_shop1 <<" is " << width << " by " << depth << " feet and " << month << " month of rental. " << ans << ", space needed to be locked and surrounded by full walls. Popularity rate you want is " << traffic << "% ." << " And the base price is " << base_price << " per square feet" << endl;
  total_amount1= width * depth * base_price;
//Print out total without charges.
  cout << "Total amount of rental per month (without deduction and surcharge) is $" << fixed << showpoint << setprecision(2) << total_amount1 << endl;
//Calculation start.
  pop_price = base_price + (100 * (traffic / 100));
  total_amount2 = width * depth * pop_price;//base price increase when popularity is more than 0%
  cout << "Base on popularily of the location, the base price increase to $" << pop_price << " per square feet" << endl;
//comparison months for deduction
  if ( month > 1 && month < 4)
  {
    deduction = total_amount1* 0.05;
  }
  else if (month >= 4)
  {
    deduction = total_amount1* 0.2;
  }
  else 
  {
    deduction = 0;
  }
  cout << "$" << deduction << " deduction" << endl;//let user know dedcution. Also great for debugging
  if (lock_space == 1)
  {
    surcharge = total_amount1 *0.3;
  }
  else if (lock_space == 0)
  {
    surcharge = 0;
  }
cout << "$" << surcharge << " surcharge" << endl;//let user know deduction. Also great for debugging
cout << "Total amount with surcharge and discount is $" << fixed << showpoint << setprecision(2) << total_amount2 - deduction + surcharge << endl;
cout << "................................................................." << endl;
cout << endl;
//Ask if you want to continue the program, loop back to input questions
//Capital Y and N can be accepted as input
cout << "Do you want to continue? (Answer y for Yes, n for No): ";
cin >> rep_val;
if (tolower(rep_val) == 'n' || !rep_val)
{
  rep_pro = false;
}
//reset values to loop back
else if (tolower(rep_val) == 'y')
{
  rep_pro = true;
  width = -1;
  depth = -1;
  month = 13;
  lock_space = 2;
  traffic = -1;
  base_price = -1;
}
      }
      return 0;
}