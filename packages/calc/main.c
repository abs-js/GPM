#include <stdio.h>
int main(void){
    int a, b; char op;
    printf("a op b: ");
    if(scanf("%d %c %d", &a, &op, &b)!=3) return 1;
    if(op=='+') printf("%d\n", a+b);
    else if(op=='-') printf("%d\n", a-b);
    else if(op=='*') printf("%d\n", a*b);
    else return 1;
    return 0;
}
