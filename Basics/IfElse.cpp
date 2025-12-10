#include <iostream>
using namespace std;
int main(){
    int marks;
    cout << "Enter you marks: ";
    cin >> marks;

    if(80 <= marks && marks <= 100) cout << "Grade A"<<endl;
    else if(60 <= marks) {cout << "Grade B"<<endl;}
    else if(50 <= marks) cout << "Grade C"<<endl;
    else if(45 <= marks) cout << "Grade D"<<endl;
    else if(25 <= marks) cout << "Grade E"<<endl;
    else
    cout << "Grade F";
    return 0;
}