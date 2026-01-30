//T/C- 2^n * n
//S/C- n
#include <iostream>
#include <vector>
using namespace std;

bool f(int ind, int n, int sum,int k, vector<int> &ans, int arr[]){
    if(ind >= n ){
        if(sum==k){
        for(auto it: ans){
            cout << it << " ";
        }
        cout<<endl;
        return true;
        }
        
       else return false;
    }
    ans.push_back(arr[ind]);
    sum+=arr[ind];
    if(f(ind+1, n, sum, k, ans, arr) == true) return true; //take 
    sum-=arr[ind];
    ans.pop_back(); 
   
    if(f(ind+1, n, sum, k, ans, arr) == true) return true;//not-take

    return false;
}
int main(){
    int arr[] = {1,2,1};
    int n = 3;
    int sum =0, k=2;
    vector<int>ans;
    f(0,n,sum,k,ans,arr);
}