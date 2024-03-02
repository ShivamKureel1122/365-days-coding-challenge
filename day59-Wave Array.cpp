// Problem - https://www.interviewbit.com/problems/wave-array/
-----------------------------------------------------------
vector<int> Solution::wave(vector<int> &A) {
    sort(A.begin(), A.end());
    int n = A.size();
    int i = 0, j = 1;
    
    while(j < n) {
        swap(A[i], A[j]);
        i += 2;
        j += 2;
    }
    
    return A;
}
