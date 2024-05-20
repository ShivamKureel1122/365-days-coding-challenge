// Problem - https://www.interviewbit.com/problems/amazing-subarrays/
_______________________________________________________________________
// TC -> O(N)    SC -> O(1)
int Solution::solve(string A) {
    int n = A.size();
    int subArrays = 0;
    unordered_set<char> st = {
        'A', 'E', 'I', 'O', 'U', 'a', 'e', 'i', 'o', 'u'
    };
    
    for(int i=0; i<n; i++) {
        if(st.find(A[i]) != st.end()) {
            subArrays += n-i;
        }
    }
    
    return subArrays % 10003; 
}
