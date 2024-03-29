/*@
requires \valid(p);
requires \valid(q);
requires \valid(min);
assigns *min;
ensures *min <= *p;
ensures *min <= *q;
ensures *min == *p || *min == *q;
*/
void min(int* p, int* q, int* min){
  if(*p < *q)
    *min = *p;
  else
    *min = *q;
}
