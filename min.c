/*@
requires \valid(p);
requires \valid(q);
assigns *p;
assigns *q;
ensures max <= *p;
ensures max <= *q;
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
