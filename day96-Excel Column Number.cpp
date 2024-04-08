// Problem - https://www.interviewbit.com/problems/excel-column-number/
____________________________________________________________
// TC -> O(n), SC -> O(1)
int Solution::titleToNumber(string A) {
    int n = A.size();
    int ans = 0;
    
    for(int i=n-1; i>=0; i--) {
        ans += pow(26, (n-1-i)) * (A[i] - 'A' + 1);
    }
    
    return ans; 
}
