// Problem - https://www.interviewbit.com/problems/reverse-string/
-----------------------------------------------------
string Solution::reverseString(string A) {
  // by using Stack
    stack<char> s;
    string str = "";
    for(char ch : A) 
        s.push(ch);
    while(!s.empty()) {
        str += s.top();
        s.pop();
    }
    return str; 

  // without using Stack
   /* string str = "";
    for(int i = A.size()-1; i >= 0; i--) {
        str += A[i];
    } return str; */
}
