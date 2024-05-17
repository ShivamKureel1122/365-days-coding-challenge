// Problem - https://www.interviewbit.com/problems/multiply-strings/
_______________________________________________________________________
// TC -> O(n*m)     SC -> O(n+m)
string Solution::multiply(string A, string B) {
    //if any of the string contains 0 then return "0"
    if(A == "0" || B == "0") return "0";
    
    int n = A.size(), m = B.size();
    
    //declare a vector res which will store the product of A and B of size = (A.size() + B.size())
    vector<int> res(n+m, 0);
    
    //calculate the product and store it in res vector
    for(int i=n-1; i>=0; i--) {
        for(int j=m-1; j>=0; j--) {
            //calculate the product A[i] * B[j] and add it at the index(j+i+1) value in res
            res[j+i+1] += (A[i] - '0') * (B[j] - '0');
            //add the product/10 in the index(j+i) value in res
            res[j+i] += res[j+i+1] / 10;
            //update the index(j+i+1) value in res by its value % 10
            res[j+i+1] %= 10;
        }
    }
    
    string prod = "";
    int i=0;
    
    //ignore leading zeroes
    while(res[i] == 0) i++;
    
    //traverse res and add res[i]+'0' in prod 
    while(i < n+m) {
        prod += res[i] + '0';
        i++;
    } 
    
    return prod;
}
