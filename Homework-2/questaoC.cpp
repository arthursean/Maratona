#include <bits/stdc++.h>

using namespace std;

int main()
{
    int qnt; 
    cin >> qnt;
    vector <long long> alunos (qnt);
    for (int i = 0; i < qnt; i++)
    {
        cin >> alunos[i];
    }
    int i = 0;
    int j = 0;
    long long maxA = 0;
    sort (alunos.begin(), alunos.end());
    while(i < qnt && j < qnt)
    {
        if(alunos[j] - alunos[i] > 5)
        {
            i++;
        }
        else
        {
            j++;
        }
        if(maxA < j - i) maxA = j - i;
    }
    cout << maxA << endl;
}