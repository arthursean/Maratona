#include <bits/stdc++.h>

using namespace std;

int main()
{
    string normal;
    cin >> normal;
    vector <string> permutacoes;
    int cont = 0;
    sort(normal.begin(), normal.end());
    do 
    {
        permutacoes.push_back(normal);
        cont++;
    } while (next_permutation(normal.begin(), normal.end()));
    cout << cont << endl;
    for(auto& s : permutacoes)
    {
        cout << s << endl;
    }
}