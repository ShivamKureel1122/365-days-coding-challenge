// Problem - https://www.interviewbit.com/problems/remove-consecutive-characters/
_______________________________________________________
// TC -> O(N), SC -> O(1)
string Solution::solve(string A, int B) {
    int n = A.size();
    string ans = "";
    
    for(int i=0; i<n;) {
        char ch = A[i];
        int freq = 0;
        while(i < n && A[i] == ch) {
            freq++;
            i++;
        }
        if(freq != B) {
            string str(freq, ch);
            ans += str;
        } 
    }
    return ans;
}
