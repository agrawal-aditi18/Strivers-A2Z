//T/C- 2^n * n
//S/C- n
#include <iostream>
#include <vector>
using namespace std;

int f(int ind, int n, int sum,int k, int arr[]){
    if(ind >= n ){
        if(sum==k) return 1;
        
        else return 0;
    }
    sum+=arr[ind];
    int l=f(ind+1, n, sum, k, arr); //take 
    sum-=arr[ind]; 
   
   int r=f(ind+1, n, sum, k, arr);//not-take

    return l + r;
}
int main(){
    int arr[] = {1,2,1};
    int n = 3;
    int sum =0, k=2;
    cout << f(0,n,sum,k,arr);
}