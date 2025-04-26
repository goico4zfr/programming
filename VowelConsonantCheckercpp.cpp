/*Program Name: Assignment (2 if else nested if else Programs)
Program Date: 16/09/2021
Program Authors: Jesus Zafara, Leanna Gutierrez
Program Purpose: The Purpose of This Program is to Determine Whether a Letter is a Vowel or Consonant Based on The User's Input*/

//HEADER FILES
#include <iostream>

using namespace std;

//MAIN FUNCTION
int main(){
  //CHARACTER VARIABLE
  char character;

  cout<<endl;
  cout<<"//"<<endl;
  cout<<""<<endl;
  cout<<" ~ This program will determine wheter a letter entered is a vowel or consonant ~ "<<endl;
  cout<<""<<endl;

  //PROMPT USER TO INPUT CHARACTER/LETTER
  cout<<"Enter a Character/Letter to Determine Whether It is a Vowel or Consonant (ONE [1] Character/Letter ONLY): ";
  cin>>character;

  while (!isalpha(character)) { //THIS FUNCTION CHECKS IF INPUT ENTERED BY THE USER IS NOT A LETTER
    cout<<"Invalid Input"<<endl;
    cout<<"The Input You Have Entered Is Not A Letter And Therefore Cannot Be Processed"<<endl;
    cout<<endl; //WHITESPACE
    //PROMPT USER TO INPUT CHARACTER/LETTER ONCE MORE
    cout<<"Enter a Character/Letter to Determine Whether It is a Vowel or Consonant (ONE [1] Character/Letter ONLY): ";
    cin>>character;
  }

  //CHECK IF CHARACTER ENTERED IS A VOWEL
  if (character == 'a' || character == 'e' || character == 'i' || character == 'o' || character == 'u') {
    cout<<"~ "<<character<<" Is A Vowel! ~"<<endl;
  }

  //FOR ROBUSTNESS PURPOSES: CHECK IF CHARACTER IS A VOWEL (NOTE CAPITAL LETTERS)
  else if (character == 'A' || character == 'E' || character == 'I' || character == 'O' || character == 'U') {
    cout<<"~ "<<character<<" Is A Vowel! ~"<<endl;
  }

  else {
      cout<<"~ "<<character<<" Is A Consonant! ~"<<endl;
  }

  cout<<endl;//WHITESPACE
  cout<<"//"<<endl;
  cout<<""<<endl;

  return 0;
}
