// Problem - https://www.interviewbit.com/problems/add-binary-strings/
_________________________________________________________
// TC -> O(max(n, m))     SC -> O(1)
string Solution::addBinary(string A, string B) {
    int n = A.size(), m = B.size();
    int i = n-1, j = m-1;
    int sum = 0;
    string ans;
    
    while(i >= 0 || j >= 0 || sum) {
        int x = i >= 0 ? A[i] - '0' : 0;
        int y = j >= 0 ? B[j] - '0' : 0;
        
        sum += x + y;
        ans.push_back(sum % 2 + '0');
        sum /= 2;
        
        i--;
        j--;
    }
    
    reverse(ans.begin(), ans.end());
    return ans;
}
