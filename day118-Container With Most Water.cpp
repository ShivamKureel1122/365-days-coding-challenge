// Problem - https://www.interviewbit.com/problems/container-with-most-water/
_________________________________________________________________________________
// TC -> O(N), SC -> O(1)
int Solution::maxArea(vector<int> &A) {
    int i = 0, j = A.size()-1;
    int maxArea = 0;
    
    while(i < j) {
        // calculating the area enclosed by the current left and right vertical lines
        // width = j-i;
        // height = min(A[i], A[j])
        // then storing the maximum of current and previous maximum area
        maxArea = max(maxArea, ((j-i)*min(A[i], A[j])));
        
        // if the height at index i is small than the height at index j then increment i, otherwise decrement j
        A[i] < A[j] ? i++ : j--;
    }
    
    return maxArea;
}
