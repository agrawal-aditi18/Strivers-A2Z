#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
int getReverse(int n) {
        int rev = 0;

        while(n > 0) {
            int rem = n%10;

            rev = rev*10 + rem;

            n /= 10;
        }

        return rev;
    }
    int minMirrorPairDistance(vector<int>& nums) {
        int n = nums.size();
        unordered_map<int,int>mp; //reversed -> idx
        int result = INT_MAX;

        for(int i = 0; i<n; i++){
            if(mp.count(nums[i])){ // check if the element is present in map or not
                result = min(result, i-mp[nums[i]]); // mp[nums[i]] -> the index which we stored after reverse of element
            }

            mp[getReverse(nums[i])] = i; // reverse the element and store in map with its idx
        }
        return result == INT_MAX ? -1 : result;
    }
};

int main() {
    Solution obj;

    vector<int> nums = {12, 21, 45, 33, 54};

    int ans = obj.minMirrorPairDistance(nums);

    cout << ans << endl;

    return 0;
}