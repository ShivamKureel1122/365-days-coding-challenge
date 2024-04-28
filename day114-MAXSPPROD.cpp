// Problem - https://www.interviewbit.com/problems/maxspprod/
________________________________________________________________
// TC -> O(N), SC -> O(N)
#define ll long long
int Solution::maxSpecialProduct(vector<int> &A) {
    ll n = A.size();
    vector<ll> v1(n), v2(n);
    stack<ll> left, right;
    
    for(ll i=0; i<n; i++) {
        while(!left.empty() && A[left.top()] <= A[i]) {
            left.pop();
        }
        v1[i] = left.empty() ? 0 : left.top();
        left.push(i);
    }
    
    for(ll i=n-1; i>=0; i--) {
        while(!right.empty() && A[right.top()] <= A[i]) {
            right.pop();
        }
        v2[i] = right.empty() ? 0 : right.top();
        right.push(i);
    }
    
    ll ans = INT_MIN, mod = 1e9+7;
    
    for(ll i=0; i<n; i++) {
        ans = max(v1[i] * v2[i], ans);
    }
    
    return ans % mod;
