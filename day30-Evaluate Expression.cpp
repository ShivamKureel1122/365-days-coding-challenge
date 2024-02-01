// Problem - https://www.interviewbit.com/problems/evaluate-expression/
-------------------------------------------------------------------------
int Solution::evalRPN(vector<string> &A) {
    int n = A.size(); 
    stack<int> s;
    
    for(int i = 0; i < n; i++) {
        if(A[i] != "+" && A[i] != "-" && A[i] != "*" && A[i] != "/") {
            s.push(stoi(A[i]));
        }
        else {
            int a = s.top(); s.pop();
            int b = s.top(); s.pop();
            
            switch(A[i][0]) {
                case '+' : s.push(b + a); break;
                case '-' : s.push(b - a); break;
                case '*' : s.push(b * a); break;
                case '/' : s.push(b / a); break;
            } 
        }
    }
    int ans = s.top(); s.pop();
    return ans; 
}
