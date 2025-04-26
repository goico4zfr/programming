// This program demonstrates the use of new and delete to
// dynamically allocate an array from the heap storage.

// Address can be stored in pointers: F01
// ' * ' reference operator

#include <iostream>
#include <cctype>

using namespace std;

int main()
{
    double* numbers;      // pointer to an array of doubles
    int     count=0;        // number of doubles entered
    char    response;

    cout << "How many numbers" << endl;
    cin >> count;
    // Allocate space for an array of 100 doubles

    numbers = new double[count]; // Does nto have to be constant

    // Obtain doubles from the user
    cout << "Do you want to enter a number(Y/N): ";
    cin >> response;

    while (toupper(response) == 'Y')
    {
        cout << endl;
        cout << "Enter a number: ";
        cin >> numbers[count]; // cin >> *(numbers + count);       ----> offset notations
        ++count;              // cin >> numbers[count];            ----> indexed notations

        cout << endl;
        cout << "Do you want to enter a number(Y/N): ";
        cin >> response;
    }

    // Display the numbers in the array
    for (int i = 0; i < count; ++i)
    {
        cout << endl;
        cout << "numbers[" << i << "] = " << numbers[i];
    }
    cout << endl;
     //////////////////////////////
    //// Deallocate the space ////
   //////////////////////////////
    delete[] numbers;

    return 0;
}
