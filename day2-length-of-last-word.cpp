// Problem - https://www.interviewbit.com/problems/length-of-last-word/

int Solution::lengthOfLastWord(const string A) {
    int len = A.size();
    int count = 0;
    for(int i = len-1; i >= 0; i--) {
        if(A[i] != ' ') {
            while(A[i] != ' ' && i >= 0) {
                count++;
                i--; 
            } break;
        } 
    } return count;
}
