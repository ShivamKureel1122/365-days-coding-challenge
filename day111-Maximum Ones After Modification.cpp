// Problem - https://www.interviewbit.com/problems/maximum-ones-after-modification/
____________________________________________________________
// TC -> O(N), SC -> O(1)
int Solution::solve(vector<int> &A, int B) {
    int n = A.size();
    int maxOnes = 0, zeroes = 0, i = 0, j = 0;
    
    while(j < n) {
        if(A[j] == 0) zeroes++;
        
        while(zeroes > B && i <= j) {
            if(A[i] == 0) zeroes--;
            i++;
        }
        
        maxOnes = max(maxOnes, j-i+1);
        j++;
    }   
    return maxOnes; 
}
