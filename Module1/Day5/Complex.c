#include <stdio.h>
struct complex
{
    int real;
    int imaginary;

};
void scan(struct complex *var1)
{
    scanf("%d ",&var1->real);
    scanf("%d ",&var1->imaginary);

}
void print(struct complex *var2)
{
    printf("%d ",var2->real);
    printf("%d ",var2->imaginary);
}
void add(struct complex *h1,struct complex *h2)
{
    int sum_real=0;
    int sum_imaginary=0;
    sum_real=h1->real+h2->real;
    sum_imaginary=h1->imaginary+h2->imaginary;
    printf("%d ",sum_real);
    printf("%d ",sum_imaginary);
}
void mul(struct complex *h3,struct complex *h4)
{
    int product_real=0;
    int product_imaginary=0;
    product_real=h3->real*h4->real;
    product_imaginary=h3->imaginary*h4->imaginary;
    printf("%d ",product_real);
    printf("%d ",product_imaginary);
}
int main()
{
struct complex variable1,variable2;
scan(&variable1);
scan(&variable2);
print(&variable1);
print(&variable2);
add(&variable1,&variable2);
mul(&variable1,&variable2);

return 0;



}