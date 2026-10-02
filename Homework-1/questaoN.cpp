#include <iostream>
#include <vector>
#include <algorithm> 
#include <string>
#include <deque> 
using namespace std;
 

int sortP(string &a, string &b)
{
    return (a + b) < (b + a);
}
int main()
{
    int qnt; 
    cin >> qnt;
    vector<string> lista(qnt);
    for(int i = 0; i < qnt; i++)
    {
        cin >> lista[i];
    }
    sort(lista.begin(), lista.end(), sortP);
    string aux = "";
    for(int i = 0; i < qnt; i++)
    {
       aux += lista[i];
    }
    cout << aux;  
}