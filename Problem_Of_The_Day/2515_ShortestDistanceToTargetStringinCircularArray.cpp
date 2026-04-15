#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int closestTarget(vector<string>& words, string target, int startIndex) {
        
        // ----------- Optimal approach -----------
        int n = words.size();
        int result = INT_MAX;

        for (int i = 0; i < n; ++i) {
            if (words[i] == target) {
                int straightDist  = abs(i - startIndex);
                int circularDist  = n - straightDist;
                //approach: calculating the distance from forward too and from backward too for the same index element

                result = min({result, straightDist, circularDist});
            }
        }
        return result == INT_MAX ? -1 : result;


        // ----------- Another approach -----------

        int ans = INT_MAX;
        int flag = 0;

        int i = startIndex;
        for(int step = 0; step < n; step++){
            if(words[i] == target){
                flag = 1;
                ans = min(ans, step);
                //using step as count
            }
            i = (i + 1) % n;
        }

        int flag2 = 0;
        i = startIndex;
        for(int step = 0; step < n; step++){
            if(words[i] == target){
                flag2 = 1;
                ans = min(ans, step);
            }
            i = (i - 1 + n) % n;
        }

        if(flag == 0 && flag2 == 0) return -1;

        return ans;
    }
};

int main() {
    Solution obj;

    vector<string> words = {"hello", "i", "am", "leetcode", "hello"};
    string target = "hello";
    int startIndex = 1;

    int result = obj.closestTarget(words, target, startIndex);

    cout << "Closest distance: " << result << endl;

    return 0;
}
