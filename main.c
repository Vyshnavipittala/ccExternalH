#include <stdio.h>
#include "arith.h"
int main(){
int a=5,b=10;
printf("addition : %d+%d=%d\n",a,b,add(a,b));
printf("sub : %d-%d=%d\n",a,b,sub(a,b));
return 0;
}
