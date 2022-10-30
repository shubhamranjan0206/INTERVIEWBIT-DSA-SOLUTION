//kadane algorithm
int Solution::maxSubArray(const vector<int> &A) {
   int maxi=A[0];
   int n=A.size();
   int curr=A[0];
   for(int i=1;i<n;i++){
       if(curr<0){
           curr=0;
       }
       curr=curr+A[i];
       maxi=max(curr,maxi);
   }
   return maxi;
}
