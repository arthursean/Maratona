#include <bits/stdc++.h>

using namespace std;

void solve(int i, int qnt, long long minimo, long long maximo, long long diff, vector <long long> &problemas, long long pMinimo, long long pMaximo, long long &qntPossivel, long long somaProblemas, long long cont)
{
    if(i == qnt)
    {
        if(somaProblemas >= minimo && somaProblemas <=  maximo && pMaximo - pMinimo >= diff && cont >= 2)
        {
            qntPossivel++;
        }
        return;
    }
    solve(i + 1, qnt, minimo, maximo, diff, problemas, min(pMinimo, problemas[i]), max(pMaximo, problemas[i]), qntPossivel, somaProblemas + problemas[i], cont + 1);
    solve(i + 1, qnt, minimo, maximo, diff, problemas, pMinimo, pMaximo, qntPossivel, somaProblemas, cont);
}
int main()
{
    int qnt; 
    long long minimo, maximo, diff;
    cin >> qnt >> minimo >> maximo >> diff;
    vector <long long> problemas (qnt);
    for (int i = 0; i < qnt; i++)
    {
        cin >> problemas[i];
    }
    long long qntPossivel = 0;
    solve(0, qnt, minimo, maximo, diff, problemas, 1e18, -1, qntPossivel, 0, 0);
    cout << qntPossivel << endl;
}