/*@ requires 0 <= n && \valid(s+(0..n-1)) && \valid(t+(0..n-1));
  @ ensures \result <==> \forall int i; 0 <= i < n ==> s[i]==t[i];
  */
int comp(int s[], int t[], int n){
  /*@ loop invariant 0 <= i <= n;
    @ loop invariant \forall int j; 0<=j<i ==> t[j]==s[j];
    @ loop variant n-i;
    @*/
    for(int i = 0; i<n; i++){
      if(t[i]!=s[i])
        return 0;
    }
    return 1;
}
