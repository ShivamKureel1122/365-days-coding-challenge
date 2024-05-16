// Problem - https://www.interviewbit.com/problems/vowel-and-consonant-substrings/
____________________________________________________________________________________
// TC -> O(N), SC -> O(1)
bool isVowel(char ch) {
    return ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u';
} 
int Solution::solve(string A) {
    const int M = 1000000000 + 7;
    int vowel = 0, consonant = 0;
    
    //traversing the string and incrementing vowel and consonant count whenever it occurs
    for(auto &ch : A) {
        isVowel(ch) ? vowel++ : consonant++;
    }
    
    //returning the count of vowel and consonant substrings 
    return (vowel * consonant) % M; 
}
