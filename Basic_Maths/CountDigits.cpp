/*
T/C = o(log10N)  because of n=n/10
*/

#include <bits/stdc++.h>
using namespace std;

int countDigits(int n){
	int cnt = 0;
	while(n>0){
		// int last_digit = n % 10;  //not necessary for calculating count
		cnt++;
		n = n/10;
	}	
	return cnt;
}
int count(int n){
    int cnt = (int) (log10(n)+1);
    return cnt;
}

int main(){
    int n;
    cout << "Enter number: ";
    cin >> n;
    int result1 = countDigits(n);
    int result2 = count(n);
    cout << "The total digits in the number is: " << result1 << endl;
    cout << "The total digits in the number is: " << result2;
}