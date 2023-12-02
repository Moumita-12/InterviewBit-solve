int Solution::solve(vector<int> &A) {
    
    int min_value = 1000000001;
    int max_value = -1000000001;
    
    for(int i=0;i<A.size();i++){
        min_value = min(A[i], min_value);
        max_value = max(A[i], max_value);
        
    }
    
    return max_value + min_value;
    
}
