// Problem - https://www.interviewbit.com/problems/occurence-of-each-number/
-------------------------------------------------------------------
vector<int> Solution::findOccurences(vector<int> &A) {
    map<int, int> mp;
    vector<int> ans;
    
    for(int i : A) {
        mp[i]++;
    }
    for(auto it : mp) {
        ans.push_back(it.second);
    }
    return ans;
}
