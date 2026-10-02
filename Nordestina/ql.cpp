#include <iostream>
#include <vector>
#include <algorithm> 
#include <string>

using namespace std;

int main()
{
    int num;
    cin >> num;
    if(num % 4 == 0|| (num + 1) % 4 == 0)
    {
        cout << "PAR" << endl;
    }
    else
    {
        cout << "IMPAR" << endl;
    }
}