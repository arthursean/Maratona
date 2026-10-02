#include <iostream>
#include <algorithm> 
#include <stack>
#include <vector>
#include <string>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long qnt;
    cin >> qnt;
    vector <long long> lista(qnt);
    vector <long long> esq(qnt, 0);
    vector <long long> dir(qnt, 0);
    stack <long long> aux;
    for(long long i = 0; i < qnt; i++)
    {
        cin >> lista[i];
    }
    for(long long i = 0; i < qnt; i++)
    {
        while(!aux.empty() && lista[aux.top()] >= lista[i])
        {
            aux.pop();
        }
        esq[i] = aux.empty() ? i + 1 : i - aux.top();
        aux.push(i);
    }
    while (!aux.empty())
    {
        aux.pop();
    }
    for(long long i = qnt - 1; i >= 0; i--)
    {
        while(!aux.empty() && lista[aux.top()] >= lista[i])
        {
            aux.pop();
        }
        dir[i] = aux.empty() ? qnt -  i : aux.top() - i;
        aux.push(i);
    }
    long long cont = 0;
    for (long long i = 0; i < qnt; i++)
    {
        cont += lista[i] * esq[i] * dir[i];
    }
    cout << cont << endl;
}