// Problem - https://www.interviewbit.com/problems/reorder-data-in-log-files/
------------------------------------------------------------------------------
vector<string> Solution::reorderLogs(vector<string> &A) {
    vector<pair<string, string>> letterLogs;
    vector<string> digitLogs, res;
    
    for(string s: A) {
        int i = 0;
        while(s[i] != '-') i++;
        
        if(isalpha(s[i+1])) {
            letterLogs.push_back(make_pair(s.substr(0, i), s.substr(i+1)));
        } else {
            digitLogs.push_back(s);
        }
    }
    
    sort(letterLogs.begin(), letterLogs.end(), [](auto& x, auto& y) {
        return (x.second == y.second) ? x.first < y.first : x.second < y.second;
    });
    
    for(pair<string, string> s: letterLogs) {
        res.push_back(s.first + "-" + s.second);
    }
    for(string s: digitLogs) {
        res.push_back(s);
    }
    
    return res;
}
