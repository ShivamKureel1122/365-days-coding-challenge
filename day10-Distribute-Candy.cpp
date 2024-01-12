// Problem - https://www.interviewbit.com/problems/distribute-candy/
-------------------------------------------------------------------------
int Solution::candy(vector<int> &A) {
    int n = A.size(), sum = 0;
    int l = 1, r = n - 2;
    vector<int> left(n, 1), right(n, 1);
    int lCandy = left[l], rCandy = right[r];
    
    while(l < n && r >= 0) {
        /* if(A[l] > A[l - 1]) {
            lCandy += 1;
            left[l] = lCandy;
        } else lCandy = 1;
        if(A[r] > A[r + 1]) {
            rCandy += 1;
            right[r] = rCandy;
        } else rCandy = 1; */
        
        (A[l] > A[l - 1]) ? lCandy += 1, left[l] = lCandy : lCandy = 1;
        (A[r] > A[r + 1]) ? rCandy += 1, right[r] = rCandy : rCandy = 1;
        l++;
        r--;
    }
    for(int i=0; i<n; i++) 
        sum += max(left[i], right[i]);
    return sum;
}
