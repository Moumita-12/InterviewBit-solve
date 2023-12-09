int Solution::maxp3(vector<int> &A) {
    
    sort(A.begin(), A.end());
    
    int n = A.size();
    
    int m1 = A[n-1] * A[n-2] * A[n-3];
    int m2 = A[0] * A[1] * A[n-1];
    
    int result = max(m1,m2);
    
    return result;
}
