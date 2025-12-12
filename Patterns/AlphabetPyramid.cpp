#include <iostream>
using namespace std;

int main(){
    for(int i = 1 ; i<=5; i++){
        for(int j = 1; j<=5-i; j++){
            cout << " ";
        }
        char ch ='A';
        for(int k = 1; k<=(2*i)-1; k++){
            cout << ch;
            if(k <= ((2*i)-1)/2) ch++;
            else ch--;
        }
        for(int j = 1; j<=5-i; j++){
            cout << " ";
        }
        cout << endl;
    }
    return 0;
}