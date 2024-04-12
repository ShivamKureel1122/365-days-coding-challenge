// Problem - https://www.interviewbit.com/problems/min-steps-in-infinite-grid/
________________________________________________________________
// TC -> O(n), SC -> O(1)
int Solution::coverPoints(vector<int> &A, vector<int> &B) {
    int n = A.size();
    int steps = 0;
    
    for(int i=1; i<n; i++) {
        int x = abs(A[i] - A[i-1]);
        int y = abs(B[i] - B[i-1]);
        steps += max(x, y);
    }
    
    return steps;
}
