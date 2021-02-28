#include <iostream>
using namespace std;


int main() 
{ 
	int tests, n, k, m, ost, sum;
    cin >> tests;
    while(tests > 0){
		cin >> n >> k;
		m = n/k;
		ost = n%k;
		sum = 0;
		for (int j=0; j<ost; j++){
			n =n-(m+1);
			sum= sum+(n*(m+1));
		}
		for (int j=0; j<(k-ost); j++){
			n =n-m;
			sum= sum+(n*m);
		}
		cout << sum <<endl;
        tests--;
	}
    
    return 0; 
}