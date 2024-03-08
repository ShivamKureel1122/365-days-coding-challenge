// Problem - https://www.interviewbit.com/problems/count-and-say/
---------------------------------------------------------
string Solution::countAndSay(int A) {
    if(A == 1) return "1";
    
    string s = countAndSay(A-1);
    
    string res;
    int n = s.size(), count = 1;
    char ch = s[0];
    
    for(int i=1; i<n; i++) {
        if(s[i] == ch) {
            count++;
        } else {
            res.push_back(count + '0');
            res.push_back(ch);
            ch = s[i];
            count = 1;
        }
    }
    res.push_back(count + '0');
    res.push_back(ch);
    
    return res;
}
