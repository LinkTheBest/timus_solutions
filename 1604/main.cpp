#include<iostream>
#include<stdlib.h>
using namespace std;

// int sort(const void * a, const void * b)
// {
//   return ( *(int*)b - *(int*)a );
// }

int main(){
    short counter = 0;
    short max = 0;
    short max_i = 0;
    short sum = 0;
    short type_amount;
    cin >> type_amount;
    int signs[type_amount];

    for(short i = 0; i<type_amount; i++){
        cin >> signs[i];
        sum +=signs[i];
    }

    for(short i = 0; i<type_amount; i++){
        if(max < signs[i]){
            max = signs[i];
            max_i = i+1;

        }

    }

    //qsort(signs, type_amount, sizeof(int), sort);

    for(short i = 0; i<sum; i++){
        for(short j = 0; j<type_amount; j++){ 
            if((signs[j]>i)&(signs[j]!=max)){
                cout<<max_i<< " ";
                cout<<j+1<<" ";
                counter++;
            }else{
                if((signs[j]>i)&(signs[j]==max)){
                    //cout<<max_i<<"";
                }
            }
            

        }
    }

    for(short i = 0; i<sum-counter*2 ;i++){
        cout<<max_i<<" ";
    }
    return 0;
}