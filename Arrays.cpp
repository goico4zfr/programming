//Jesus Zafra
//14th March, 2022

#include <iostream>
using namespace std;

int main(){

  //Integral Variables for Calculations
  double total_bonus;
  int months_bonus = 0;

  //Sales Array Creation
  int num_months = 12;
  double sales[num_months];

  //Months Array Creation
  string months[12] = {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};

  //For Loop
  for(int i=0; i<=11; i++){
    //Output Month
    cout << months[i] << ": $";
    //Input Sales
    cin >> sales[i];

    //If Statement
    if(sales[i] >= 30000){
      //Output Bonus Qualification
      cout << "   ***Sales in " << months[i] << " qualify for a bonus!***" << endl;
      //Calcuate Total Months of Bonus
      months_bonus = months_bonus + 1;
    }
  }

  //Arithmetic for Total Bonus
  total_bonus = months_bonus * (25 /*employees*/ * 50 /*dollars*/);
  //Output Total Bonus
  cout << "For " << months_bonus << " months, the sales were of at at least $30,000. This translates into a total yearly bonus of $" << total_bonus << " to employees.";
}
