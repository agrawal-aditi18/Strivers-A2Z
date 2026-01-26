#include <iostream>
using namespace std;

//Paramterized Way - Where you want paramters to do the work.  

void f(int i, int sum){

    if(i < 1){
        cout << sum;
        return;
    }

    f(i-1, sum+i);  
}
int main(){
    f(3,0);
}

//Functional Way - Where problems is divided into smaller parts
int f(int n){

    if(n == 0){
        return 0;
    }

    return n + f(n-1);  
}
int main(){
   cout << f(3);
}

