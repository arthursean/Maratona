#include <bits/stdc++.h>

using namespace std;

void solve(int i, long long g1, long long g2, long long &menorD, vector<long long> macas, int qnt)
{
    if(i == qnt)
    {
        if(abs(g2 - g1) < menorD) menorD = abs(g2 - g1);
        return;
    }
    solve(i + 1, g1 + macas[i], g2, menorD, macas, qnt);
    solve(i + 1, g1, g2 + macas[i], menorD, macas, qnt);
}
int main()
{
    int qnt; 
    cin >> qnt;
    vector <long long> macas (qnt);
    for (int i = 0; i < qnt; i++)
    {
        cin >> macas[i];
    }
    long long g1 = 0;
    long long g2 = 0;
    long long menorD = 1e18;
    solve(0, g1, g2, menorD, macas, qnt);
    cout << menorD << endl;
}