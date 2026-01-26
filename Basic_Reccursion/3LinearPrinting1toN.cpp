#include<iostream>
using namespace std;

void f(int  i ,int n){
if(i>n)
return;

cout << i << endl;


f(i+1, n);
}

int main(){
    int n;
    cout << "Enter till where you want to print: "<< endl;
    cin >> n;

    f(1, n);
}