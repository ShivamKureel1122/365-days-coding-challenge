// Problem - https://www.interviewbit.com/problems/roman-to-integer/
---------------------------------------------------------------------
int Solution::romanToInt(string A) {
    int n = A.size(), ans = 0, i;
    unordered_map<char, int> mp = {
        {'I', 1}, {'V', 5}, {'X', 10}, {'L', 50}, {'C', 100}, {'D', 500}, {'M', 1000}
    };
    
    for(i=0; i<n-1; i++) {
        if(mp[A[i]] >= mp[A[i+1]]) {
            ans += mp[A[i]];
        } else {
            ans -= mp[A[i]];
        }
    }
    ans += mp[A[i]];
    
    return ans;
}
