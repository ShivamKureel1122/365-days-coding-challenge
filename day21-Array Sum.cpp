// Problem - https://www.interviewbit.com/problems/array-sum/
------------------------------------------------------------------
vector<int> Solution::addArrays(vector<int> &A, vector<int> &B) {
    int i = A.size()-1, j = B.size()-1;
    vector<int> ans;
    int carry = 0, sum;
    
    while(i >= 0 || j >= 0 || carry > 0) {
        /* if(i >= 0 && j >= 0) {
            sum = A[i--] + B[j--] + carry;
        } else if(j < 0) {
            sum = A[i--] + carry;
        } else if(i < 0){
            sum = B[j--] + carry; 
        } else {
            sum = carry;
        } */
        sum = (i >= 0 ? A[i--] : 0) + (j >= 0 ? B[j--] : 0) + carry;
        carry = sum / 10;
        ans.push_back(sum % 10);
    }
    reverse(ans.begin(), ans.end());
    return ans;
}
