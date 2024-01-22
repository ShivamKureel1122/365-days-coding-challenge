// Problem - https://www.interviewbit.com/problems/remove-element-from-array/
---------------------------------------------------------------
int Solution::removeElement(vector<int> &A, int B) {
    int n = A.size();
    int index = 0;
    for(int i=0; i<n; i++) {
        if(A[i] != B) 
            A[index++] = A[i];
    } return index;
}
