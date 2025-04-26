/*
Javan Smith
Jesus Zafra
29th April, 2022

Kindly note that in line 111 and 118, the path for teading the file and creating a new file should be change
*/

#include<iostream>
#include<fstream> //read and write files
#include <stdlib.h> //font color in console
using namespace std;

//function to check if matrix is surrounded or not
bool find_surround(int mat[][50], int x, int y, int r_number, int c_number) {
    int row, col;
    int iterations = 0;

    //if early row exists for the given position of matrix
    //count the surrounding index
    if (x - 1 >= 0) {
        if (mat[x - 1][y]){
          iterations++;
        }
        if (y - 1 >= 0) {
            if (mat[x - 1][y - 1]){
              iterations++;
            }
        }
        if (y + 1 <= c_number - 1) {
            if (mat[x- 1][y + 1]){
              iterations++;
            }
        }
    }

    //when viewing for the current rows element
    //if a previous column exits count for it if it is surrounding
    if (y - 1 >= 0) {
        if (mat[x][y - 1]){
          iterations++;
        }
    }
    //if next column exists count for it if it is surrounding the current index
    if (y + 1 <= c_number - 1) {
        if (mat[x][y + 1]){
          iterations++;
        }
    }

    //if next row exists for the given cell of matrix
    if (x + 1 <= r_number - 1) {
        if (y - 1 >= 0) {
            if (mat[x+ 1][y - 1]){
              iterations++;
            }
        }
        if (mat[x + 1][y]){
          iterations++;
        }
        if (y + 1 <= c_number - 1) {
            if (mat[x+ 1][y + 1]){
              iterations++;
        }
    }
  }

    if (x == 0 || x == r_number - 1) {
        if (y == 0 || y == c_number - 1){
          return iterations >= 2; // if it is corner case, then return true
        }
        else return iterations >= 4; // else count for border validation
    }

    if (y == 0 || y == c_number - 1) {
        if (x == 0 || x == r_number - 1) return iterations >= 2;
        else return iterations >= 4;
    }
    else return iterations >= 6; // else return true if count is greater than or equal to 6
}

// forms the resulting array
void create_resultant(int mat[][50], int resultant[][50], int r_number, int c_number) {
    int x, y;
    for (x = 0; x < r_number; ++x) {
        for (y = 0; y < c_number; ++y) {
            //if the cell is surrounded as defined
            if (find_surround(mat, x, y, r_number, c_number)){
              system("Color 0A");
              resultant[x][y] = 1;
            } // make this cell as true
            else {
              system("Color 16");
              resultant[x][y] = 0;
            }// else make this cell as false
        }
    }
}

int main ()
{
    //varibales for row, column, row number and column number
    int x, y, row_number, col_number;
    //original matrix and resultant matrix
    int mat[50][50];
    int resultant[50][50];

    //open .txt file
    ifstream fin;
            //the path of .txt file (change to personal)
    fin.open("/Users/jesuszafra/Desktop/Programming Project/input_matrix.txt", ios::in);
    if (!fin) {
        cerr << "Unable to read from file!" << endl;
        return 1;
    }

    //create a new file with resultant matrix
                  //the path of .txt file (change to personal)
    ofstream fout("/Users/jesuszafra/Desktop/resultant_matrix.txt");
    fout << "Resultant Matrix :" << endl;
    fout << endl;

    //input from file
    fin >> row_number;
    fin >> col_number;
    for (x = 0; x < row_number; ++x) {
        for (y = 0; y < col_number; ++y) {
            fin >> mat[x][y];
            }
          }
    fin.close();

    //output to console
    for (x = 0; x < row_number; ++x) {
        for (y = 0; y < col_number; ++y){
            cout << mat[x][y] << " ";
          }
        cout << endl;
    }

    create_resultant(mat, resultant, row_number, col_number);

    cout << endl;

    //forming resultant matrix
    for (x = 0; x < row_number; ++x) {
        for (y = 0; y < col_number; ++y) {
            cout << resultant[x][y] << " ";
            fout << resultant[x][y] << " ";
        }
        cout << endl;
        fout << endl;
    }
    fout.close();

    return 0;
}
