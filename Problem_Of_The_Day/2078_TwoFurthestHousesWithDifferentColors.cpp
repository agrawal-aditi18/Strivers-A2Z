#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxDistance(vector<int>& colors) {
        int n = colors.size();
        int result = INT_MIN;
        for(int i =0; i<n; i++){
            for(int j = i+1; j<n; j++){
                if(colors[i] != colors[j]){
                    result = max(result, abs(i-j));
                }
                else{
                    continue;
                }
            }
        }
        return result;
    }
};

int main(){
    Solution sol;
    vector <int> colors = {1,1,1,6,1,1,1};
    int ans = sol.maxDistance(colors);
    cout << ans << endl;

}