// Problem - https://www.interviewbit.com/problems/make-equal-elements-array/
---------------------------------------------------
int Solution::solve(vector<int> &A, int B) {
    int max = A[0], min = A[0];
    for(int num : A) {
        if(num > max) max = num;
        if(num < min) min = num;
    }
    return (max-B == min+B) ? 1 : 0;
}
