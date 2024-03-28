// Problem - https://www.interviewbit.com/problems/4-sum/
-------------------------------------------------------------------
vector<vector<int> > Solution::fourSum(vector<int> &A, int B) {
    int n = A.size();
    vector<vector<int>> res;
    
    sort(A.begin(), A.end());
    
    for(int i=0; i<n; i++) {
        if(i > 0 && A[i] == A[i-1]) continue;
        
        for(int j=i+1; j<n; j++) {
            if(j > i+1 && A[j] == A[j-1]) continue;
            
            int target = B - (A[i] + A[j]);
            
            for(int s = j+1, e = n-1; s < e;) {
    
                int sum = A[s] + A[e];
                
                if(sum == target) { 
                    res.push_back({A[i], A[j], A[s], A[e]});
                    int temp = A[s];
                    while(s < e && temp == A[s]) s++;
                    temp = A[e];
                    while(s < e && temp == A[e]) e--;
                }
                else if(sum < target) s++;
                else e--;
            }
        }
    }
    return res;
}
