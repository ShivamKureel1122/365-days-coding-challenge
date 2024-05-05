// Problem - https://www.interviewbit.com/problems/window-string/
_____________________________________________________________________
// TC -> O(N), SC -> O(N)
string Solution::minWindow(string A, string B) {
    int n = A.size();
    unordered_map<char, int> mp;
    int minSize = INT_MAX, s = 0;
    
    //constructing a map of character and its frequency in string B
    for(auto &i: B) mp[i]++;
    
    //initializing two pointers i and j to 0 and a count variable to the size of the map
    int i=0, j=0, count = mp.size();
    
    //iterating over the string A and creating a window
    while(j < n) {
        //if character at index j is present in map then decrement its frequency count by 1 then if the frequency of the character at index j in the map is equal to 0 then decrement count by 1
        if(mp.find(A[j]) != mp.end()) {
            mp[A[j]]--;
            if(mp[A[j]] == 0) count--;
        }
        
        //if the count becomes 0 it means all the characters of the string B comes in the substring of A
        //now we have to find the minimum possible substring which contains all the characters of the string B in it
        //decrease the size of the substring by incrementing the i pointer and calculate the size of the substring each time, repeat this process until count = 0
        while(i <= j && count == 0) {
            //update minSize if it is greater then j-i+1 also update the start index s of the substring 
            if(minSize > j-i+1) {
                minSize = j-i+1;
                s = i;
            }
            
            //if character at index i is present in the map then increment its frequency by 1, also if the frequency of the ith character is equal to 1 in the map then increment the count by 1
            if(mp.find(A[i]) != mp.end()) {
                mp[A[i]]++;
                if(mp[A[i]] == 1) count++;
            }
            i++;
        }
        j++;
    }
    
    //if minSize is equal to INT_MAX then return empty string otherwise return the substring
    return minSize == INT_MAX ? "" : A.substr(s, minSize);
}
