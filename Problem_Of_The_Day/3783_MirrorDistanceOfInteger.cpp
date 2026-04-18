#include <bits/stdc++.h>
using namespace std;
//T.C : O(log(n)), for reversing
//S.C : O(1)
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
    int mirrorDistance(int n) {
        int result = abs(n - getReverse(n));
        return result;
    }
};

int main(){
    Solution sol;
    int n = 25;
    int ans = sol.mirrorDistance(n);
    cout << ans;
}