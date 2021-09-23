/*@
requires \valid(p);
requires \valid(q);
requires \valid(min);
assigns *p;
assigns *q;
assigns min;
ensures min <= p;
ensures min <= q;
*/
int min(int* p, int* q){
  int min;
  if(*p < *q)
    min = *p;
  else
    min = *q;
  return min;
}
