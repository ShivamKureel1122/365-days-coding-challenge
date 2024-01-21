// Problem - https://www.interviewbit.com/problems/single-number/
---------------------------------------------------------
int Solution::singleNumber(const vector<int> &A) {
    int len = A.size(), ans = A[0];
    for(int i = 1; i < len; i++) {
        ans ^= A[i];
    } return ans;
}
