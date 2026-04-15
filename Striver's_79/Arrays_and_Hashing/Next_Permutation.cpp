#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void nextPermutation(vector<int>& nums) {
       // 1. identifying break point
        int index = -1;
        int n = nums.size();
        for(int i = n-2; i>=0; i--){
            if(nums[i] < nums[i+1]){
                index = i;
                break;
            }
        }
        if(index == -1){
            reverse(nums.begin(), nums.end());
            return;
        }
        //2. fimd the smallest one to stay close
        for(int i = n-1; i>index; i--){
            if(nums[i]>nums[index])
            {
                swap(nums[i], nums[index]);
                break;
            }
        }
        //3. try to place remaning elements in sorted order
        reverse(nums.begin() + index + 1, nums.end());
        
    }
};

int main() {
    Solution obj;

    vector<int> nums = {2,1,5,4,3,0,0};  

    obj.nextPermutation(nums);

    cout << "Next Permutation: ";
    for(int x : nums){
        cout << x << " ";
    }

    return 0;
}
