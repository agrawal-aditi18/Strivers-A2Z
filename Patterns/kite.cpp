#include <iostream>
using namespace std;

void upPyramid(){
    for(int i = 1 ; i<=5; i++){
        for(int j = 1; j<=5-i; j++){
            cout << " ";
        }
        for(int k = 1; k<=(2*i)-1; k++){
            cout << "*";
        }
        for(int j = 1; j<=5-i; j++){
            cout << " ";
        }
        cout << endl;
    }
}
void downPyramid(){
    for(int i = 1 ; i<=5; i++){
        for(int j = 1; j<=i-1; j++){
            cout << " ";
        }
        for(int k = 1; k<=(2*5)-(2*i-1); k++){
            cout << "*";
        }
        for(int j = 1; j<=i-1; j++){
            cout << " ";
        }
        cout << endl;
    }
}
int main(){
    upPyramid();
    downPyramid();

}