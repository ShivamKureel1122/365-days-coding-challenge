// Problem - https://www.interviewbit.com/problems/rotate-matrix/
______________________________________________________
// TC -> O(n*n)/2 + O(n/2),  SC -> O(1)
void Solution::rotate(vector<vector<int> > &A) {
    int n = A.size();
    reverse(A.begin(), A.end());
    for(int i=0; i<n-1; i++) {
        for(int j=i+1; j<n; j++) {
            swap(A[i][j], A[j][i]);
        }
    }
}
