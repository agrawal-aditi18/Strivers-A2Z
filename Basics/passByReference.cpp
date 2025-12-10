#include <iostream>
using namespace std;

void doSomething(int &num){ // it takes the address, the original num
    cout << num << endl;
    num += 5;
    cout << num << endl;
}
int main(){
    int num = 10;
    doSomething(num);
    cout << num << endl; 
    return 0;
}