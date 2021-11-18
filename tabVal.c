/*@ requires 0 <= n && \valid(t+(0..n-1));
  @ assigns t[0..n-1];
  @ ensures \forall int i; 0 <= i < n ==> t[i] == val;
  */
void tabVal(int t[], int n, int val){
  /*@ loop invariant 0 <= i <= n;
    @ loop invariant \forall int j; 0 <= j < i ==> t[j] == val;
    @ loop assigns i, t[0..n-1];
    @ loop variant n-i;
    @*/
    for(int i = 0; i<n; i++){
      t[i]=val;
    }
}
