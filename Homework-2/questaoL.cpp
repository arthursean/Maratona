#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void solve(vector<pair<long long, int>> &lista, int i, int j, int num)
{
    sort(lista.begin(), lista.end());
    while(i < j)
    {
        if(num < lista[i].first + lista[j].first)
        {
            j--;
        }
        else if(num > lista[i].first + lista[j].first)
        {
            i++;
        }
        else
        {
            cout << lista[i].second + 1<< " " << lista[j].second + 1 << endl;
            return;
        }
    }
    cout << "IMPOSSIBLE" << endl;
}
int main()
{
    int qnt;
    long long num;
    cin >> qnt >> num;
    int i = 0;
    int j = qnt - 1;
    vector<pair<long long, int>>  lista(qnt);
    for(int i = 0; i < qnt; i++)
    {
        cin >> lista[i].first;
        lista[i].second = i;
    }
    solve(lista, i, j, num);
}