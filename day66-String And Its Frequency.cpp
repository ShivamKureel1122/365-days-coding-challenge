// Problem - https://www.interviewbit.com/problems/string-and-its-frequency/
-------------------------------------------------------
string Solution::solve(string A) {
    unordered_map<char, int> mp;
    string res;
    
    for(char ch : A) mp[ch]++;
    
    for(char ch : A) {
        if(mp[ch] != -1) {
            res.push_back(ch);
            res += to_string(mp[ch]);
            mp[ch] = -1;
        }
    }
    return res; 
}
