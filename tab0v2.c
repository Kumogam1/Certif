/*@
requires \valid(t+(0..n-1));
requires n >= 0;
@ assigns t[0..n-1];
@ ensures \result == 0 ==> (\forall integer i; 0 <= i < n ==> t[i] == 0);
@*/
int all_zeros(int t[], int n) {
    /*@ loop invariant 0 <= i < n;
      @ loop invariant \forall int j; 0<= j < i ==> t[j] == 0;
      @ loop assigns i, t[0..n-1];
      @ loop variant n - i;
      @*/
    for(int i = 0; i< n; i++){
      t[i] = 0;
    }
    return 0;
}
