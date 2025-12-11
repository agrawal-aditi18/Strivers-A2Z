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
        for (int j = 1; j < 5 - i + 1; j++)
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

//OR

#include <iostream>
using namespace std;

int main(){
   for(int i =1 ; i<=2*5-1; i++){
    int stars = i;
    if(i>5) stars = 2*5-i;
    for(int j = 1; j<=stars; j++){
        cout << "*";
    }
    cout << endl;
}
}
