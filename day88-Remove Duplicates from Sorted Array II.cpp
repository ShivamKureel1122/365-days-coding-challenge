// Problem - https://www.interviewbit.com/problems/remove-duplicates-from-sorted-array-ii/
-------------------------------------------------------------------------
int Solution::removeDuplicates(vector<int> &A) {
    int n = A.size(), i = 0;
    for(int j=0; j<n; j++) {
        int count = 1;
        
        for(; j < n-1 && A[j] == A[j+1]; j++, count++);
        
        for(int k=0; k < min(2, count); k++, i++) { A[i] = A[j]; }
    }
    return i;
}
