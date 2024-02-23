// Problem - https://www.interviewbit.com/problems/sliding-window-maximum/
---------------------------------------------------------------------------
vector<int> Solution::slidingMaximum(const vector<int> &A, int B) {
    deque<int> dq;
    vector<int> ans;
    int n = A.size();
    
    for(int i=0; i<n; i++) {
        if(!dq.empty() && dq.front() == i-B) {
            dq.pop_front();
        }
        
        while(!dq.empty() && A[dq.back()] <= A[i]) {
            dq.pop_back();
        }
        
        dq.push_back(i);
        if(i >= B-1) {
            ans.push_back(A[dq.front()]);
        }
    }
    
    return ans;
}
