/* Program Name: Final Project - Principles of Programming 1
   Program Date: 09/11/2021
   Program Author(s): Jesus Zafara, Leanna Gutierrez, Leanne Palma, & Alex Vernon
   Program Purpose: National Health Insurance System diagnostic and laboratory system */

//Header Files
#include <iostream>
#include <string>
#include <fstream>
#include <vector>

//Standardized Namespace
using namespace std;

//Main Function
int main()
{//Opening Bracket Of Main Function
    //Declaration Of Variable
    string  fullname, nationality, month_name, address, labchoice, diagnosticchoice, diagnostic_name, socialsecuritynum, gender;
    int month, day, year, age,  diagnostictest;
    char answerpregnant, labtest;
    double labtotal, diagnostictotal, total;

    cout << " " <<endl;//Whitespace

    //Output Statement That Prompts User To Enter Their Full Name (String Value)
    cout << " Full Name : ";
    //Getline Function To Read Entire Line Of Text
    getline (cin, fullname);

    //Output Statement That Prompts User To Enter Their Address (String Value)
    cout << " Address : ";
    //Getline Function To Read Entire Line Of Text
    getline (cin, address);

    //Output Statement That Prompts User To Enter Their Date of Birth (Integer Value)
    cout << " Enter Your Date of Birth [mm-dd-yr]: " << endl;
    //Input Statement That Stores User's Input (month, day, year)

    cout << "   Month: ";
    cin >> month;

    cout << "   Day: ";
    cin >> day;

    cout << "   Year: ";
    cin >> year;

    switch (month) {
      case  1:
        month_name = "January";
        break;
      case  2:
        month_name = "February";
        break;
      case  3:
        month_name = "March";
        break;
      case  4:
        month_name = "April";
        break;
      case  5:
        month_name = "May";
        break;
      case  6:
        month_name = "June";
        break;
      case  7:
        month_name = "July";
        break;
      case  8:
        month_name = "August";
        break;
      case  9:
        month_name = "September";
        break;
      case  10:
        month_name = "October";
        break;
      case  11:
        month_name = "November";
        break;
      case  12:
        month_name = "December";
        break;
      }

    while (month > 12 || month < 1){
      cout << "\e[1m" << "    Invalid month, please try again : " << "\e[0m" << endl;

      cout << "   Month: ";
      cin >> month;

      cout << "   Day: ";
      cin >> day;

      cout << "   Year: ";
      cin >> year;

      switch (month) {
        case  1:
          month_name = "January";
          break;
        case  2:
          month_name = "February";
          break;
        case  3:
          month_name = "March";
          break;
        case  4:
          month_name = "April";
          break;
        case  5:
          month_name = "May";
          break;
        case  6:
          month_name = "June";
          break;
        case  7:
          month_name = "July";
          break;
        case  8:
          month_name = "August";
          break;
        case  9:
          month_name = "September";
          break;
        case  10:
          month_name = "October";
          break;
        case  11:
          month_name = "November";
          break;
        case  12:
          month_name = "December";
          break;
        }
      }

    //If user was born in February, only a value between 1 and a 29 may be entered
      if (month == 2){
    //The program will promp the user until a valid date is entered
        while (day >= 30){
          cout << "\e[1m" << "    Invalid day of February, please inter a number between 1 and 29 : " << "\e[0m" << endl;
          cout << "   Day: ";
          cin >> day;
        }
    //For the rest of the 'odd' months, only a value between 1 and 31 may be entered
    } else if (month == 1 || month == 3 || month == 5 || month == 7 || month == 9 || month == 11){
        while (day >= 32){
    //The program will promp the user until a valid date is entered
          cout << "\e[1m" << "    Invalid day of " << month_name << ", please inter a number between 1 and 31 : " << "\e[0m" << endl;
          cout << "   Day: ";
          cin >> day;
        }
      }
    //For the rest of the 'even' months, only a value between 1 and 30 may be entered
      else if (month == 4 || month == 6 || month == 8 || month == 10 || month == 12){
    //The program will promp the user until a valid date is entered
          while (day >= 31){
            cout << "\e[1m" << "    Invalid day of " << month_name << ", please inter a number between 1 and 30 : " << "\e[0m" << endl;
            cout << "   Day: ";
            cin >> day;
          }
        }

    //Output Statement That Prompts User To Enter Their Social Security Number (Integer Value)
    cout << " Social Security Number : ";
    //Input Statement That Stores User's Input (socialsecuritynum)

    cin >> socialsecuritynum;

    while(socialsecuritynum.size() < 9 || socialsecuritynum.size() > 9){
      cout << "\e[1m" << "    Invalid social security number : " << "\e[0m" << endl;
      cout << " Social Security Number : ";
      cin >> socialsecuritynum;
    }

    //Output Statement That Prompts User To Enter Their Nationality (String Value)
    cout << " Nationality : ";
    //Input Statement That Stores User's Input (nationality)
    cin >> nationality;

    //Output Statement That Prompts User To Enter Their Age (Integer Value)
    cout << " Age : ";
    //Input Statement That Stores User's Input (age)
    cin >> age;

    //Output Statement That Prompts User To Enter Their Gender (Character Value)
    cout << " Gender [F/M] : ";
    //Input Statement That Stores User's Input (gender)
    cin >> gender;

    if (gender == "f" || gender == "F"){
      gender = "Female";
    } else if (gender == "m" || gender == "M"){
      gender = "Male";
    } else{
      gender = gender;
    }

    cout << endl;

    if (gender == "Female") {
        //Output Statement That Prompts User To Enter Their Status (Character Value)
        cout << " Are You Currently Pregnant? [Y/N]: ";
        //Input Statement That Stores User's Input (answerpregnant)
        cin >> answerpregnant;
        cout << " \n";//Whitespace
    }

    else {}

    cout << "  -------------------------------------------------"<<endl;
    cout << " |                    Laboratory                   |"<<endl;
    cout << " |_________________________________________________|"<<endl;
    cout << " |                           |                     |"<<endl;
    cout << " |        Test               |        Price        |"<<endl;
    cout << " |___________________________|_____________________|"<<endl;
    cout << " |                           |                     |"<<endl;
    cout << " | [A] Fasting Blood Glucose |        $10.00       |"<<endl;
    cout << " | [B] Platelets             |        $10.00       |"<<endl;
    cout << " | [C] Triglycerides         |        $15.00       |"<<endl;
    cout << " | [D] CBC                   |        $21.00       |"<<endl;
    cout << " | [E] CBC Differential      |        $35.00       |"<<endl;
    cout << " | [F] AbO Grouping          |        $10.00       |"<<endl;
    cout << " | [G] Coronary Risk         |        $12.00       |"<<endl;
    cout << " | [H] Urinalysis            |        $25.00       |"<<endl;
    cout << " | [I] TSH                   |        $45.00       |"<<endl;
    cout << " | [J] STI                   |        $60.00       |"<<endl;
    cout << " | [K] ESR                   |        $30.00       |"<<endl;
    cout << " | [L] Electrolyte Panel     |        $40.00       |"<<endl;
    cout << " | [M] Pap Smear             |        $50.00       |"<<endl;
    cout << " |___________________________|_____________________|"<<endl;
    //Output Statement That Prompts User To Enter The Test of Their Choice (Character Value)
    cout << " Enter The Letter That Matches The Test of Your Choice [Sample Input: A]: ";
    //Input Statement That Stores User's Input (labtest)
    cin >> labtest;
    cout << " \n\n";//Whitespace

    //Expression
    switch (labtest) { //Opening Bracket Of Switch Case
        case 'A' : //Constant
        case 'a': //Constant
            //Code To Be Executed If Expression (User's Input) Is Equal To Constant
            labchoice = " [A] Fasting Blood Glucose";
            labtotal = 10.00;
            break;

        case 'B' : //Constant
        case 'b': //Constant
            //Code To Be Executed If Expression (User's Input) Is Equal To Constant
            labchoice = " [B] Platelets";
            labtotal = 10.00;
            break;

        case 'C' : //Constant
        case 'c': //Constant
            //Code To Be Executed If Expression (User's Input) Is Equal To Constant
            labchoice = " [C] Triglycerides";
            labtotal = 15.00;
            break;

        case 'D' : //Constant
        case 'd': //Constant
            //Code To Be Executed If Expression (User's Input) Is Equal To Constant
            labchoice = " [D] CBC";
            labtotal = 21.00;
            break;

        case 'E' : //Constant
        case 'e': //Constant
            //Code To Be Executed If Expression (User's Input) Is Equal To Constant
            labchoice = " [E] CBC Differential";
            labtotal = 35.00;
            break;

        case 'F' : //Constant
        case 'f': //Constant
            //Code To Be Executed If Expression (User's Input) Is Equal To Constant
            labchoice = " [F] AbO Grouping ";
            labtotal = 10.00;
            break;

        case 'G' : //Constant
        case 'g': //Constant
            //Code To Be Executed If Expression (User's Input) Is Equal To Constant
            labchoice = " [G] Coronary Risk";
            labtotal = 12.00;
            break;

        case 'H' : //Constant
        case 'h': //Constant
            //Code To Be Executed If Expression (User's Input) Is Equal To Constant
            labchoice = " [H] Urinalysis ";
            labtotal = 25.00;
            break;

        case 'I' : //Constant
        case 'i': //Constant
            //Code To Be Executed If Expression (User's Input) Is Equal To Constant
            labchoice = " [I] TSH";
            labtotal = 45.00;
            break;

        case 'J' : //Constant
        case 'j': //Constant
            //Code To Be Executed If Expression (User's Input) Is Equal To Constant
            labchoice = " [J] STI";
            labtotal = 60.00;
            break;

        case 'K' : //Constant
        case 'k': //Constant
            //Code To Be Executed If Expression (User's Input) Is Equal To Constant
            labchoice = " [K] ESR";
            labtotal = 30.00;
            break;

        case 'L' : //Constant
        case 'l': //Constant
            //Code To Be Executed If Expression (User's Input) Is Equal To Constant
            labchoice = " [L] Electrolyte Panel";
            labtotal = 40.00;
            break;

        case 'M' : //Constant
        case 'm': //Constant
            //Code To Be Executed If Expression (User's Input) Is Equal To Constant
            labchoice = " [M] Pap Smear";
            labtotal = 50.00;
            break;

        default:
            //Code To Be Executed If Expression (User's Input) Does Not Match Any Of The Constants Above
            cout << "\e[1m" << "Invalid input, please try again :" << "\e[0m" << endl;
            cin >> labtest;
            break;
    } //Closing Bracket Of Switch Case

    cout << "  ----------------------------------------------------"<<endl;
    cout << " |                      Diagnostics                   |"<<endl;
    cout << " |____________________________________________________|"<<endl;
    cout << " |                              |                     |"<<endl;
    cout << " |        Test                  |        Price        |"<<endl;
    cout << " |______________________________|_____________________|"<<endl;
    cout << " |                              |                     |"<<endl;
    cout << " | [1] Chest X-Ray              |        $45.00       |"<<endl;
    cout << " | [2] Limb X-Ray               |        $30.00       |"<<endl;
    cout << " | [3] Head X-Ray               |        $50.00       |"<<endl;
    cout << " | [4] Thyroid Ultrasound       |        $150.00      |"<<endl;
    cout << " | [5] Pan Abdominal Ultrasound |        $155.00      |"<<endl;
    cout << " | [6] Abdominal Ultrasound     |        $175.00      |"<<endl;
    cout << " | [7] Transabdominal Ultrasound|        $250.00      |"<<endl;
    cout << " | [8] Mammogram                |        $75.00       |"<<endl;
    cout << " |______________________________|_____________________|"<<endl;
    //Output Statement That Prompts User To Enter The Test of Their Choice (Character Value)
    cout << " Enter The Number That Matches The Test of Your Choice [Sample Input: 1]: ";
    //Input Statement That Stores User's Input (diagnostictest)
    cin >> diagnostictest;
    cout << "\n\n";//Whitespace

    //Expression
    switch (diagnostictest) { //Opening Bracket Of Switch Case
        case 1 : //Constant
            //Code To Be Executed If Expression (User's Input) Is Equal To Constant
            diagnosticchoice = " [1] Chest X-Ray";
            diagnostictotal = 45.00;
            diagnostic_name = "\nDiagnostic Test Type: Chest X-Ray: $";
            break;

        case 2 : //Constant
            //Code To Be Executed If Expression (User's Input) Is Equal To Constant
            diagnosticchoice = " [2] Limb X-Ray";
            diagnostictotal = 30.00;
            diagnostic_name = "\nDiagnostic Test Type: Limb X-Ray: $";
            break;

        case 3 : //Constant
            //Code To Be Executed If Expression (User's Input) Is Equal To Constant
            diagnosticchoice = " [3] Head X-Ray";
            diagnostictotal = 50.00;
            diagnostic_name = "\nDiagnostic Test Type: Head X-Ray: $";
            break;

        case 4 : //Constant
            //Code To Be Executed If Expression (User's Input) Is Equal To Constant
            diagnosticchoice = " [4] Thyroid Ultrasound";
            diagnostictotal = 150.00;
            diagnostic_name = "\nDiagnostic Test Type: Thyroid Ultrasound: $";
            break;

        case 5 : //Constant
            //Code To Be Executed If Expression (User's Input) Is Equal To Constant
            diagnosticchoice = " [5] Pan Abdominal Ultrasound";
            diagnostictotal = 155.00;
            diagnostic_name = "\nDiagnostic Test Type: Pan Abdominal Ultrasound: $";
            break;

        case 6 : //Constant
            //Code To Be Executed If Expression (User's Input) Is Equal To Constant
            diagnosticchoice = " [6] Abdominal Ultrasound";
            diagnostictotal= 175.00;
            diagnostic_name = "\nDiagnostic Test Type: Abdominal Ultrasound: $";
            break;

        case 7 : //Constant
            //Code To Be Executed If Expression (User's Input) Is Equal To Constant
            diagnosticchoice = " [7] Transabdominal Ultrasound";
            diagnostictotal = 250.00;
            diagnostic_name = "\nDiagnostic Test Type: Transabdominal Ultrasound: $";
            break;

        case 8 : //Constant
            //Code To Be Executed If Expression (User's Input) Is Equal To Constant
            diagnosticchoice = " [8] Mammogram";
            diagnostictotal = 75.00;
            diagnostic_name = "\nDiagnostic Test Type: Mammogram: $";
            break;

        default:
            //Code To Be Executed If Expression (User's Input) Does Not Match Any Of The Constants Above
            cout << "\e[1m" << "Invalid input, please try again :" << "\e[0m" << endl;
            cin >> diagnostictest;
            break;
    } //Closing Bracket Of Switch Case

    if (age < 5 || age >= 60 || answerpregnant == 'Y' || answerpregnant == 'y') {
        total = 0.00;
        cout << total;
    }

    else if (nationality == "Belizean" || nationality == "belizean" || nationality == "BELIZEAN") {
        //Arithmetic Calculations
        cout << "Calculations" <<endl;
    }

    else {
        total = labtotal + diagnostictotal;
        cout << "Total:" << total<<endl;
    }

    ofstream NHIFile;
    NHIFile.open ("NHITestingFile.txt");
    NHIFile << " ☼☼☼️ A Gateway to Better Health for All ☼☼☼️" <<endl;
    NHIFile << "     Patient Information" <<endl;
    NHIFile << "     Name: " << fullname <<endl;
    NHIFile << "     Address: " << address <<endl;
    NHIFile << "     Date of Birth: " << month << day << year <<endl;
    NHIFile << "     Social Security Number: " << socialsecuritynum << endl;
    NHIFile << "     Nationality: " << nationality <<endl;
    NHIFile << "     Age: " << age <<endl;
    NHIFile << "     Gender: " << gender <<endl;

    if (gender == "f" || gender == "F" && answerpregnant == 'Y' || answerpregnant == 'y') {
        NHIFile << "     Status: Pregnant" <<endl;

    }

    NHIFile << "     Laboratory Test: " << labchoice;
    NHIFile << "     Laboratory Test Price: $" <<labtotal;
    NHIFile << "     Diagnostic Test: " <<diagnosticchoice;
    NHIFile << "     Diagnostic Test Price: $" <<diagnostictotal;

  char choice;
	float userInputNumber;
	float receiptTotal = 0;
	int receiptNum = 1;
	vector<float> totalStorage;

    //welcome message
	cout << "\n☼☼☼️ A Gateway to Better Health for All ☼☼☼️\n" << endl;

	//ask user which action he wants to perform
	cout << "Would you like a receipt? y/n ";
	cin >> choice;

	//as long user input is not n, loop will run
	while(choice != 'n'){

		//checks if users input is valid
		while (choice !=  'y' && choice != 'n'){
			cout << "Invalid Character Entered" << endl;
			cin >> choice;
		}
	//displays patient info
	cout << "________________________\n" << endl;
    cout<<"\nPatient's name: "<<fullname<<endl;
    cout<<"\nPatient's Date of Birth: "<<month_name<<day<<year<<endl;
    cout<<"\nPatient's Social Security Number: "<<socialsecuritynum<<endl;
    cout<<"\nPatient's Nationality: "<<nationality<<endl;
    cout<<"\nPatient's Address: "<<address<<endl;
    cout<<"\nPatient's Age: "<<age<<endl;
    cout<<"\nPatient's Gender: "<<gender<<endl;

    if (gender == "f" || gender == "F") {
        //Output Statement That Prompts User To Enter Their Status (Character Value)
        cout << "\nPregnancy Status: "<<answerpregnant;}


    cout << "\n________________________" << endl;

		//receipt num
		receiptTotal = 0;
		cout << "\nNHI Diagnostic and Laboratory Receipt " << receiptNum << "\n________________________" <<endl;


switch (labtest) {
        case 'A':
        case 'a':
            cout << "\nLab Test Type: Fasting Blood Glucose: $"<<labtotal<<endl;
            break;
        case 'B':
        case 'b':
            cout <<"\nLab Test Type: Platelets: $"<<labtotal<<endl;
            break;
        case 'C':
        case 'c':
            cout <<"\nLab Test Type: Triglycerides: $"<<labtotal<<endl;
            break;
        case 'D':
        case 'd':
            cout <<"\nLab Test Type: CBC: $"<<labtotal<<endl;
            break;
        case 'E':
        case 'e':
            cout <<"\nLab Test Type: CBC Differential: $"<<labtotal<<endl;
            break;
        case 'F':
        case 'f':
            cout <<"\nLab Test Type: AbO Grouping: $"<<labtotal<<endl;
            break;
        case 'G':
        case 'g':
            cout <<"\nLab Test Type: Coronary Risk: $"<<labtotal<<endl;
            break;
        case 'H':
        case 'h':
            cout <<"\nLab Test Type: Urinalysis: $"<<labtotal<<endl;
            break;
        case 'I':
        case 'i':
            cout <<"\nLab Test Type: TSH: $"<<labtotal<<endl;
            break;
        case 'J':
        case 'j':
            cout <<"\nLab Test Type: STI: $"<<labtotal<<endl;
            break;
        case 'K':
        case 'k':
            cout <<"\nLab Test Type: ESR: $"<<labtotal<<endl;
            break;
        case 'L':
        case 'l':
            cout <<"\nLab Test Type: Electrolyte Panel: $"<<labtotal<<endl;
            break;
        case 'M':
        case 'm':
            cout <<"\nLab Test Type: Pap Smear: $"<<labtotal<<endl;
            break;

        default:
           //user doesnt add valid character
            cout << "\e[1m" << "Invalid input, please try again :" << "\e[0m" << endl;
            cin >> labtest;
            break;
    }

switch (diagnostictest) {
        case '1':
            cout <<"\nDiagnostic Test Type: Chest X-Ray: $"<<diagnostictotal<<endl;
            break;
        case '2':
            cout <<"\nDiagnostic Test Type: Limb X-Ray: $"<<diagnostictotal<<endl;
            break;
        case '3':
            cout <<"\nDiagnostic Test Type: Head X-Ray: $"<<diagnostictotal<<endl;
            break;
        case '4':
            cout <<"\nDiagnostic Test Type: Thyroid Ultrasound: $"<<diagnostictotal<<endl;
            break;
        case '5':
            cout <<"\nDiagnostic Test Type: Pan Abdominal Ultrasound: $"<<diagnostictotal<<endl;
            break;
        case '6':
            cout <<"\nDiagnostic Test Type: Abdominal Ultrasound: $"<<diagnostictotal<<endl;
            break;
        case '7':
            cout <<"\nDiagnostic Test Type: Transabdominal Ultrasound: $"<<diagnostictotal<<endl;
            break;
        case '8':
            cout <<"\nDiagnostic Test Type: Mammogram: $"<<diagnostictotal<<endl;
            break;

       default:
           //user doesnt add valid character
            cout << "Invalid Character"<<endl;
            break;
    }

cout << "________________________\n" << endl;

		//Stores Purchase
		totalStorage.push_back(receiptTotal);
		receiptNum++;

		//asks user if they'd like another receipt
		cout << "Would you like to make another purchase? y/n ";
		cin >> choice;
	}

	cout << endl;

	//prints number of receipts
	for(int x=0; x<int(totalStorage.size()); x++){
		int z = (x+1);
		cout << "Receipt "<< z << ": " << totalStorage[x] << endl;
		total += totalStorage[x];
	}

cout << "________________________" << endl;

	//prints sum
	cout << endl << "Total spent (GST Not Included): $" << total;
	cout << endl << "GST: $" << total/100*10;
	cout << endl << "Total spent (GST Included): $" << total+total/100*12.5<<endl;

cout << "________________________\n" << endl;

cout << "\nThank you for choosing us! ☺";

    NHIFile.close();

    return 0;//Main Function Returns Null Value
}//Closing Bracket Of Main Function
