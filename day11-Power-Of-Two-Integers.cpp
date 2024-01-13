// Problem - https://www.interviewbit.com/problems/power-of-two-integers/
------------------------------------------------
int Solution::isPower(int A) {
    if(A == 1) return 1;
    for(int n = 2; n <= sqrt(A); n++) {
        int p = log(A) / log(n);
        if((p > 1) && (pow(n, p) == A)) 
            return 1;
    } return 0;
}
