#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxSubArray(vector<int>& nums, int& ansStart, int& ansEnd ) {
     int maxi = INT_MIN;
        int n = nums.size();
        int sum = 0, start = -1;
        
        
        for(int i = 0; i<n; i++){
            if(sum == 0) start = i; // we always START our subarray with prev sum = 0
            sum += nums[i];
            
            if(sum > maxi) {
                maxi = sum;
                ansStart = start, ansEnd = i; //End index is always the last i to which maxi get change.
            }
            
            if(sum < 0) sum =0; // we don't take the element if it's adding up comes out to be a -ve no. 
        }

        return maxi;   
    }
};

int main(){
    Solution sol;
    vector<int>nums = {-2, -3, 4, -1, -2, 1, 5, -3};
    int ansStart, ansEnd = -1;
    int result = sol.maxSubArray(nums , ansStart, ansEnd);
    cout << result << endl;
    cout << "Maximum Subarray is:-"<<endl;
    for(int i = ansStart; i<=ansEnd; i++){
        cout << nums[i] << " ";
    }
    return 0;
}