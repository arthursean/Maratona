#include <bits/stdc++.h>

using namespace std;

int main()
{
    int qnt;
    cin >> qnt;
    vector <long long> entrada (qnt);
    vector <long long> saida (qnt);
    for(int i = 0; i < qnt; i++)
    {
        cin >> entrada[i] >> saida[i];
    }
    sort(entrada.begin(), entrada.end());
    sort(saida.begin(), saida.end());
    int i = 0;
    int j = 0;
    int atual = 0;
    int maxP = 0;
    while(i < qnt && j < qnt)
    {
        if(entrada[i] < saida[j])
        {
            atual++;
            i++;
        }
        else
        {
            atual--;
            j++;
        }
        if(atual > maxP)
        {
            maxP = atual;
        }
    }
    cout << maxP << endl;
   
}