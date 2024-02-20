// Problem - https://www.interviewbit.com/problems/atoi/
---------------------------------------------------------
int Solution::atoi(const string A) {
    int n = A.size(), sign = 1, i = 0;
    long ans = 0;
    
    while(A[i] == ' ' && i < n) {
        i++;
    }
    
    if(A[i] == '-') {
        sign = -1;
        i++;
    } else if(A[i] == '+') {
        i++;
    }
    
    for(; i<n; i++) {
        if(A[i] >= '0' && A[i] <= '9') {
            ans = (ans * 10) + (A[i] - '0');
            if(ans > INT_MAX) {
                return (sign == -1) ? INT_MIN : INT_MAX;
            }
        }
        else {
            return ans * sign;
        }
    }
    
    return ans * sign;
}
