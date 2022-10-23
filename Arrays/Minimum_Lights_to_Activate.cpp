int Solution::solve(vector<int> &A, int B) {
    int n=A.size();
    int bulb=0;
    int i=0;
    while(i<n){
        int index=-1;
        
        for(int j=i+B-1;j>=i-B+1;j--){
            if(A[j]==1 && j>=0 && j<n)
            {index=j;
            break;}
        }
        
        if(index==-1){
            return -1;
        }
        else{
            bulb++;
            i=index+B;
        }
     }
return bulb;}