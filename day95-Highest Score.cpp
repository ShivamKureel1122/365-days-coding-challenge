// Problem - https://www.interviewbit.com/problems/highest-score/
___________________________________________________________________
// TC -> O(2n), SC -> O(2n)
int Solution::highestScore(vector<vector<string> > &A) {
    unordered_map<string, int> mp1, mp2;
    int ans = 0;
    
    for(auto &s: A) {
        mp1[s[0]] += stoi(s[1]);
        mp2[s[0]]++;
    }
    
    for(auto &it: mp1) {
        ans = max(ans, (it.second / mp2[it.first]));
    }
    
    return ans;
}
