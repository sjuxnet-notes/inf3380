// Type *p pointer to variable of datatype Type
// from var to pointer: 
void var2p(void){
  int a; 
  int *p;
  p = &a;
}

void main(void){
  var2p();
  return 0;
}
