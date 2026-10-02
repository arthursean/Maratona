#include <iostream>
#include <vector>
#include <algorithm> 
#include <string>


using namespace std;

int main()
{
    vector<string> cadeia = {"010", "110", "111", "101", "100", "000", "001", "011"};
    string caracteres;
    int x;
    cin >> caracteres;

    for(int i = 0; i < 8; i++)
    {
        if(caracteres == cadeia[i])
        {
            x = i;
        }
    }
    int cont = 0;
    int i = x;
    cout << cadeia[x] << endl;
    while(1)
    {
        cont++;
        if(cont == 8)
        {
            cout << cadeia[x] << endl;
            break;
        }
        i = (i + 1) % 8;
        cout << cadeia[i] << endl;
    }
}