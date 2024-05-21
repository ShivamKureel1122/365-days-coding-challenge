// Problem - https://www.interviewbit.com/problems/distribute-in-circle/
________________________________________________
// TC -> O(1), SC -> O(1)
int Solution::solve(int A, int B, int C) {    
    int x = A % B;
    int y = C % B;
    int ans = (x + y - 1) % B;
    
    return ans;
}
