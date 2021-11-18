/*@ requires 0 <= n <= 1000;
  @ ensures \result == n*n;
  @ assigns \nothing;
  */
  int sumImp(int n){
      int res = 0;
    /*@ loop invariant 0 <= i <= n;
      @ loop invariant res == i*i;
      @ loop variant n-i;
      @*/
      for(int i = 0; i<n; i++){
        res += 2*i+1;
      }
      return res;
  }
