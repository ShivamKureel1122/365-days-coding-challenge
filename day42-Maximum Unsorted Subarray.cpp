// Problem - https://www.interviewbit.com/problems/maximum-unsorted-subarray/
--------------------------------------------------------------
vector<int> Solution::subUnsort(vector<int> &A) {
    int n = A.size();
    int start, end, i, j;
    vector<int> ans;
    
    for(i=0; i<n-1; i++) {
        if(A[i] > A[i+1]) {
            start = i;
            break;
        }
    } 
    
    if(i == n-1) {
        ans.push_back(-1);
        return ans;
    }
    
    for(j=n-1; j>0; j--) {
        if(A[j] < A[j-1]) {
            end = j;
            break;
        }
    }
    
    int Max = INT_MIN, Min = INT_MAX;
    for(i=start; i<=end; i++) {
        Max = max(A[i], Max);
        Min = min(A[i], Min);
    }
    
    for(i=0; i<start; i++) {
        if(A[i] > Min) start = i;
    }
    for(j=n-1; j>end; j--) {
        if(A[j] < Max) end = j;
    } 
    
    ans.push_back(start);
    ans.push_back(end);
    
    return ans;
}
