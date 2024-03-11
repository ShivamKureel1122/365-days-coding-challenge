// Problem - https://www.interviewbit.com/problems/palindrome-integer/
-------------------------------------------------
int Solution::isPalindrome(int A) {
    if(A < 0) return 0;
    string s = to_string(A);
    int i = 0, j = s.size() - 1;
    
    while(i <= j) {
        if(s[i] == s[j]) {
            i++;
            j--;
        } else {
            return 0;
        }
    }   
    return 1;
}
