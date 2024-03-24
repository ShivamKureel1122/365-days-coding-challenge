// Problem - https://www.interviewbit.com/problems/check-palindrome/
--------------------------------------------
int Solution::solve(string A) {
    unordered_map<char, int> mp;
    int count = 0;
    
    for(auto &s: A) {
        mp[s]++;
    }
    for(auto &it: mp) {
        if(it.second & 1) {
            count++;
            if(count > 1) return 0;
        }
    }
    
    return 1;
}
