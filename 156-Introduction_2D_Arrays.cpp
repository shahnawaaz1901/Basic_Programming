/*
 2D Array is Like Matrix Which We Studied in Our 12th Class.
 Where Row and Column is Exist
 Rows And Column Start From Index 0 and Till RowSize - 1 and ColumnSize - 1
 Like 1D Array You Can Not Declare 2D Array with input[m][n] size in variable
*/
#include<iostream>
using namespace std;
int main(){
    //Declaration of 2D Array
    // data_type 2D_Array_Name[Number of Rows][Number of Columns]
    int arr[100][100];
    int n;                      // Number of Rows
    cin >> n;
    int m;                      // Number of Columns
    cin >> m;
    // Take Input in 2D Array
    for(int i = 0; i < n;i++){              // n Represents Number of Rows
        for(int j = 0; j < m;j++){          // m Represents Number of Columns
            cin >> arr[i][j];
        }
    }

    // Print 2D Array in Row Wise
    for(int i = 0; i < n;i++){              // n Represents Number of Rows
        for(int j = 0; j < m;j++){          // m Represents Number of Columns
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    
    // Print 2D Array in Column Wise
    for(int j = 0; j < m;j++){          // m Represents Number of Columns
        for(int i = 0; i < n;i++){              // n Represents Number of Rows
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    
}