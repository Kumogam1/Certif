/*@ requires 0 <= n && \valid(s+(0..n-1)) && \valid(t+(0..n-1)) && \valid(r+(0..n-1)) && \forall int i; 0 <= i < n ==> -1000000000 <= t[i] <= 1000000000 && \forall int i; 0 <= i < n ==> -1000000000 <= s[i] <= 1000000000;
  @ ensures \forall int i; 0 <= i < n ==> r[i] == t[i] + s[i];
  @ assigns r[0..n-1];
  */
  void sumTab(int t[], int s[], int r[], int n){
    /*@ loop invariant 0 <= i <= n;
      @ loop invariant \forall int j; 0 <= j < i ==> r[j] == t[j] + s[j];
      @ loop variant n-i;
      @*/
      for (int i = 0; i < n; i++) {
        r[i] = t[i] + s[i];
      }
  }
