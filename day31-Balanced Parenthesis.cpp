// Problem - https://www.interviewbit.com/problems/balanced-parantheses/
-------------------------------------------
int Solution::solve(string A) {
    stack<int> s;
    for(char ch : A) {
        if(ch == '(') {
            s.push(ch);
        }
        else {
            if(s.empty()) return 0;
            s.pop();
        }
    }
    return s.empty(); 
}
