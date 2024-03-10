// Problem - https://www.interviewbit.com/problems/rotated-sorted-array-search/
-----------------------------------------------------------------
int Solution::search(const vector<int> &A, int B) {
    int n = A.size();
    int l = 0, h = n-1;
    while(l <= h) {
        int mid = l + ((h-l)/2);
        
        if(A[mid] == B) return mid;
        
        else if(A[0] <= A[mid]) {
            if(A[0] <= B && B < A[mid]) h = mid-1;
            else l = mid+1;
        } 
        
        else {
            if(A[mid] < B && B <= A[n-1]) l = mid+1;
            else h = mid-1;
        }
    }
    return -1;
}
