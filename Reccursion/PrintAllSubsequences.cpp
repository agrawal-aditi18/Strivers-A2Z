//T/C- 2^n * n
//S/C- n
#include <iostream>
#include <vector>
using namespace std;

void f(int ind, int n, vector<int> &ans, int arr[]){
    if(ind >= n){
        for(auto it: ans){
            cout << it;
        }
        if(ans.size() == 0) cout << "{}";
        cout<<endl;
        return;
    }
    ans.push_back(arr[ind]);
    f(ind+1, n, ans, arr); //take 
    ans.pop_back(); 
    f(ind+1, n, ans, arr);//not-take
}
int main(){
    int arr[] = {3,1,2};
    int n = 3;
    vector<int>ans;
    f(0,n,ans,arr);
}