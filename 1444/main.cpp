#include<iostream>

using namespace std;

struct pumpkin{
    short x;
    short y;
    int number;
};

int main(){
    short x = 0;
    short y = 0;
    int counter = 0;
    short amount = 0;
    cin >> amount;
    pumpkin pumpkins[amount];

    for(short i = 0; i<amount; i++){
        cin >> x;
        cin >> y;
        pumpkins[i] = {x, y, i+1};
        // cout<< pumpkins[i].x<<" "<<pumpkins[i].y<<"\n";
    }




    return 0;
}