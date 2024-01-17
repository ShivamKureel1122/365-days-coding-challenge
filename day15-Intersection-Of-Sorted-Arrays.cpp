// Problem - https://www.interviewbit.com/problems/intersection-of-sorted-arrays/
--------------------------------------------------------------------------------
vector<int> Solution::intersect(const vector<int> &A, const vector<int> &B) {
    vector<int> ans;
    int p1 = 0, p2 = 0;
    int l1 = A.size(), l2 = B.size();
    
    while(p1 != l1 && p2 != l2) {
        if(A[p1] == B[p2]) {
            ans.push_back(A[p1]);
            p1++;
            p2++;
        } else if(A[p1] < B[p2]) {
            p1++;
        } else {
            p2++;
        }
    }
    return ans;
}
