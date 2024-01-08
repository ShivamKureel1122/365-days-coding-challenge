// Problem - https://www.interviewbit.com/problems/add-one-to-number/
----------------------------------------------------------------
vector<int> shiftElements(vector<int> &a, int index) {
    int size = a.size(), i, j = 0;
    if(index == 0) {
        vector<int> result1(size + 1, 0);
        for (i = size - 1; i >= index; i--) 
            result1[i + 1] = a[i];
        result1[index] = 1;
        return result1;
    }
    vector<int> result2(size - index, 0);
    for(int i=index; i<size; i++) 
        result2[j++] = a[i];    
    return result2;
}
vector<int> Solution::plusOne(vector<int> &A) {
    int size = A.size(), i = size-1;
        while(i >= 0) {
            if(A[i] < 9) {
               A[i]++;
               if(A[0] == 0) break;
               return A;
            } 
            else A[i] = 0;
            i--;
        }
        if(i == -1)
           return shiftElements(A, 0);
        else {
            i = 0;
            while(i < size && A[i] == 0) i++;
            return shiftElements(A, i);
        }     
} 
