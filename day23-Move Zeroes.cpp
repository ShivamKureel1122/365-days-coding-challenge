// Problem - https://www.interviewbit.com/problems/move-zeroes/
--------------------------------------------------------
vector<int> Solution::solve(vector<int> &A) {
    int n = A.size(), i = 0, j = 1;
    while(j < n) {
        if(A[i] == 0 && A[j] != 0)  swap(A[i], A[j]);
        if(A[i] != 0)  i++;
        j++;
    } return A;
}
