#include <iostream>
using namespace std;
int main(){
    
    for(int i = 1; i<=5; i++){
        for(char j = 'A' ; j<='A' + 5 - i + 1; j++){
            cout << j << " ";

        }
        cout << endl;
    }
    return 0;
}