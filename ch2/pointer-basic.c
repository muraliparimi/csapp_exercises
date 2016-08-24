#include <stdio.h>

int main(){

int val = 100;
int *pval = &val;

printf("value of variable:%d\naddress of variable with &:0x%x\naddress of variable from pointer:0x%x\nvalue of variable from pointer:ox%x\naddress of pointer:0x%x\n",val,&val,pval,*pval,&pval); 

return 0;
}
