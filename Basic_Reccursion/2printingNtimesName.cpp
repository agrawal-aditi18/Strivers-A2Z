//T/C: O(N) -- as function calls n times
//S/C: o(n) -- internal memory uses stack space to store func calling

#include <iostream>
using namespace std;
void f(int i, int n){

    if(i > n) return;
    cout << "aditi" << endl;

    f(i+1, n);
}

int main(){
    int n;
    cin >> n;

    f(1,n);
}