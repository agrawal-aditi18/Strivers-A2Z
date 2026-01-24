/*
T/C = o(log10N)  because of n=n/10
*/

#include <bits/stdc++.h>
using namespace std;

int main(){
    int x;
    cout << "Enter an integer: ";
    cin >> x;

    int reverseNum = 0, lastdigit;
    while(x > 0){
        
        lastdigit = x % 10;
        if((reverseNum > INT_MAX/10) || (reverseNum < INT_MIN/10)){
                return 0;
            }
        reverseNum = (reverseNum * 10) + lastdigit;
        x = x/10;
    }

    cout << "Reversed number: " << reverseNum << endl;
}