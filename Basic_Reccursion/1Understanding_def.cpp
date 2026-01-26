#include <iostream>
using namespace std;
int cnt = 0;

void f(){

    if(cnt == 2) return;  //Base Condition to avoid Stack Overflow

    cout << cnt << endl;
    cnt++;

    f(); // Function calling itself
}

int main(){
    f();
}