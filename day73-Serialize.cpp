// Problem - https://www.interviewbit.com/problems/serialize/
-------------------------------------------------------
string Solution::serialize(vector<string> &A) {
    string res = "";
    for(string s : A) {
        res += s + to_string(s.size()) + '~';
    }
    return res;
}
