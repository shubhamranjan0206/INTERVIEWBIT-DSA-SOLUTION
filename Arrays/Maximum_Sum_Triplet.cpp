int Solution::solve(vector<int> &A) {
   
   int n=A.size();
   vector <int> right(n);
   set <int> left;
   right[n-1]=A[n-1];
   for(int i=n-2;i>=0;i--){
      right[i]=max(A[i],right[i+1]);
   }
    // for(int i=0;i<n;i++)
    // {cout<<right[i]<<" ";}
   int ans=0;
   left.insert(A[0]);
   for (int i=1;i<n;i++){
      left.insert(A[i]);
      auto it=left.find(A[i]);
      if(it!=left.begin() && i<n-1 ){
      int x=*(--it);
      if(x<A[i] && A[i]<right[i])
      {ans=max(ans,x+A[i]+right[i]);}}
   }
return ans;
}