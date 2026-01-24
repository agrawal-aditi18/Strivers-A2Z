#include<iostream>
using namespace std;

void f(int i, int n){
    if(i>n) return;

    f(i+1, n);
    cout << i << endl; //Last one - Execute First.
}

int main(){
    int n;
    cin >> n;

    f(1,n);
} 