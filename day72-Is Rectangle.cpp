// Problem - https://www.interviewbit.com/problems/is-rectangle/
----------------------------------------------------------------
int Solution::solve(int A, int B, int C, int D) {
    if((A + B == C + D) && (A == C || A == D)) {
        return 1;
    }
    else if((A + C == B + D) && (A == B || A == D)) {
        return 1;
    } 
    else {
        return 0;
    }
}
