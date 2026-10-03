#include <iostream>
#include <algorithm> 
#include <queue>
#include <vector>
#include <string>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long qnt, qntTotal, vida;
    cin >> qnt;
    qntTotal = 0;
    vector<long long> pocoes(qnt);
    vida = 0;
    priority_queue<int, vector<int>, greater<int>> pocoesRuins;
    for(long long i = 0; i < qnt; i++)
    {
        cin >> pocoes[i];
    }
    for(long long i = 0; i < qnt; i++)
    {
        vida += pocoes[i];
        qntTotal++;
        if(pocoes[i] < 0)
        {
            pocoesRuins.push(pocoes[i]);
        }
        if(vida < 0)
        {
            vida -= pocoesRuins.top();
            pocoesRuins.pop();
            qntTotal--;
        }

    }
    cout << qntTotal << endl;
}
