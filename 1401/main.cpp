#include<iostream>
#include<cmath>
using namespace std;

int main(){
    int n, x, y;
    cin >> n;
    cin >> x;
    cin >> y;
    int dim = pow(2,n);
    int arr[dim][dim];

    for(int i = 0; i<dim; i++){
        for(int j = 0; j<dim; j++){
            arr[i][j] =0;
            cout<<arr[i][j];
        }
        cout << "\n";
    }

    return 0;
}