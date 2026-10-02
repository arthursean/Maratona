#include <iostream>
#include <unordered_map> 
#include <algorithm> 
#include <vector>
#include <string>
#include <utility>

using namespace std;
 

int main()
{
    int qntPessoas, qntProblemas, qntIt; 
    cin >> qntPessoas >> qntProblemas >> qntIt;
    unordered_map<string, pair<int, int>> pessoas(qntPessoas);
    unordered_map<string, int> problemas(qntProblemas);
    vector<string> nomes(qntPessoas);
    string opcoes[] = {"AC", "WA"};
    for(int i = 0; i < qntPessoas; i++)
    {
        string aux;
        cin >> aux;
        pessoas[aux].first = 0;
        pessoas[aux].second = 1;
        nomes[i] = aux;
    }
    for(int i = 0; i < qntProblemas; i++)
    {
        string aux;
        int auxNum;
        cin >> aux >> auxNum;
        problemas[aux] = auxNum;
    }  
    for(; qntIt > 0; qntIt--)
    {
        string aux1, aux2, aux3;
        cin >> aux1 >> aux2 >> aux3;
        if(aux3 == "AC")
        {
            pessoas[aux1].first += problemas[aux2];
        }
    }
    for (int i = 0; i < qntPessoas; i++)
    {
        cout << nomes[i] << " " << pessoas[nomes[i]].first << endl;
    }
}