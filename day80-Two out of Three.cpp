// Problem - https://www.interviewbit.com/problems/two-out-of-three/
------------------------------------------------------------------------------
vector<int> Solution::solve(vector<int> &A, vector<int> &B, vector<int> &C) {
    unordered_map<int, int> mp1, mp2, mp3;
    vector<int> ans;
    
    for(auto &i: A) {
        if(!mp1[i]) mp1[i]++;
    }
    
    for(auto &i: B) {
        if(!mp2[i]) {
            mp2[i]++;
            
            if(mp1[i] + mp2[i] == 2) {
                ans.push_back(i);
                mp1[i] = mp2[i] = -1;
            }
        }
    }
    
    for(auto &i: C) {
        if(!mp3[i]) {
            mp3[i]++;
            
            if(mp1[i] + mp2[i] + mp3[i] >= 2) {
                ans.push_back(i);
                mp1[i] = mp2[i] = mp3[i] = -1;
            }
        }
    }
    sort(ans.begin(), ans.end());
    return ans; 
}
