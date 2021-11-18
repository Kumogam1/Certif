/*@ requires 0 <= n && \valid(s+(0..n-1)) && \valid(t+(0..n-1));
  @ assigns t[0..n-1];
  @ ensures \forall int i; 0 <= i < n ==> s[i] == t[i];
  */
void copie1(int s[], int t[], int n){
  /*@ loop invariant 0 <= i <= n;
    @ loop invariant \forall int j; 0 <= j < i ==> s[j] == t[j];
    @ loop assigns i, t[0..n-1];
    @ loop variant n-i;
    @*/
    for(int i = 0; i<n; i++){
      t[i]=s[i];
    }
}
