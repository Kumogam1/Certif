/*@
requires \valid(p);
requires \valid(q);
assigns *p;
assigns *q;
ensures max == \old(*q);
ensures *q == \old(*p);
*/
int min(int* p, int* q){
  int min;
  if(*p < *q){
    min = *p;
  }
  else{
    min = *q;
  }
  return min;
}
