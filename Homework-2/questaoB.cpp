#include <bits/stdc++.h>

using namespace std;


bool valido(vector<vector<int>>  sudoku, int i, int j, int num)
{
    for(int k = 0; k < 9; k++)
    {
        if(sudoku[i][k] == num) return false;
        if(sudoku[k][j] == num) return false;
        int nL = 3 * (i / 3) + k / 3;
        int nC = 3 * (j / 3) + k % 3;
        if (sudoku[nL][nC] == num) return false;
    }
    return true;
}
bool solve(vector<vector<int>> &sudoku)
{
    for(int i = 0; i < 9; i++)
    {
        for(int j = 0; j < 9; j++)
        {
            if(sudoku[i][j] == 0)
            {
                for(int num = 1; num <= 9; num++)
                {
                    if (valido(sudoku, i, j, num))
                    {
                        sudoku[i][j] = num;
                        if (solve(sudoku)) return true;
                        sudoku[i][j] = 0;
                    }
                }
                return false;
            }
        }
    }
    return true;
}
void printar(vector<vector<int>> &sudoku)
{
    for(int i = 0; i < 9; i++)
    {
        for(int j = 0; j < 9; j++)
        {
            j == 8 ? cout << sudoku[i][j] : cout << sudoku[i][j] << " ";
        }
        cout << endl;
    }
}
int main()
{
    int qnt;
    cin >> qnt;
    for (int i = 0; i < qnt; i++)
    {
        vector<vector<int>> sudoku(9, vector<int> (9));
        for(int i = 0; i < 9; i++)
        {
            for(int j = 0; j < 9; j++)
            {
                cin >> sudoku[i][j];
            }
        }
        if (solve(sudoku)) 
        {
            printar(sudoku);
        } 
        else 
        {
            cout << "No solution" << endl;
        } 
    }
   
}