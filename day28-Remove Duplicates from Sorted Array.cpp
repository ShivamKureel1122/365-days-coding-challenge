// Problem - https://www.interviewbit.com/problems/remove-duplicates-from-sorted-array/
--------------------------------------------------------
int Solution::removeDuplicates(vector<int> &A) {
    int n = A.size(), i = 0, j = 1;
    while(j < n) {
        if(A[i] != A[j] && i+1 != j) {
            i++;
            A[i] = A[j];
        }
        else if(A[i] != A[j])  i++;
        
        j++; 
    }
    return i+1;
}
