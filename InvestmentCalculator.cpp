/*
Jesus Zafra
31st January, 2022

*/

#include <iostream>
#include <cctype>
#include <cmath>
using namespace std;

//Function Creation
double calc_return(double& a, int& n, double& p, double& i);
double calc_investment(double& a, int& n, double& p, double& i);
void validation(double& a, int& n, double& p, double& i, int& calc_choice);

//Main Function
int main(){
  //Double Variables
  double a, p, i;
  //Integral Variables
  int n, calc_choice;

  //Validation Function Call
  validation(a, n, p, i, calc_choice);

  //Return Formula Chosen
  if(calc_choice == 1){
    //Call Total Amount Function
    calc_return(a, n, p, i);
    cout << "An investment of $" << p << " for " << n << " years with an anual interest rate of " << i << "% yields a return on investment of $" << a << "." << endl;
  }else{
    //Call Investment Function
    calc_investment(a, n, p, i);
    cout << "To recieve a return on ivnestment of $" << a << " within " << n << " years with an anual interest rate of " << i << "%, $" << p << " must be invested." << endl;
  }

}

//Validation Function
void validation(double& a, int& n, double& p, double& i, int& calc_choice){
  //Print Options
  cout << "   1) Calculate The Return on Investment With 'P' Capital" << endl;
  cout << "   2) Calculate The Capital Needed For 'a' Return on Investment" << endl << endl;
  cout << "What operation would you like to complete?  : ";
  //Input Choice of Calculation
  cin >> calc_choice;

  //Choice Input Validation
  while(calc_choice != 1 && calc_choice != 2){
        cout << "   INVALID, TRY AGAIN : ";
        cin >> calc_choice;
  }

  if(calc_choice == 1){
    cout << "How much money will be invested? : ";
    cin >> p;
    //Input Validator
    while(p <= 0){
          cout << "   INVALID, TRY AGAIN : ";
          cin >> p;
    }

    cout << "For how many years will $" << p << " be invested? : ";
    cin >> n;
    //Input Validator
    while(n <= 0){
          cout << "   INVALID, TRY AGAIN : ";
          cin >> n;
    }

    cout << "What is the anual interest rate? : ";
    cin >> i;
    //Input Validator
    while(i <= 0){
          cout << "   INVALID, TRY AGAIN : ";
          cin >> i;
    }

  }else if(calc_choice == 2){
    cout << "How much money will be returned? : ";
    cin >> a;
    //Input Validator
    while(a <= 0){
          cout << "   INVALID, TRY AGAIN : ";
          cin >> a;
    }

    cout << "In how many years will $" << a << " be invested? : ";
    cin >> n;
    //Input Validator
    while(n <= 0){
          cout << "   INVALID, TRY AGAIN : ";
          cin >> n;
    }

    cout << "What is the anual interest rate? : ";
    cin >> i;
    //Input Validator
    while(i <= 0){
          cout << "   INVALID, TRY AGAIN : ";
          cin >> i;
    }
  }
}

//Total Amount Function
double calc_return(double& a, int& n, double& p, double& i){
  a = p * pow((1+ i), n);

    //Roundoff 'a' (2 d.p)
    a = ((a * 100.00) + 0.5);
    int a_roundoff = a;
    a = (a_roundoff/100.00);

  return a;
}

//Investment Function
double calc_investment(double& a, int& n, double& p, double& i){
  p = (a)/(pow((1 + i), n));

  //Roundoff 'p' (2 d.p)
  p = ((p * 100.00) + 0.5);
  int p_roundoff = p;
  p = (p_roundoff/100.00);

  return p;
}
