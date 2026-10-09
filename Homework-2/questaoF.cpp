#include <bits/stdc++.h>

using namespace std;


bool valido(int i, int j, vector<string> &tabuleiro, vector<int> &rainhasC)
{
    if(tabuleiro[i][j] == '*') return false;
    for(int k = 0; k < i; k++)
    {
        if(rainhasC[k] == j) return false;
    }
    for(int k = 1; i - k >= 0 && j - k >= 0; k++)
    {
        if(rainhasC[i-k] == j - k) return false;
    }
    for (int k = 1; i - k >= 0 && j + k < 8; k++) 
    {
        if (rainhasC[i - k] == j + k) return false;
    }
    return true;
}
void solve(vector<string> &tabuleiro, vector<int> &rainhasC, int &qnt, int i)
{
    if(i == 8)
    {
        qnt++;
        return;
    }
    for(int j = 0; j < 8; j++)
    {
        if(valido(i, j, tabuleiro, rainhasC))
        {
            rainhasC[i] = j;
            solve(tabuleiro, rainhasC, qnt, i + 1);
        }
    }
}
int main()
{
    vector<string> tabuleiro(8);
    vector<int> rainhasC(8, -1);   
    for(int i = 0; i < 8; i++)
    {
        cin >> tabuleiro[i];
    }
    int qnt = 0;
    solve(tabuleiro, rainhasC, qnt, 0);
    cout << qnt << endl;
}