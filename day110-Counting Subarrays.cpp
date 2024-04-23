// Problem - https://www.interviewbit.com/problems/counting-subarrays/
______________________________________________________
// TC -> O(N), SC -> O(1)
int Solution::solve(vector<int> &A, int B) {
    int n = A.size(), count = 0, sum = 0;
    
    for(int i=0, j=0; j<n; j++) {
        sum += A[j]; 
        
        while(i <= j && sum >= B) {
            sum -= A[i++];
        }
        
        count += j-i+1;
    }
    
    return count; 
}
