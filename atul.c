#include <stdio.h>
void totalsum(){
    int x,y;
    printf("enter the value of x: ");
    scanf("%d",x);
    printf("enter the value of y: ");
    scanf("%d",y);
    printf("sum is %d",x+y);
}
int main() {
    //calling function
    totalsum();

    return 0;
}