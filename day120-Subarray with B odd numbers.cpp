// Problem - https://www.interviewbit.com/problems/subarray-with-b-odd-numbers/
_________________________________________________________________________________
// TC -> O(N), SC -> O(1)

//In this question to find the number of subarrays which contains k odd integers
//we find the number of subarrays which contains atmost k odd integers and then subtract the number of subarrays which contains atmost k-1 odd integers
//subarrays with k odd integers - subarrays with k-1 odd integers
//hence we can get the total no. of subarrays which contains k odd integers
int atmostSubArrays(vector<int> &arr, int k) {
    int n = arr.size();
    int count = 0, odds = 0;
    int i=0, j=0;
    
    
    while(j < n) {
        //incrementing the count of odd numbers
        if(arr[j] & 1) odds += 1;
        
        //(i <= j) will ensure that i pointer will not go beyond j, specially when k is negative
        while(i <= j && odds > k) {
            if(arr[i] & 1) odds -= 1;
            i++;
        }
        
        count += j-i+1;
        j++;
    }
    
    return count;
}

int Solution::solve(vector<int> &A, int B) {
    return atmostSubArrays(A, B) - atmostSubArrays(A, B-1);
}
