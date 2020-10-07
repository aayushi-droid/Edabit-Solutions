#include <iostream>
using namespace std;
int main()
{
    int matrix[10][10], transMatrix[10][10], row, col;
    //Getting the rows from user and storing in row
    cout << "Enter the number of rows: ";
    cin >> row;
    //Getting the columns from user and storing in col
    cout << "Enter the number of columns: ";
    cin >> col;

    /* Asking the user to input the elements of matrix
    * and storing them in the matrix array
    */
    cout << "Enter elements of matrix: " << endl;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cin >> matrix[i][j];
        }
    }
    // Finding the transpose matrix.
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            transMatrix[j][i] = matrix[i][j];
        }
    }
    //Displaying the transpose matrix
    cout << "Transpose of Matrix: " << endl;
    for (int i = 0; i < col; i++)
    {
        for (int j = 0; j < row; j++)
        {
            cout << transMatrix[i][j] << " ";
            /* This is just to format the output
       * so you can see the matrix format
       * in the output transpose matrix.
       */
            if (j == row - 1)
                cout << endl;
        }
    }
    return 0;
}