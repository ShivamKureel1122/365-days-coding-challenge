// Problem - https://www.interviewbit.com/problems/first-non-repeating-character-in-a-stream-of-characters/
---------------------------------------------------------------------------
string Solution::solve(string A) {
    int n = A.size();
    vector<int> freq(26, 0);
    queue<char> q;
    
    string ans = "";
    
    for(int i=0; i<n; i++) {
        freq[A[i] - 'a']++;
        q.push(A[i]);
        
        while(!q.empty() && freq[q.front() - 'a'] >= 2) q.pop();
        
        if(q.empty()) ans += '#';
        else ans += q.front();
    }
    
    return ans;
}
