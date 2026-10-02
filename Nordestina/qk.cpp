#include <iostream>
#include <vector>
#include <algorithm> 
#include <string>

using namespace std;

int main()
{
    int A, X, i, total;
    cin >> A >> X;
    i = 1;
    total = - 1;
    for(; i <= X; i++)
    {
        if((i * A + 1) % X == 0)
        {
            total = (i * A + 1) / X;
            break;
        }
    }
    cout << total << endl;
    

}