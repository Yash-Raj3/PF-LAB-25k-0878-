
double climbStairs(double n) {
   if(n==1)return 1;
   if(n==2)return 2;

  double n1=1,n2=2,next_step;
  for(int i=3;i<=n;i++){
    next_step = n1+n2;
    n1 = n2;
    n2 = next_step;
  }
  return n2;
}


