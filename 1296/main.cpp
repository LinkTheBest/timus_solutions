#include<iostream>

using namespace std;

int main(){
    int n, pi;
    int weight = 0;
    int answer = 0;
    cin >> n;
    while(n>0){
        cin >> pi;
        weight += pi;
        if(weight < 0) weight = 0;
        if(weight > answer) answer  = weight;
        n--;
    }
    cout<< answer<<"\n";
    return 0;
}