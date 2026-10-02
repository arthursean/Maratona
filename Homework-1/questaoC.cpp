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

    int qnt;
    cin >> qnt;
    vector<int> A(qnt);
    stack<int> B;
    vector<string> caminhos;
    int inicioA = 0;
    int mexer = 1;
    int flag = 1;
    for(int i = qnt - 1; i >= 0; i--)
    {
        cin >> A[i];         
    }
    while(mexer <= qnt)
    {
        if(!B.empty() && B.top() == mexer)
        {
            B.pop();
            caminhos.push_back("B C");
            mexer++;
        }
        else if(inicioA < qnt && A[inicioA] == mexer )
        {
            inicioA++;
            caminhos.push_back("A C");
            mexer++;
        }
        else if(inicioA < qnt)
        {
            B.push(A[inicioA++]);
            caminhos.push_back("A B");
        }
        else
        {
            cout << -1 << endl;
            flag = 0;
            break;
        }
    }
    if(flag)
    {
        cout << caminhos.size() << endl;
        for(auto& palavra : caminhos)
        {
            cout << palavra << endl;
        }
    }
}