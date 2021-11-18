/*@ requires 0 <= n && \valid(t+(0..n-1));
  @ ensures \result <==> \forall int i; 0 <= i < n/2 ==> t[i] == t[n-i-1];
  */
int tabPal(int t[], int n){
  /*@ loop invariant 0 <= i <= n/2;
    @ loop invariant \forall int j; 0<=j<i ==> t[j]==t[n-j-1];
    @ loop assigns i;
    @ loop variant n/2-i;
    @*/
    for(int i = 0; i<n/2; i++){
      if(t[i]!=t[n-i-1])
        return 0;
    }
    return 1;
}
