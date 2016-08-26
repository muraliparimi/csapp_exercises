/*This Program uadd_ok returns 1 if two unsigned integers can be added without any overflow. Else it returns 0 */

#include<stdio.h>

int uadd_ok(unsigned x, unsigned y);

int main(){

unsigned short x;
unsigned short y;

int uadd_ok(unsigned x, unsigned y){

return (x+y) >=x && (x+y) >=y;
}

printf("Result :%d\n",uadd_ok(4294967295,8));

}
