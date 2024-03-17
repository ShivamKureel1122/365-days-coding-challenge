// Problem - https://www.interviewbit.com/problems/deserialize/
---------------------------------------------------------------
vector<string> Solution::deserialize(string A) {
    int n = A.size();
    int j = 0;
    vector<string> res;
    
    for(int i=0; i<n; i++) {
        if(!isalpha(A[i])) {
            res.push_back(A.substr(j, i-j));
            for(; i < n && A[i] != '~'; i++) {}
            j = i+1;
        } 
    }   
    return res;
}
