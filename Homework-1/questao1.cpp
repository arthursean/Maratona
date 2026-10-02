#include <iostream>
#include <vector>

using namespace std;
int main()
{
    int qnt, queries; 
    cin >> qnt >> queries;
    vector<long long> lista(qnt);
    vector<long long> listaAux(qnt, 0);
    for (int i = 0; i < qnt; i++)
    {
        cin >> lista[i];
        if (i == 0)
        {
            listaAux[i] = lista[i];
        }
        else
        {
            listaAux[i] = listaAux[i - 1] + lista[i];
        }
    }
    while(queries-- > 0)
    {
        int a, b, aux;
        cin >> a >> b;
        if (a == 1) 
        {
            cout << listaAux[b - 1] << endl;
        }
        else 
        {
            cout << listaAux[b - 1] - listaAux[a - 2] << endl;
        }
    }
}