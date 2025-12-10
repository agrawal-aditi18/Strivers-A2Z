#include <iostream>
using namespace std;

void doSomething(int num){  // this function took the copy of num not original one.
    cout << num << endl;
    num += 5;
    cout << num << endl;
}
int main(){
    int num = 10;
    doSomething(num);
    cout << num << endl; // original one stays same:)
    return 0;
}
