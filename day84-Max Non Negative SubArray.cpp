// Problem - https://www.interviewbit.com/problems/max-non-negative-subarray/
------------------------------------------------------------------------------
vector<int> Solution::maxset(vector<int> &A) {
    int n = A.size(), i, j;
    long long sum = 0, maxSum = INT_MIN;
    vector<int> idx(2), res;
    
    for(i=0, j=0; j < n; j++) {
        if(A[j] < 0) {
            if(maxSum < sum) {
                maxSum = sum;
                idx[0] = i;
                idx[1] = j-1;
            }
            sum = 0;
            i = j+1;
            continue;
        } 
        sum += A[j];
    }
    
    if(maxSum < sum) {
        idx[0] = i;
        idx[1] = j-1;
    }
    
    for(i = idx[0]; i <= idx[1]; i++) res.push_back(A[i]);
    
    return res;
}
