/*@ requires -100000 <= x <= 100000 && -100000 <= y <= 100000
  @ ensures \result == x*y;
  */
  int sumTab(int x, int y){
      int res = 0
    /*@ loop invariant 0 <= i <= x;
      @ loop invariant res == (i+1)*y;
      @ loop variant x-i;
      @*/
      for (int i = 0; i < x; i++) {
        res += y;
      }
      return res;
  }
