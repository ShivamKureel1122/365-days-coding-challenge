// Problem - https://www.interviewbit.com/problems/pairs-with-given-xor/
__________________________________________________________________________
// TC -> O(N), SC -> O(N)
int Solution::solve(vector<int> &A, int B) {
    int n = A.size(), count = 0;
    unordered_set<int> st;
    
    //iterating over the array
    for(int i=0; i<n; i++) {
        //If B ^ A[i] is present in the set then increment the count variable by 1
        if(st.find(B ^ A[i]) != st.end()) {
            count++;
        }
        //insert ith element in the set 
        st.insert(A[i]);
    }
    
    return count; 
}
