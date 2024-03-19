// Problem - https://www.interviewbit.com/problems/3-sum/
----------------------------------------------------------
int Solution::threeSumClosest(vector<int> &A, int B) {
    int n = A.size();
    int minDiff = INT_MAX, ans = 0;
    
    sort(A.begin(), A.end());
    
    for(int i=0; i<n; i++) {
        for(int j = i+1, k = n-1; j < k;) {
            int sum = A[i] + A[j] + A[k];
            
            if(sum < B) j++;
            else if(sum > B) k--;
            else return sum;
            
            int diff = abs(sum - B);
            if(minDiff > diff) {
                minDiff = diff;
                ans = sum;
            }
        }
    }
    return ans;
}
