// Problem - https://www.interviewbit.com/problems/redundant-braces/
------------------------------------------------------------------------------
int Solution::braces(string A) {
    stack<char> s; 
    for(char ch : A) {
        if(ch == '(' || ch == '+' || ch == '-' || ch == '*' || ch == '/') {
            s.push(ch);
        }
        if(ch == ')') {
            if(s.top() == '(' && ch == ')') {
                return 1;
            }
            while(s.top() != '(') {
                s.pop();
            }
            s.pop();
        }
    }
    return 0;
}
