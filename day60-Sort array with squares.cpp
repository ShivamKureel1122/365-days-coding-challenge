// Problem - https://www.interviewbit.com/problems/sort-array-with-squares/
-----------------------------------------------------------
vector<int> Solution::solve(vector<int> &A) {
    int n = A.size();
    vector<int> ans(n, 0);
    int i = 0, j = n-1, idx = n-1;
    
    while(i <= j) {
        if(abs(A[i]) > A[j]) {
            ans[idx] = A[i] * A[i];
            i++;
        } else {
            ans[idx] = A[j] * A[j];
            j--;
        }
        idx--;
    }
    return ans; 
}
