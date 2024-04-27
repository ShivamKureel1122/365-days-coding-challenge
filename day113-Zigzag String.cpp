// Problem - https://www.interviewbit.com/problems/zigzag-string/
________________________________________________________
string Solution::convert(string s, int B) {
     if (B == 1 || s.length() <= B) {
        return s;
    }

    vector<string> str(B, "");
   
    int i = 0;
    while(i < s.size()) {
        int j = 0;
        while(j < B && i < s.size()) {
            str[j] += s[i++];
            j++;
        }
       
        j -= 2;
        while(j > 0 && i < s.size()) {
            str[j] += s[i++];
            j--;
        }
    }
     
    string res = "";
    for(int i = 0; i < B; i++) {
        res += str[i];
    }
    return res;
}
