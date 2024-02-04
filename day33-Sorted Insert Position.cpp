// Problem - https://www.interviewbit.com/problems/sorted-insert-position/
----------------------------------------------------------------
// recursive approach
int bSearch(int l, int h, vector<int> &arr, int target) {
    int mid = l + (h - l) / 2;
    if(l <= h) {
        if(arr[mid] == target) 
            return mid;
        else if(arr[mid] > target) 
            return bSearch(l, mid-1, arr, target);
        else 
            return bSearch(mid+1, h, arr, target);
    } 
    return l;
} 
int Solution::searchInsert(vector<int> &A, int B) {
    return bSearch(0, A.size()-1, A, B);

 // iterative approach
 /* int l = 0, h = A.size()-1, mid, index;
    while(l <= h) {
        int mid = (l + h) / 2;
        if(A[mid] == B) {
            index = mid; break;
        }
        else if(A[mid] < B) {
            l = mid + 1;
            index = l;
        } 
        else {
            h = mid - 1;
            index = mid;
        }
    } return index; */
}
