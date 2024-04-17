// Problrm - https://www.interviewbit.com/problems/integer-to-roman/
______________________________________________________________________
char helper2(int num) {
    if (num >= 1000)
        return 'M';
    else if (num >= 500)
        return 'D';
    else if (num >= 100)
        return 'C';
    else if (num >= 50)
        return 'L';
    else if (num >= 10)
        return 'X';
    else if (num >= 5)
        return 'V';
    else
        return 'I';
}
string helper1(int digit, int i) {
    int num = 5 * pow(10, i);
    string str = "";
    if (digit > num) {
        digit -= num;
        str += helper2(num);
    }
    if (digit > 0) {
        string s(digit / pow(10, i), helper2(digit));
        str += s;
    }
    return str;
}

// TC -> O(N), SC -> O(1)
string Solution::intToRoman(int A) {
    unordered_map<int, string> mp{
        {1, "I"},   {4, "IV"},   {5, "V"},   {9, "IX"},  {10, "X"},
        {40, "XL"}, {50, "L"},   {90, "XC"}, {100, "C"}, {400, "CD"},
        {500, "D"}, {900, "CM"}, {1000, "M"} };
    int i = 0;
    string res = "";

    while (A) {
        int digit = pow(10, i) * (A % 10);
        A /= 10;

        if (mp.find(digit) != mp.end()) {
            res = mp[digit] + res;
        } else {
            res = helper1(digit, i) + res;
        }
        i++;
    }

    return res;
}
