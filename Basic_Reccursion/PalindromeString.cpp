/*
T/C & S/C - 0(N/2)
*/

#include <iostream>
using namespace std;

bool f(int i, int n, int arr[]){

    if(i==n/2) return true;
    if(arr[i] != arr[n-i-1]) return false;

    return f(i+1, n, arr);
}
int main(){
    int arr[] = {'m','a','d','a','m'};
    bool a = f(0,5,arr);
    cout << a;

}
