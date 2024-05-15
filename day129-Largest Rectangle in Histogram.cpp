// Problem - https://www.interviewbit.com/problems/largest-rectangle-in-histogram/
____________________________________________________________________________________
// TC -> O(3N), SC -> O(3N)
int Solution::largestRectangleArea(vector<int> &A) {
    int n = A.size();
    vector<int> left(n), right(n);
    stack<int> s;
    
    //finding the nearest smallest element from left for each element
    for(int i=0; i<n; i++) {
        //pop the elements(indices) from stack until ith element is smaller than or equal to stack's top element
        while(!s.empty() && A[s.top()] >= A[i]) {
            s.pop();
        }
        
        //maintain a left array which stores the indices of elements 
        //assign 0 in ith index if stack is empty otherwise assign s.top()+1
        left[i] = s.empty() ? 0 : s.top()+1;
        
        //push the current index into the stack
        s.push(i);
    }
    
    //empty the stack 
    while(!s.empty()) s.pop();
    
    //finding the nearest smallest element from right for each element
    for(int i=n-1; i>=0; i--) {
        while(!s.empty() && A[s.top()] >= A[i]) {
            s.pop();
        }
        right[i] = s.empty() ? n-1 : s.top()-1;
        s.push(i);
    }
    
    //iterating over left, right and A vectors and finding the maximum area of the rectangle in histogram
    //width = right[i] - left[i] + 1     height = A[i]
    //maxArea = width * height
    int maxArea = INT_MIN;
    for(int i=0; i<n; i++) {
        maxArea = max(maxArea, ((right[i] - left[i] + 1) * A[i]));
    }
    
    return maxArea;
}
