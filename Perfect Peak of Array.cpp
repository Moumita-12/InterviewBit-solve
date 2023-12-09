int isPerfectPeak(int i, vector<int> &A) {
 
    for(int j=0 ; j<i; j++){
        if(A[j]>=A[i])  return 0;
    }
    
    for(int j=i+1 ; j<A.size(); j++){
        if(A[j]<=A[i])  return 0;
    }
    
    return 1;
}

int Solution::perfectPeak(vector<int> &A) {
    
    int n = A.size();
    
    for(int i =1; i<n-1; i++){
        if(isPerfectPeak(i,A)){
            return 1;
        }
    }
    
    return 0;
}
