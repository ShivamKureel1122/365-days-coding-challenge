// Problem - https://www.interviewbit.com/problems/diffk/
---------------------------------------------------------
int Solution::diffPossible(vector<int> &A, int B) {
    int size = A.size();
    int left = 0, right = 1;
    while(right < size) {
        if(left != right && A[right] - A[left] == B) 
          return 1;
        else if(A[right] - A[left] > B) 
          left++;
        else 
          right++;
    } return 0;
}
