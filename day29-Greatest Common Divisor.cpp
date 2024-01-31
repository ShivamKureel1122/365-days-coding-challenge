// Problem - https://www.interviewbit.com/problems/greatest-common-divisor/
-----------------------------------------------
int Solution::gcd(int A, int B) {
    // recursive approach
     return (A == 0) ? B : gcd(B % A, A);
    
    // iterative approach
    /* while(A > 0) {
        int rem = B % A;
        B = A;
        A = rem;
    } return B; */
}
