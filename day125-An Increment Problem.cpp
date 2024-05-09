// Problem - https://www.interviewbit.com/problems/an-increment-problem/
__________________________________________________________________________
// TC -> O(N), SC -> O(N)
vector<int> Solution::solve(vector<int> &A) {
    int n = A.size();
    unordered_map<int, set<int>> mp;
    
    for(int i=0; i<n; i++) {
        //check whether A[i] is present in the map or not
        if(mp.find(A[i]) != mp.end()) {
            //get the index of the first occurence of A[i] from set
            auto idx = *mp[A[i]].begin();
            //increment the first occurence of A[i] by 1
            A[idx]++;
            //erase the first occurence index of A[i] from set as ith element is now A[i]+1 
            mp[A[i]].erase(idx);
            //add new index in the set of key A[i]+1
            mp[A[i]+1].insert(idx);
        }
        //add or insert the index of ith element in the set
        mp[A[i]].insert(i);
    }
    
    return A; 
}
