// Problem - https://www.interviewbit.com/problems/palindrome-string/
____________________________________________________
// TC -> O(n), SC -> O(1)
int Solution::isPalindrome(string A) {
    int n = A.size();
    
    for(int i=0, j=n-1; i <= j;) {
        while(i < n && !isalnum(A[i])) i++;
        while(j >= 0 && !isalnum(A[j])) j--;
        
        if(tolower(A[i]) != tolower(A[j])) {
            return 0;
        } else {
            i++; 
            j--;
        }
    } 
    return 1;
} 
