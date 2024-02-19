// Problem - https://www.interviewbit.com/problems/reverse-the-string/
------------------------------------------------------
string Solution::solve(string A) {
    stack<string> s;
    int n = A.size();
    
    for(int i=0; i<n; i++) {
        if(A[i] != ' ') {
            string str = "";
            while(i < n && A[i] != ' ') {
                str += A[i++];
            }
            s.push(str);
            s.push(" ");
        }
    }
    s.pop();
    
    string ans = "";
    while(!s.empty()) {
        ans += s.top();
        s.pop();
    }
    return ans;
}
