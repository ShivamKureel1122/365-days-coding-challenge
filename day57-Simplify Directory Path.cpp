// Problem - https://www.interviewbit.com/problems/simplify-directory-path/
-----------------------------------------------------------------
string Solution::simplifyPath(string A) {
    int n = A.size();
    vector<string> s;
    
    for(int i=0; i<n; i++) {
        if(A[i] == '/') continue;
        
        string str = "";
        while(i < n && A[i] != '/') {
            str.push_back(A[i++]);
        }
        
        if(str == ".") continue;
        else if(str == "..") {
            if(s.size() > 0) s.pop_back();
        }
        else s.push_back(str);
    }
    
    A = "";
    for(int j=0; j<s.size(); j++) {
        A.append("/" + s[j]);
    }
    
    if(A == "") return "/";
    return A; 
}
