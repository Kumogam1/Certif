/*@ requires \valid(t+(0..n-1));
@ ensures t+(0..n-1) == 0;
@*/
int all_zeros(int t[], int n) {
    /*@ loop invariant n;
      @ loop variant i;
      @*/
    for(int i = 0; i<n; i++){
      t[i] = 0;
    }
    return n;
}
