// Problem - https://www.interviewbit.com/problems/sort-by-color/
-----------------------------------------------------------------
void Solution::sortColors(vector<int> &A) {
//three pointer solution
    int l = 0, m = 0, h = (int)A.size() - 1;
    while(m <= h) {
        if(A[m] == 0) {
            swap(A[l], A[m]);
            l++; m++;
        }
        else if(A[m] == 1) {
            m++;
        }
        else {
            swap(A[m], A[h]);
            h--;
        }
    } 
         --------------------OR----------------------
//counting all 0, 1, 2 and over writing in array
    int len = A.size();
    int count0 = 0, count1 = 0, count2 = 0;
    for(int i=0; i<len; i++) {
        if(A[i] == 0) count0++;
        else if(A[i] == 1) count1++;
        else count2++;
    }
    int i = 0, j = count0, k = count0 + count1;
    while(count0 != 0 || count1 != 0 || count2 != 0) {
        if(count0 > 0) {
            A[i++] = 0;
            count0--;
        }
        if(count1 > 0) {
            A[j++] = 1;
            count1--;
        }
        if(count2 > 0) {
            A[k++] = 2;
            count2--;
        }
    } 
}
