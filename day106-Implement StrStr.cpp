// Problem - https://www.interviewbit.com/problems/implement-strstr/
_____________________________________________________________
// TC -> O(n*m), SC -> O(1)
int Solution::strStr(const string A, const string B) {
    int n = A.length(), m = B.length();
    
    if(!n || !m) return -1;
    
    for(int i = 0; i <= n-m+1; i++) {
        if(A.substr(i, m) == B) 
            return i;
    }
    
    return -1;
}
