#include <iostream>
#include <vector>
#include <algorithm> 

using namespace std;
 
int main()
{
    long long qnt;
    cin >> qnt;
    vector<long long> lista(qnt);
    for (long long i = 0; i < qnt; i++)
    {
        cin >> lista[i];
    }
    long long cont = 0; 
    for(long long i = 0; i < qnt; i++)
    {
        for(long long j = i; j < qnt; j++)
        {
            cont += *min_element(lista.begin() + i, lista.begin() + j + 1);
        }
    }
    cout << cont << endl;
}