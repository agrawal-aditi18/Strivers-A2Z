        #include <iostream>
        #include <vector>
        #include <bits/stdc++.h>
        #include <algorithm>
        using namespace std;
        class Solution {
        public:
        vector<vector<int>> threeSum(vector<int>& nums) {
            //Optimal approach
            vector<vector<int>>ans;
            int n = nums.size();
            sort(nums.begin(), nums.end());
        for(int i = 0; i<n; i++){
            //starting from unique i value from starting and also when we got any pair
            if(i>0 && nums[i]==nums[i-1]) continue; 

            int j = i+1;
            int k = n-1;
            while(j<k){
                int sum = nums[i] + nums[j] + nums[k];
                if(sum < 0)
                {
                    //becz we want to increase the sum
                    j++;
                }
                else if ( sum > 0)
                {
                    //becz we want to decrease the sum
                    k--;
                }
                else{
                    vector<int>temp= {nums[i], nums[j], nums[k]};
                    ans.push_back(temp);
                    j++;
                    k--;
                    //we will not pick the duplicate element again to avoid redundant pair
                    while(j<k && nums[j] == nums[j-1]) j++;
                    while(j<k && nums[k] == nums[k+1]) k--;

                }
            }
        }
        return ans;

        //Better Approach can give TLE
        set<int>st1;
        set<vector<int>>st2;
        int n = nums.size();
        for(int i = 0; i<n; i++){
            st1.clear();
            for(int j = i+1; j<n; j++){
                int k = -(nums[i] + nums[j]);
               if(st1.find(k) != st1.end())
               {
                vector<int>temp = {nums[i], nums[j], k};
                sort(temp.begin(), temp.end());
                st2.insert(temp);
               }
               st1.insert(nums[j]);
            }
        }
        vector<vector<int>>ans(st2.begin(), st2.end());
        return ans;
    }
};

        int main() {
        Solution obj;

    vector<int> nums = {-2, -2, -2, -1, -1, -1, 0, 0, 0, 2, 2, 2, 2};

    vector<vector<int>> result = obj.threeSum(nums);

    cout << "Triplets are:\n";
    for(auto &vec : result){
        cout << "[ ";
        for(auto &x : vec){
            cout << x << " ";
        }
        cout << "]\n";
    }

    return 0;
}