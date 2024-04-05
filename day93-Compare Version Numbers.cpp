// Problem - https://www.interviewbit.com/problems/compare-version-numbers/
____________________________________________________________________________
// TC -> O(n + m), SC -> O(1)
int Solution::compareVersion(string A, string B) {
    int n = A.size(), m = B.size();
    int i = 0, j = 0, s;
    string s1, s2;
    
    while(i < n && j < m) {
        while(i < n && A[i] == '0') i++;
        s = i;
        while(i < n && A[i] != '.') i++;
        s1 = A.substr(s, i-s);
        
        while(j < m && B[j] == '0') j++;
        s = j;
        while(j < m && B[j] != '.') j++;
        s2 = B.substr(s, j-s);
        
        if(s1.size() > s2.size()) return 1;
        if(s1.size() < s2.size()) return -1;
        if(s1 > s2) return 1;
        if(s1 < s2) return -1;
        i++; j++;
    }
    
    while(i < n) {
        if(A[i] != '.' && A[i] != '0') return 1;
        i++;
    }
    
    while(j < m) {
        if(B[j] != '.' && B[j] != '0') return -1;
        j++;
    }
    
    return 0;
}
