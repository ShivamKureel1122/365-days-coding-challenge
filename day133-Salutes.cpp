// Problem - https://www.interviewbit.com/problems/salutes/
_____________________________________________________
// TC -> O(N)   SC -> O(1)
long Solution::countSalutes(string A) {
    int n = A.size();
    int count = 0;
    long ans = 0;
    
    for(int i=0; i<n; i++) {
        A[i] == '>' ? count++ : ans += count;
    }
    
    return ans;
}
