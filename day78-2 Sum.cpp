// Problem - https://www.interviewbit.com/problems/2-sum/
-------------------------------------------------------------
vector<int> Solution::twoSum(const vector<int> &A, int B) {
    unordered_map<int, int> mp;
    int n = A.size();
    
    for(int i=0; i<n; i++) {
        int diff = B - A[i];
        auto it = mp.find(diff);
        
        if(it != mp.end()) {
            return {it->second + 1, i + 1};
        }
        if(mp.find(A[i]) == mp.end()) {
            mp[A[i]] = i;
        }
    }
    return {};
}
