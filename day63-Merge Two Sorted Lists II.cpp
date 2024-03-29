// Problem - https://www.interviewbit.com/problems/merge-two-sorted-lists-ii/
----------------------------------------------------------------
void Solution::merge(vector<int> &A, vector<int> &B) {
    int m = A.size(), n = B.size();
    A.resize(m+n);
    int i = m-1, j = n-1, k = m+n-1;
    
    while(i >= 0 && j >= 0) {
        if(A[i] > B[j]) {
            A[k] = A[i];
            i--;
            k--;
        } else {
            A[k] = B[j];
            j--;
            k--;
        }
    }
    
    while(j >= 0) {
        A[k] = B[j];
        j--;
        k--;
    }
}
