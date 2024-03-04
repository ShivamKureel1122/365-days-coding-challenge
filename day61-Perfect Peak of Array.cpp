// Problem - https://www.interviewbit.com/problems/perfect-peak-of-array/
------------------------------------------------------------------
int Solution::perfectPeak(vector<int> &A) {
    int n = A.size(), i;
    vector<int> maxA(n, 0), minA(n, 0);
    maxA[0] = A[0];
    minA[n-1] = A[n-1];
    
    for(i=1; i<n; i++) {
        maxA[i] = max(maxA[i-1], A[i]);
    }
    for(i=n-2; i>=0; i--) {
        minA[i] = min(minA[i+1], A[i]);
    }
    
    for(i=1; i<n-1; i++) {
        if( (A[i] == maxA[i] && A[i] == minA[i]) &&
            (A[i] != maxA[i-1] && A[i] != minA[i+1]) 
        ) {
            return 1;
        }
    }
    
    return 0;
}
