#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxDistance(vector<int>& nums1, vector<int>& nums2) {
        int i = 0;
        int j = 0;
        int m = nums1.size();
        int n = nums2.size();
        int result = 0 ;

        while(i<m && j<n){
            if(nums1[i] > nums2[j]) {
                i++;
            }
            else{
                result = max(result, j-i);
                j++;
            }
        }
        return result;
    }
};

int main() {
    Solution sol;

    vector<int> nums1 = {55,30,5,4,2};
    vector<int> nums2 = {100,20,10,10,5};

    int ans = sol.maxDistance(nums1, nums2);
    cout << "Max Distance: " << ans << endl;

    return 0;
}