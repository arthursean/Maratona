#include <iostream>
#include <algorithm> 
#include <vector>
#include <string>
#include <map>
using namespace std;
 

int main()
{
    int qnt, tamanho;
    cin >> qnt >> tamanho;
    vector<int> lista(qnt);
    for (int i = 0; i < qnt; i++)
    {
        cin >> lista[i];
    }
    map<int, int> listaF;
    for(int i = 0; i < tamanho; i++)
    {

        listaF[lista[i]]++;
    }    
    cout << listaF.size() << " ";
    for(int i = tamanho; i < qnt; i++)
    {
        int anterior = lista[i - tamanho];
        listaF[anterior]--;
        if(listaF[anterior] == 0)
        {
            listaF.erase(anterior);
        }
        listaF[lista[i]]++;
        cout << listaF.size() << " ";
        
    }
    cout << endl;
}