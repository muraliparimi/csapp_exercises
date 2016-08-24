#include <stdio.h>

int main() {


typedef unsigned char *byte_pointer;
typedef int *int_pointer;

void show_bytes(byte_pointer start, int len){
  int i;
  for(i=0; i<len; i++)
	printf(" %.2x",start[i]);
  printf("\n");
}


void show_bytesi(int_pointer start, int len){
//int i;
printf("12345's address in memory:%.2x\n",start);
printf("12345's value in hex:%.2x\n",*start);
printf(" %.2x ==>%.2x\n",start[0],start[0]);
printf(" %.2x ==>%.2x\n",start[1],start[1]);
printf(" %.2x ==>%.2x\n",start[2],start[2]);
printf(" %.2x ==>%.2x\n",start[3],start[3]);
/*for(i=0; i<len; start[i])
	printf(" %.2x", start[i]);*/
printf("\n");
}

void show_decimal(int x){
show_bytesi(&x, sizeof(int));

}


void show_int(int x){ 

 show_bytes((byte_pointer) &x, sizeof(int));
}

void show_float(float x){
  show_bytes((byte_pointer) &x, sizeof(float));
}

void show_pointer(void *x){
  show_bytes((byte_pointer) &x, sizeof(void *));
}

void test_show_bytes(int val){
int ival = val;
float fval = (float) val;
int *pval = &val;

show_decimal(ival);
show_int(ival);
show_float(fval);
show_pointer(pval);

printf("Integer pointer:0x%x ==> After cast to char pointer:0x%x\n",&ival,(byte_pointer)&ival);
printf("Float pointer:0x%x ==> After cast to char pointer:0x%x\n",&fval,(byte_pointer)&fval);
printf("Pointer's pointer:0x%x ==> After cast to char pointer:0x%x\n",&pval,(byte_pointer)&pval);



}
 
test_show_bytes(12345);

return 0;

}
