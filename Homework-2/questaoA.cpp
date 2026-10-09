#include <bits/stdc++.h>

using namespace std;

bool testar(long long qntM, long long qntP, vector <long long> &maquinas, long long media)
{
    for(long long i = 0; i < qntM; i++)
    {
        qntP -= media/maquinas[i];
        if(qntP <= 0)
        {
            return true;
        }
    }
    return false;
}
long long solve(long long qntM, long long qntP, vector <long long>& maquinas)
{
    long long min = 1;
    long long maximo = 1e18;
    long long resposta = 0;
    while(min <= maximo)
    {
        long long media = (min + maximo)/2;
        if(testar(qntM, qntP, maquinas, media))
        {
            maximo = media - 1;
            resposta = media;
        }
        else
        {
            min = media + 1;
        }
    }
    return resposta;
}
int main()
{
    long long qntM, qntP;
    cin >> qntM >> qntP;
    vector <long long> maquinas(qntM);
    for(long long i = 0; i < qntM; i++)
    {
        cin >> maquinas[i];
    }
    cout << solve(qntM, qntP, maquinas) << endl;

}