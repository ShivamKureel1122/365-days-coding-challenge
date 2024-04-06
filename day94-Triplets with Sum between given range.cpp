// Problem - https://www.interviewbit.com/problems/triplets-with-sum-between-given-range/
___________________________________________________________________
// TC -> O(nlogn), SC -> O(1)
int Solution::solve(vector<string> &A) {
    int i = 0, j = A.size()-1;
    sort(A.begin(), A.end());
    
    while(j-i >= 2) {
        double a = stof(A[i]);
        double b = stof(A[j]);
        double c = stof(A[(i+j)/2]);
        
        double sum = a + b + c;
        
        if(sum >= 2) {
            j--;
        }
        else if(sum <= 1) {
            i++;
        }
        else {
            return 1;
        }
    }
    return 0; 
}
