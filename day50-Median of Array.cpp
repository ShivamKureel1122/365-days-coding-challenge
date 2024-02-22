// Problem - https://www.interviewbit.com/problems/median-of-array/
---------------------------------------------------------------------------------------
double Solution::findMedianSortedArrays(const vector<int> &A, const vector<int> &B) {
    int n1 = A.size(), n2 = B.size();
    if(n1 > n2) return findMedianSortedArrays(B, A);
    int n = n1 + n2;
    int l = 0, h = n1;
    int lNums = (n1 + n2 + 1) / 2;
    
    while(l <= h) {
        int mid1 = (l + h) / 2;
        int mid2 = lNums - mid1;
        int l1 = INT_MIN, l2 = INT_MIN;
        int r1 = INT_MAX, r2 = INT_MAX;
        
        if(mid1-1 >= 0) l1 = A[mid1 - 1];
        if(mid2-1 >= 0) l2 = B[mid2 - 1];
        if(mid1 < n1) r1 = A[mid1];
        if(mid2 < n2) r2 = B[mid2];
        
        if(l1 <= r2 && l2 <= r1) {
            if(n & 1) return max(l1, l2);
            return static_cast<double> (max(l1, l2) + min(r1, r2)) / 2.0;
        }
        else if(l1 > r2) h = mid1 - 1;
        else l = mid1 + 1; 
    }
    
    return 0;
}
