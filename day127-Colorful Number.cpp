// Problem - https://www.interviewbit.com/problems/colorful-number/
_____________________________________________________________________
// TC -> O(N^2), SC -> O(N^2)
int Solution::colorful(int A) {
    //converting integer to string
    string str = to_string(A);
    int n = str.size();
    
    unordered_set<long long> st;
    
    //generate all possible substrings of the number and find product of each substring 
    //if the product of substring is already present in the set then return 0 otherwise return 1
    for(int i=0; i<n; i++) {
        long long prod = 1;
        for(int j=i; j<n; j++) {
            prod *= (long long)(str[j] - '0');
            if(st.find(prod) != st.end()) return 0;
            st.insert(prod);
        }
    }
    
    return 1; 
}
