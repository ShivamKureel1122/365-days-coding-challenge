// Problem - https://www.interviewbit.com/problems/equal/
_____________________________________________________________
// TC -> O(N^2), SC -> O(N)
vector<int> Solution::equal(vector<int> &A) {
    int n = A.size();
    unordered_map<int, pair<int, int>> mp;
    vector<int> ans;
    
    //fix one element and then find the sum by adding that element with other array elements one by one
    for(int i=0; i<n; i++) {
        for(int j=i+1; j<n; j++) {
            //if sum = A[i] + A[j] exists in the map then check the conditions that the indices are fulfilling or not
            if(mp.find(A[i] + A[j]) != mp.end()) {
                pair<int, int> pr = mp[A[i]+A[j]];
                
                //if the below condition is true for the indices then it may be the answer
                if(pr.first < i && pr.second != j && pr.second != i) {
                    //store the indices in the vector
                    vector<int> temp = {pr.first, pr.second, i, j};
                    
                    //if ans is empty then assign temp to it;
                    if(ans.size() == 0) {
                        ans = temp;
                    }
                    else {
                        //select the answer which is lexicographically sorted
                        for(int i=0; i<4; i++) {
                            if(temp[i] > ans[i]) break;
                            else if(temp[i] < ans[i]) {
                                ans = temp;
                                break;
                            }
                        }
                    }
                }
            }
            else {
                //make a new key in the map and assign the pair of indices (i,j) to it 
                mp[A[i] + A[j]] = make_pair(i, j);
            }
        }
    }
    
    return ans;
}
