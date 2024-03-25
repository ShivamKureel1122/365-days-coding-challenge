// Problem - https://www.interviewbit.com/problems/counting-triangles/
-----------------------------------------------------------------------
int Solution::nTriang(vector<int> &A) {
    int n = A.size(), count = 0;
    const int M = 1e9 + 7;
    sort(A.begin(), A.end(), [] (int a, int b) { return a > b; });
    
    for(int i=0; i<n-1; i++) {
        for(int j = i+1, k = n-1; j < k;) {
            if(A[j] + A[k] > A[i]) {
                count = (count + (k-j)) % M;
                j++;
            }
            else k--;
        }
    }
    
    return count;
}
