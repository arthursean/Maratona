#include <iostream>
#include <vector>
#include <algorithm> 
#include <string>
#include <deque> 
//DEQUE ACEITA PUSH FRONT E POP FRONT
using namespace std;
 
int main()
{
    deque<char> fila;
    long long qnt;
    cin >> qnt;
    long long contA = 0;
    long long contB = 0;
    long long qntBanter = 0; 
    for(long long i = 0; i < qnt; i++)
    {
        long long op;
        cin >> op;
        if(op < 3)
        {
            char time; 
            cin >> time;
            if(op == 1)
            {
                fila.push_back(time);
                if(time == 'B')
                {
                    contB++;
                    qntBanter += contA;
                }
                else
                {
                    contA++;
                }
            }
            else
            {
                fila.push_front(time);
                if(time == 'B')
                {
                    contB++;
                }
                else
                {
                    qntBanter += contB;
                    contA++;
                }
            }
        }
        else if(op == 3)
        {
            char time = fila.back();
            fila.pop_back();
            if(time == 'B')
            {
                qntBanter -= contA;
                contB--;
            }
            else
            {
                contA--;
            }
        }
        else
        {
            char time = fila.front();
            fila.pop_front();
            if(time == 'B')
            {
                contB--;
            }
            else
            {
                qntBanter -= contB;
                contA--;
            }
        }
        cout << qntBanter << endl;
    }
 
}