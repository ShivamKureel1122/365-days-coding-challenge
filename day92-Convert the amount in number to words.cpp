// Problem - https://www.interviewbit.com/problems/convert-the-amount-in-number-to-words/
___________________________________________________________________________________________
// TC -> O(n), SC -> O(1)
string numToWord(int num) {
    vector<string> ones = {"", "one", "two", "three", "four", "five", "six",
    "seven", "eight", "nine", "ten", "eleven", "twelve", "thirteen", "fourteen", 
    "fifteen", "sixteen", "seventeen", "eighteen", "nineteen"};

    vector<string> tens = {"", "ten", "twenty", "thirty", "forty", "fifty", "sixty",
    "seventy", "eighty", "ninety"};

    if(num >= 0 && num < 20) 
        return ones[num];
    else {
        if(num % 10)
          return tens[num/10] + "-" + ones[num%10];
        else 
          return tens[num/10];
    } 
}

string convert(int num) {
    if(num > 0 && num < 100) {
        return "and-" + numToWord(num);
    }
    else if(num >= 100 && num < 1000) {
        if(num % 100)
          return numToWord(num/100) + "-hundred-" + convert(num%100);
        else 
          return numToWord(num/100) + "-hundred";
    }
    else if(num >= 1000 && num <= 99999) {
        if(num % 1000)
          return numToWord(num/1000) + "-thousand-" + convert(num%1000);
        else 
          return numToWord(num/1000) + "-thousand";
    }
    else if(num >= 100000 && num <= 9999999) {
        if(num % 100000)
          return numToWord(num/100000) + "-lakh-" + convert(num%100000);
        else 
          return numToWord(num/100000) + "-lakh";
    }
    else if(num >= 10000000 && num <= 999999999) {
        if(num % 10000000)
          return numToWord(num/10000000) + "-crore-" + convert(num%10000000);
        else 
          return numToWord(num/10000000) + "-crore";
    }
} 
  
int Solution::solve(string A, string B) {
    int num = stoi(A);
    string str = convert(num);
    int n = str.size();
    
    if(str[3] == '-' && str.substr(0, 4) == "and-") {
        str.erase(0, 4);
    }
    if(str[n-1] == '-') {
        str.erase(str.size() - 1);
    }
    
    return str == B; 
}
