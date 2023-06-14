#include <stdio.h>
#include <stdlib.h>

int biggestNumber(int a,int b,int c){
    int biggest;
if(a>b && a>c)
    biggest=a;
else if(b>a && b>c)
    biggest=b;
else
    biggest=c;
return biggest;
}

int main(){
    int num1,num2,num3;
    printf("Enter the First numbers\n");
    scanf("%d",&num1);
    printf("Enter the Second numbers\n");
    scanf("%d",&num2);
    printf("Enter the Third numbers\n");
    scanf("%d",&num3);
    
    int result=biggestNumber(num1,num2,num3);
    printf("Biggest number is: %d\n",result);

    return 0;
}


