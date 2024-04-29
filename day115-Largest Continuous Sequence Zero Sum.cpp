// Problem - https://www.interviewbit.com/problems/largest-continuous-sequence-zero-sum/
______________________________________________________________
// TC-> O(nlogn), SC -> O(n)
vector<int> Solution::lszero(vector<int> &A) {
    int n = A.size();
    int maxSize = 0, pfxSum = 0;
    int start = 0, end = 0;
    unordered_map<int, int> mp;
    vector<int> res;
    mp[0] = -1;
    
    for(int i=0; i<n; i++) {
        pfxSum += A[i];
        
        if(mp.find(pfxSum) != mp.end()) {
            if(maxSize < i - mp[pfxSum]) {
                maxSize = i - mp[pfxSum];
                start = mp[pfxSum];
                end = i;
            }
        } 
        else {
            mp[pfxSum] = i;
        }
    }
    
    for(int i=start+1; i<=end; i++) {
        res.push_back(A[i]);
    }
    
    return res; 
}
