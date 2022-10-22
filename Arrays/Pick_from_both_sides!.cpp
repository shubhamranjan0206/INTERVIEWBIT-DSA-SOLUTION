int Solution::solve(vector<int> &A, int B) {

   int n=A.size();
   int ans=INT_MIN;
   
   vector<int> right_sum(B+1,0);
   vector<int> left_sum(B+1,0);
    
   right_sum[1]=A[0];// right_sum[i] shows the sum if i elements taken from right.
    
   left_sum[1]=A[n-1];// left_sum[i] shows the sum if i elements taken from left.

    
   for(int i=2;i<=B;i++){
      right_sum[i]=right_sum[i-1]+A[i-1];
   }

   for(int i=2;i<=B;i++){
      left_sum[i]=left_sum[i-1]+A[n-i];
   }
     
   reverse(left_sum.begin(),left_sum.end());
   
   // if we take i elements from left then we will take B-i elements from right.

   for(int i=0;i<=B;i++){
      ans=max(ans,left_sum[i]+right_sum[i]);
   }   
   
   // ans will store max sum possible from B elements either from left end or right
    
   return ans;
   }
