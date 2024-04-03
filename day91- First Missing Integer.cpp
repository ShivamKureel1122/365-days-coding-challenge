// Problem - https://www.interviewbit.com/problems/first-missing-integer/
------------------------------------------------------------------
// TC -> O(3n),  SC -> O(1)
int Solution::firstMissingPositive(vector<int> &A) {
    int n = A.size(), i;
    for(i=0; i<n; i++) {
        if(A[i] <= 0 || A[i] > n) {
            A[i] = n+1;
        }
    }
    
    for(i=0; i<n; i++) {
        int val = abs(A[i]);
        if(val > 0 && val <= n && A[val-1] > 0) {
            A[val-1] *= -1;
        }
    }
    
    for(i=1; i<=n && A[i-1] < 0; i++);
    
    return i;
}
