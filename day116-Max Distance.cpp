// Problem - https://www.interviewbit.com/problems/max-distance/
___________________________________________________________________
// TC -> O(n), SC -> O(n)
int Solution::maximumGap(const vector<int> &A) {
    int n = A.size(), ans = INT_MIN;
    vector<int> suffArr(n, 0);
    suffArr[n-1] = A[n-1];
    
    // creating suffix array to keep track of the maximum element from the right of the array
    for(int i=n-2; i>=0; i--) {
        suffArr[i] = max(A[i], suffArr[i+1]);
    }
    
    // taking two pointers i and j pointing to A and suffArr respectively
    // incrementing j when A[i] <= suffArr[j] and if A[i] > suffArr[j] increment i
    // in each iteration find the maximum of previous and current indices difference of A and suffArr 
    for(int i=0, j=0; j<n; j++) {
        if(A[i] > suffArr[j]) { 
            i++;
        }
        ans = max(ans, j-i);
    }
    
    return ans; 
}
