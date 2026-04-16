#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> solveQueries(vector<int>& nums, vector<int>& queries) {
        int n = nums.size();

        unordered_map<int, vector<int>>mp;

        for(int i = 0; i<n; i++){
            mp[nums[i]].push_back(i);
        }
        
        vector<int>result;

        for(int qi: queries){
            int element = nums[qi];
            vector<int>& vec = mp[element]; // we store element 1 occurences from map seperately in vec

            int sz = vec.size();

            //no more occurence of this element
             if(sz == 1){
                result.push_back(-1);
                continue;
             }

             //find postion of qi in vec & to find index of that we do minus
             int pos = lower_bound(begin(vec), end(vec), qi) - begin(vec);
             int res = INT_MAX;

            //Right Neighbour - pos+1
            int right = vec[(pos+1) % sz];
            int d = abs(qi - right);//straught forward distance
            int circularDist = n-d;
            res = min({res, d, circularDist});


            //Left Neighbour - pos-1
            int left = vec[(pos-1+sz) % sz];
            d = abs(qi - left);//straught forward distance
            circularDist = n-d;
            res = min({res, d, circularDist});

            result.push_back(res);
        }
        
        return result;

    }
};

int main() {
    Solution sol;

    vector<int> nums = {1,3,1,4,1,3,2};
    vector<int> queries = {0,3,5};

    vector<int> result = sol.solveQueries(nums, queries);

    for (int x : result) {
        cout << x << " ";
    }

    return 0;
}
