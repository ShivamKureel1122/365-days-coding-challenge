// Problem - https://www.interviewbit.com/problems/merge-overlapping-intervals/
---------------------------------------------------------------------
vector<Interval> Solution::merge(vector<Interval> &A) {
    int n = A.size();
    int i = 0, j = 1;
    sort(A.begin(), A.end(), [](auto &p1, auto &p2) {
        return p1.start < p2.start;
    });

    while(j < n) {
        int endi = A[i].end;
        int startj = A[j].start;
        
        if(endi >= startj) {
            A[i].end = max(endi, A[j].end);
            A.erase(A.begin() + j);
            n--;
        }
        else {
            i++;
            j++;
        }
    }
    
    return A;
}
