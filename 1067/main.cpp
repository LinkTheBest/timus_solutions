#include<iostream>
#include<cstring>

using namespace std;

int main(){
    short n = 0;
    cin>>n;
    char strings[n][80];
    char temp[n][80];
    for(short i = 0; i < n; i++){
        cin >> strings[i];
    }
    for(short i = 0; i < n-1; i++){
        for(short j = i+1; j<i; j++){
            if(strcmp(strings[i],strings[j])>0){
                strcpy(temp[i], strings[i]);
                strcpy(strings[i],strings[j]);
                strcpy(strings[j],temp[i]);
            }
        }
    } 
    cout<<"\n";
    cout<<"Sorted:"<<"\n";
    for(short i = 0; i < n; i++){
        cout << strings[i]<<"\n";
    }
    

}