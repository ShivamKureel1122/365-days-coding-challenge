// Problem - https://www.interviewbit.com/problems/total-moves-for-bishop/
----------------------------------------------------------------------------
int Solution::solve(int A, int B) {
    return min(abs(8-A), abs(8-B)) + min(abs(8-A), abs(1-B)) + min(abs(1-A), abs(1-B)) + min(abs(1-A), abs(8-B));
}
