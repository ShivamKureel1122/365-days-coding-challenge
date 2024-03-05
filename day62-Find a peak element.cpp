// Problem - https://www.interviewbit.com/problems/find-a-peak-element/
---------------------------------------------------------------------------
int Solution::solve(vector<int> &A) {
    int n = A.size(), l = 0, h = n-1;
    if(n == 1) return A[0];
    
    while(l <= h) {
        int mid = (l + h) / 2;
        
        if(mid == 0) {
            if(A[mid] >= A[mid+1]) return A[mid];
            l = mid+1;
        }
        else if(mid == n-1) {
            if(A[mid-1] <= A[mid]) return A[mid];
            h = mid-1;
        }
        else {
            if(A[mid] >= A[mid-1] && A[mid] >= A[mid+1]) return A[mid];
            else if(A[mid+1] > A[mid-1]) l = mid+1;
            else h = mid-1;
        }
    }
    
    return -1; 
}
