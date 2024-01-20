// Problem - https://www.interviewbit.com/problems/addition-without-summation/
-------------------------------------------------------
int Solution::addNumbers(int A, int B) {
    while(B != 0) {
        int Carry = A & B;
        A = A ^ B;
        B = Carry << 1;
    } return A;
}
