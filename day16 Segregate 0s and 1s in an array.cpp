// Problem - https://www.interviewbit.com/problems/segregate-0s-and-1s-in-an-array/
------------------------------------------------------------
vector<int> Solution::solve(vector<int> &A) {
    int l = 0, r = (int)A.size() - 1;
    while(l != r) {
        if(A[l] == 1 && A[r] == 1) {
            r--;
        } else if(A[l] == 0 && A[r] == 1) {
            l++;
        } else if(A[l] == 1 && A[r] == 0) {
            swap(A[l], A[r]);
            l++;
        } else {
            l++;
        }
    } return A;
}
