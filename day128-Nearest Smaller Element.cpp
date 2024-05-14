// Problem - https://www.interviewbit.com/problems/nearest-smaller-element/
_____________________________________________________________________________
// TC -> O(N), SC -> O(N)
vector<int> Solution::prevSmaller(vector<int> &A) {
    int n = A.size();
    stack<int> s;
    vector<int> ans;
    
    for(int i=0; i<n; i++) {
        //if stack is not empty then pop stack elements until A[i] becomes greater than stack's top element
        while(!s.empty() && s.top() >= A[i]) {
            s.pop();
        }
        
        //insert stack's top element in the ans vector and if it is empty then insert -1
        s.empty() ? ans.push_back(-1) : ans.push_back(s.top());
        
        //push current element into stack
        s.push(A[i]);
    }
    
    return ans; 
}
