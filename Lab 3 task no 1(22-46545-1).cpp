#include <iostream>
using namespace std;

int main() {
    int row, col, i, j;
    cout << "Enter the number of rows: ";
    cin >> row;
    cout << "Enter the number of column: ";
    cin >> col;

    int Matrix[row][col], TransposeMatrix[col][row];

    cout<<"\nEnter the value of input Matrix: ";
    for (i = 0; i < row; i++)
    {
        for(j = 0; j < col; j++)
        {
            cin >> Matrix[i][j];
        }
    }

    cout<<" Matrix "<<endl;
    for (i = 0; i < row; i++)
    {
        for(j = 0; j < col; j++)
        {
            cout << Matrix[i][j] << " ";
        }
        cout << endl;
    }

    for (i = 0; i < row; i++)
    {
        for(j = 0; j < col; j++)
        {
            TransposeMatrix[j][i] = Matrix[i][j];
        }
    }

    cout<<" Transpose Matrix "<<endl;
    for (i = 0; i < col; i++)
    {
        for(j = 0; j < row; j++)
        {
            cout << TransposeMatrix[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}

