#include <bits/stdc++.h>

using namespace std;


bool solve(vector<long long> &lista, int qntSub, long long soma)
{
    int sub = 1;
    long long somaAtual = 0;
    for(int i = 0; i < lista.size(); i++)
    {
        if(lista[i] > soma) return false;
        if(somaAtual + lista[i] > soma)
        {
            sub++;
            somaAtual = lista[i];
        }
        else
        {
            somaAtual += lista[i];
        }
    }
    return sub <= qntSub;
}
int main()
{
    int qnt;
    int qntSub;
    long long minimo = 0;
    long long maximo = 0;
    cin >> qnt >> qntSub;
    vector<long long> lista(qnt); 
    for(int i = 0; i < qnt; i++)
    {
        cin >> lista[i];
        minimo = max(lista[i], minimo);
        maximo += lista[i];
    }
    long long resp = maximo; 
    while(minimo <= maximo)
    {
        long long media = (maximo + minimo)/2;
        if(solve(lista, qntSub, media))
        {
            resp = media;
            maximo = media - 1;
        }
        else
        {
            minimo = media + 1;
        }
    }
    cout << resp << endl;
}