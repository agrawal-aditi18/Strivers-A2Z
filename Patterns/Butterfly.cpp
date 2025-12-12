#include <iostream>
using namespace std;

void Image(){
       for(int i = 2 ; i<=5; i++){
        //star
        for(int j = 1; j<=5-i+1; j++){
            cout << "*";
        }
        //space
        for(int k = 1; k<=2*i-2; k++){
            cout << " ";
        }
        
        //star
        for(int j = 1; j<=5-i+1; j++){
            cout << "*";
        }
        cout << endl;
    }
}
void mirrorImage(){
    for(int i = 1; i<=5; i++){
        for(int j = 1; j<=i; j++){
            cout << "*";
        }
        for(int k = 1; k<=(2*5)-(2*i); k++){
            cout << " ";
        }
        for(int j = i; j>=1; j--){
            cout << "*";
        }
        cout << endl;
    }
}

int main(){
    mirrorImage();
    Image();
 
    return 0;
}