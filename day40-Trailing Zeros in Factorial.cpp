// Problem - https://www.interviewbit.com/problems/trailing-zeros-in-factorial/
---------------------------------------------------
int Solution::trailingZeroes(int A) {
    int count = 0;
    long long div = 1; // to handle edge case
    while(div < A) {
        div *= 5;
        count += A/div;
    } 
  //using for loop
  /* for(long long i = 5; i <= A; i *= 5) {
        count += A / i;
    } */
    return count; 
}
