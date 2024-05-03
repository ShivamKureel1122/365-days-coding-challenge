// Problem - https://www.interviewbit.com/problems/longest-substring-without-repeat/
_______________________________________________________________________________________
// TC -> O(N), SC -> O(N)
int Solution::lengthOfLongestSubstring(string A) {
    int n = A.size();
    int i=0, j=0, maxLen = 0;
    unordered_map<char, int> mp;
    
    //creating a window by taking two pointers i=0 and j=0
    while(j < n) {
        // incrementing j pointer in each iteration and 
        //incrementing the frequency of the character in the map which is at jth index
        mp[A[j]]++;
        
        //if the frequency of the element which is at jth index is greater than 1 it means, it is
        //repeated so now we will decrease the size of the window by incrementing the i pointer 
        // -> decrease the frequency of the element which is at index i by 1
        // -> check if the element which is at index i has its frequency = 0, if yes then remove that element from map
        // -> increment the i pointer by 1
        //repeat the above three steps until the frequency of the element at jth index is greater than 1
        
        while(mp[A[j]] > 1) {
            mp[A[i]]--;
            if(!mp[A[i]]) mp.erase(A[i]);
            i++;
        }
        
        //find the length of the subarray by using the formula j-i+1
        maxLen = max(maxLen, j-i+1);
        j++;
    }
    
    return maxLen;
}
