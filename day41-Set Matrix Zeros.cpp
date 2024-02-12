// Problem - https://www.interviewbit.com/problems/set-matrix-zeros/
------------------------------------------------------------------
void Solution::setZeroes(vector<vector<int> > &A) {
    int m = A.size(), n = A[0].size();

    // Opimal Solution
    // TC - O(m*n) and SC - O(1)
    int a = 1, i, j;
    for(i=0; i<m; i++) {
        for(j=0; j<n; j++) {
            if(A[i][j] == 0) {
                // row marking
                A[i][0] = 0;
                
                // column marking
                if(j != 0)
                    A[0][j] = 0;
                else 
                    a = 0;
            }
        }
    }
    
    for(i=1; i<m; i++) {
        for(j=1; j<n; j++) {
            if(!A[i][0] || !A[0][j]) {
                A[i][j] = 0;
            }
        }
    }
    
    if(!A[0][0]) {
        for(i=0; i<n; i++) A[0][i] = 0;
    }
    if(!a) {
        for(i=0; i<m; i++) A[i][0] = 0;
    } 

  // Better Solution
 /* vector<int> col(n, 0);
    vector<int> row(m, 0);
    int i, j;
    
    for(i=0; i<m; i++) {
        for(j=0; j<n; j++) {
            if(A[i][j] == 0) { // marking of row and column
                row[i] = 1;
                col[j] = 1;
            }
        }
    } 
    
    for(i=0; i<m; i++) {
        for(j=0; j<n; j++) {
            if(row[i] || col[j]) 
                A[i][j] = 0;
        }
    } */
    
}
