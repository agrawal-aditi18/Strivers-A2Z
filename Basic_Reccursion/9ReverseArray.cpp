#include <iostream>
using namespace std;

//Reccursion Using Two Pointers
void f(int l, int r, int arr[]){

    if(l>=r) return;

    swap(arr[l], arr[r]);

    f(l+1, r-1, arr);
}
int main(){
    int arr[] = {2,3,4,5,6};
    f(0,5-1, arr);
    for(int i = 0; i<5; i++){
        cout<<arr[i] <<" ";
    }

}

//Using a single Variable
void f(int i, int n, int arr[]){

    if(i==n/2) return;

    swap(arr[i], arr[n-i-1]);

    f(i+1, n, arr);
}
int main(){
    int arr[] = {2,3,4,5,6};
    f(0,5,arr);
    for(int i = 0; i<5; i++){
        cout<<arr[i] <<" ";
    }

}