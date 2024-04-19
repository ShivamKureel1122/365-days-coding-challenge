// Problem - https://www.interviewbit.com/problems/anagrams/
____________________________________________________________________
// TC -> O(n*mlogm), SC -> O(n)
vector<vector<int> > Solution::anagrams(const vector<string> &A) {
    int n = A.size();
    unordered_map<string, vector<int>> mp;
    
    for(int i=0; i<n; i++) {
        string key = A[i];
        sort(key.begin(), key.end());
        
        if(mp.find(key) == mp.end()) {
            vector<int> idx = {i+1};
            mp.insert({key, idx});
        }
        else {
            mp[key].push_back(i+1);
        }
    }
    
    vector<vector<int>> res;
    for(auto it = mp.begin(); it != mp.end(); it++) {
        res.push_back(it->second);
    }
    
    return res;
}
