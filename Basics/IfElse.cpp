#include <iostream>
using namespace std;
int main(){
    int age;
    cout << "Enter you age: ";
    cin >> age;

    if(age >=18){
        if(age > 57 )
        cout << "Retirement time.";
        else if(age >= 55)
        cout << "Eligible for job, but retirement soon.";
        else
        cout << "Eligible for job";
    }
    else{
        cout << "Not eligible for job.";
    }
    return 0;
}