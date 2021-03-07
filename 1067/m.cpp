#include<iostream>
#include<cstring>
#include<string>

using namespace std;

int main(){
    short n = 0;
    cin>>n;
    string *strings = new string[n];
    string temp;
    char buff[80];

    for(short i = 0; i < n; i++){
        cin >> strings[i];
    }

    for (int i=0; i<n-1;i++)
        for (int j=i; j>=0;j--)
            if (strings[j] > strings[j + 1]){
                // поменять местами строки
                temp = strings[j];
                strings[j] = strings[j + 1];
                strings[j + 1] = temp;
      }
    cout<<"\n";
    cout<<"Sorted:"<<"\n";
    for(short i = 0; i < n; i++){
        cout << strings[i]<<"\n";
    }
    delete[] strings;
    

}