#include <iostream>
using namespace std;
int main()
{
    int r, c;
    cin >> r >> c;
    int mat[r][c];
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cin >> mat[i][j];
        }
    }

    // for (int i = 0; i < r; i++)
    // {
    //     for (int j = 0; j < c; j++)
    //     {
    //         cout << mat[i][j] << " ";
    //     }
    //     cout << endl;
    // }

    int row = sizeof(mat) / sizeof(mat[0]) ;
    int col = sizeof(mat[0]) / sizeof(mat[0][0]) ; 
    cout << "row : " << row << endl; 
    cout << "col : " << col << endl;   
}