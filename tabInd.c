/*@ requires 0 <= n && \valid(t+(0..n-1));
  @ ensures t[\result] == val || \result == -1;
  */
int tabInd(int t[], int n, int val){
    int ind = -1;
  /*@ loop invariant 1 <= i <= n;
    @ loop assigns i, ind;
    @ loop variant n-i;
    @*/
    for(int i = 1; i<n; i++){
      if (t[i]==val){
        ind=i;
        break;
      }
    }
    return ind;
}
