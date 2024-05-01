// Problem - https://www.interviewbit.com/problems/subarray-with-given-xor/
_____________________________________________________________________________
// TC -> O(N), SC -> O(N)
int Solution::solve(vector<int> &A, int B) {
    int n = A.size();
    unordered_map<int, int> mp = {{0,1}};
    int XOR = 0, count = 0;
    
    // traversing over the array
    for(int i=0; i<n; i++) {
        // finding XOR of all the elements till index i
        XOR ^= A[i];
        
        // finding x in the map which occurs before B, if it is present then add the value of key x in the count 
        // XOR = B ^ x 
        if(mp.find(XOR ^ B) != mp.end()) {
            // count will keep track of the number of subarrays whose XOR is equal to B
            count += mp[XOR ^ B];
        }
        
        // incrementing the XOR count which occurs till now 
        mp[XOR]++;
    }
    
    return count;
}
