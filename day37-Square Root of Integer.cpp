// Problem - https://www.interviewbit.com/problems/square-root-of-integer/
-----------------------------------------------------
// recursive approach
int squareRoot(int l, int h, int a) {
    if(l <= h) {
        long long mid = (l + h) / 2;
        if(mid * mid == a) 
            return mid;
        else if(mid * mid < a) 
            return squareRoot(mid+1, h, a);
        else 
            return squareRoot(l, mid-1, a);
    }
    return h;
}
int Solution::sqrt(int A) {
    return squareRoot(0, A, A);
    
    // iterative approach
    /* int l = 0, h = A;
    while(l <= h) {
        long long mid = (l + h) / 2;
        if(mid * mid == A) return mid;
        else if(mid * mid > A) h = mid - 1;
        else l = mid + 1;
    } 
    return h; */
}
