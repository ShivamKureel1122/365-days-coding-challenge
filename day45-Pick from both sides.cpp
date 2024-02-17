// Problem - https://www.interviewbit.com/problems/pick-from-both-sides/
-------------------------------------------------------
int Solution::solve(vector<int> &A, int b) {
    int sum = 0; 
    for(int i=0; i<b; i++) {
        sum += A[i]; 
    }
    int ans = sum; 
    int x = A.size()-1; 
    for(int i=b-1; i>=0; i--) {
        sum -= A[i]; 
        sum += A[x--]; 
        ans = max(ans,sum); 
    }
    return ans; 
}
