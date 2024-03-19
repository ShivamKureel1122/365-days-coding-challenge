// Problem - https://www.interviewbit.com/problems/merge-intervals/
----------------------------------------------------------------------
vector<Interval> Solution::insert(vector<Interval> &intervals, Interval newInterval) {
    int n = intervals.size(), i = 0;
    vector<Interval> res;
    
    while(i < n && intervals[i].end < newInterval.start) {
        res.push_back(intervals[i]);
        i++;
    }
    
    while(i < n && intervals[i].start <= newInterval.end) {
        newInterval.start = min(intervals[i].start, newInterval.start);
        newInterval.end = max(intervals[i].end, newInterval.end);
        i++;
    }
    res.push_back(newInterval);
    
    while(i < n) {
        res.push_back(intervals[i]);
        i++;
    }
    
    return res;
}
