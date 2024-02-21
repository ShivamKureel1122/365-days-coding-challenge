// Problem - https://www.interviewbit.com/problems/large-factorial/
----------------------------------------------------
string Solution::solve(int A) {
    int res[200], rsize = 1;
    res[0] = 1;
    for(int i=2; i<=A; i++) {
        int carry = 0;
        
        for(int j=0; j<rsize; j++) {
            int mul = (res[j] * i) + carry;
            res[j] = mul % 10;
            carry = mul / 10;
        }
        
        while(carry) {
            res[rsize] = carry % 10;
            carry = carry / 10;
            rsize++;
        }
    }
    
    string ans = "";
    for(int i=rsize-1; i>=0; i--) {
        char ch = res[i] + '0';
        ans += ch;
    } 
    
    return ans;
}
