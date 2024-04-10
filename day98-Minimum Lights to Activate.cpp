// Problem - https://www.interviewbit.com/problems/minimum-lights-to-activate/
_____________________________________________________________
// TC -> O(n), SC -> O(1)
int Solution::solve(vector<int> &A, int B) {
    int n = A.size();
    int i = -1, j = B-1, bulbs = 0;
    if(j >= n) j = n-1;
    
    while(j < n) {
        while(i < j && A[j] == 0) j--;
        
        if(i == j) return -1;
        
        i = j;
        bulbs += 1;
        
        if(j == n-1 || j+(B-1) >= n-1) return bulbs;
        else {
            if(j+(2*(B-1)+1) > n-1) {
                j = n-1;
            } else {
                j = j+(2*(B-1)+1);
            }
        }
    }
    
    return bulbs;
}
