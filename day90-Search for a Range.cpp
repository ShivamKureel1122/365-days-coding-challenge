// Problem - https://www.interviewbit.com/problems/search-for-a-range/
------------------------------------------------------------------------
// TC -> O(2log(n)), SC -> O(1)
int search(vector<int> A, int B, int flag) {
    int s = -1, e = -1;
    for(int l = 0, h = A.size()-1; l <= h;) {
        int mid = (l + (h - l) / 2);
        
        if(A[mid] == B) {
            if(flag) {
                s = mid;
                h = mid-1;
            } else {
                e = mid;
                l = mid+1;
            }
        }
        else if(A[mid] < B) l = mid+1;
        else h = mid-1;
    }
    return flag ? s : e;
}
vector<int> Solution::searchRange(const vector<int> &A, int B) {
    int start = search(A, B, 1);
    
    if(start == -1) return {-1, -1};
    
    int end = search(A, B, 0);
    return {start, end};
}
