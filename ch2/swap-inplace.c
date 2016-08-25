#include<stdio.h>
//void inplace_swap(int *x, int *y);
//void revers_array(int a[], int cnt);

int main(){

int a[11];
int i,j,k;
int l=sizeof(a)/sizeof(int);
void inplace_swap(int *x, int *y){
*y = *x ^ *y;
*x = *x ^ *y;
*y = *x ^ *y;
}

for(k=0;k<l;k++)
   a[k]=(k+1)*(k+1);

printf("Length of array is %d\n",sizeof(a)/sizeof(int));

void reverse_array(int a[], int cnt){
int first, last;
for(first=0, last =cnt-1; first<last; first++,last--)
	inplace_swap(&a[first], &a[last]);
}

for(i=0; i<l; i++)
  printf("%d ",a[i]);
printf("\n");

reverse_array(a,l);

for(j=0; j<l; j++)
  printf("%d ",a[j]);
printf("\n");
return 0;
}
