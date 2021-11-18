/*@ requires 0 <= n && \valid(t+(0..n-1));
  @ ensures \forall int i; 0 <= i < n ==> t[\result] <= t[i];
  */
int tabMin(int t[], int n){
    int ind = 0;
  /*@ loop invariant 1 <= i <= n;
    @ loop invariant \forall int j; 0 <= j < i ==> t[j] >= t[ind];
    @ loop assigns i, ind;
    @ loop variant n-i;
    @*/
    for(int i = 1; i<n; i++){
      if (t[ind]>=t[i])
        ind=i;
    }
    return ind;
}
