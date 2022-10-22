int Solution::coverPoints(vector<int> &A, vector<int> &B) {
    int ans=0;//conmtains the min number of steps.
    for(int i=1;i<A.size();i++)
    {
        // these variables contains the diff between the x and y co-ordinates of the current and prev point.
        int xd=abs(A[i]-A[i-1]);
        int yd=abs(B[i]-B[i-1]);
        
        //if both diff are equal then add any one as we will move daignolly by xd/yd.
        //else we will add the max of both. as first we will move daignolly min(xd,yd) and the move straight rest of the steps.

        if(xd==yd) ans+=xd;
        else if(xd>yd) ans+=xd;
        else if(xd<yd) ans+=yd;
    }
return ans;
}
