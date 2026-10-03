#include <iostream>
#include <vector>
#include <map>
#include <algorithm> 

using namespace std;


int main() {
    ios_base::sync_with_stdio(0); 
    cin.tie(0);
    long long qnt, alvo, qntSub, prefSum;
    cin >> qnt >> alvo;
    qntSub = 0;
    prefSum = 0;
    map<long long, int> qntSoma;
    qntSoma[0] = 1;
    while (qnt-- != 0) {
        long long num; 
        cin >> num;
        prefSum += num;
        qntSub += qntSoma[prefSum - alvo];
        qntSoma[prefSum]++;
    }
    cout << qntSub << "\n";
}