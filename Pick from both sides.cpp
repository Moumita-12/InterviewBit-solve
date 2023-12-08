int Solution::solve(vector<int> &A, int B) {
    
    int currentsum = 0, maxsum, i,j;
    
    for(i =0; i<B; i++){
        currentsum += A[i];
    }
    
    maxsum = currentsum;
    
     for(i=B-1, j=A.size()-1; i>=0; i--, j--){
        currentsum = currentsum - A[i] + A[j];
        
        maxsum = max(currentsum , maxsum );
    }
    
    return maxsum;
}
