// Problem - https://www.interviewbit.com/problems/excel-column-title/
______________________________________________________________
// TC -> O(26^n), SC -> O(1)
string Solution::convertToTitle(int A) {
    string ans = "";
    int n = A;
    
    while(n) {
        n -= 1;
        ans.insert(ans.begin(), (n % 26) + 'A');
        n /= 26;
    }
    
    return ans;
}
