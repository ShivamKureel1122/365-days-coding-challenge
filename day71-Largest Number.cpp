// Problem - https://www.interviewbit.com/problems/largest-number/
------------------------------------------------------------------
bool cmp(string x, string y) {
    return x + y > y + x;
}
string Solution::largestNumber(const vector<int> &A) {
    vector<string> arr;
    string ans = "";
    for(int i : A) {
        arr.push_back(to_string(i));
    }
    
    sort(arr.begin(), arr.end(), cmp);
    
    if(arr[0] == "0") return "0";
    
    for(string i : arr) ans += i;
    
    return ans;
}
