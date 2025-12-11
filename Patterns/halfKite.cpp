#include <iostream>
using namespace std;

void halfUp(){
    for(int i = 1; i<=5; i++){
        for(int j = 1; j<=i; j++){
            cout << "*" ;
        }
        cout << endl;
    }
}

void halfdown(){
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 0; j < 5 - i + 1; j++)
        {
            cout << "*" ;
        }
        cout << endl;
    }
}

int main(){
    halfUp();
    halfdown();
}