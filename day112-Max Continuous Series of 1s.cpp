// Problem - https://www.interviewbit.com/problems/max-continuous-series-of-1s/
________________________________________________________________
// TC -> O(N), SC -> O(1)
vector<int> Solution::maxone(vector<int> &A, int B) {
    int n = A.size();
    int zeroes = 0, maxSize = 0;
    int start = 0, end = 0;
    vector<int> res;

    for(int i=0, j=0; j<n; j++) {
        if(A[j] == 0) zeroes++;

        while(zeroes > B) {
            if(A[i] == 0) zeroes--;
            i++;
        } 
        
        if(zeroes <= B && j-i+1 > maxSize) {
            maxSize = j-i+1;
            start = i;
            end = j;
        }
    }
    
    for(int i = start; i <= end; i++) {
        res.push_back(i);
    }
    
    return res; 
}
