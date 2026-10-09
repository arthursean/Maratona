#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long qnt, minutos;
    cin >> qnt >> minutos;
    vector <long long> livro (qnt);
    for(long long i = 0; i < qnt; i++)
    {
        cin >> livro[i];
    }
    long long i = 0;
    int j = 0;
    long long atual = 0;
    long long cont = 0;
    long long maxP = 0;
    while(i < qnt && j < qnt)
    {
        if(atual + livro[j] <= minutos)
        {
            atual += livro[j];
            cont++;
            j++;
        }
        else
        {
            atual -= livro[i];
            cont--;
            i++;
        }
        if(cont > maxP)
        {
            maxP = cont;
        }
    }
    cout << maxP << endl;
   
}