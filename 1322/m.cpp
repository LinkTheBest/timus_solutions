#include<stdio.h>
#include<iostream>
#include<algorithm>
#include<string>

using namespace std;

int main(){
    char bukva;
    char my_str[99999];
    //string my_string;
    int str_number = 0;
    int counter = 0;
    //cin>>str_number;
    //int length = my_string.length();
    //int length = my_string.length();

    scanf("%d %s", &str_number, my_str);
    --str_number;
    while(my_str[counter]!=0){
        ++counter;
    }

    // while (cin.get(bukva)) {
    //     if (counter > 0 && (bukva == '\n' || bukva == '\r')) 
    //         break;
    //     else if (isspace(bukva))
    //         continue;
    //     my_str[counter] = bukva;
    //     counter++;
    // }

    string strings[counter];

    for(int j = 0; j<counter; j++){
        for(int i = 0; i<counter; i++){
            strings[i].insert(0, 1, my_str[i]);
        }
        sort(strings, strings + counter);
    }
    sort(strings, strings + counter);
    cout<<strings[str_number];
    return 0;
}