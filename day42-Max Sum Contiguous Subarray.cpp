// Problem - https://www.interviewbit.com/problems/max-sum-contiguous-subarray/
----------------------------------------------------------------
int Solution::maxSubArray(const vector<int> &A) {
    int n = A.size(), sum = 0, ans = INT_MIN;
    
    for(int i=0; i<n; i++) {
        sum += A[i];
        ans = max(sum, ans); 
        if(sum < 0) sum = 0;
    }
    
    /* for(int i=0; i<n; i++) {
        sum = 0;
        for(int j=i; j<n; j++) {
            sum += A[j];
            ans = max(sum, ans);
        }
    } */
    return ans;   
}
