#include <stdio.h>
struct box{
    int length;
    int breadth;
    int height;

} var1;
typedef struct box box;
int surfacearea(struct box *);
int volume(struct box *);
int surfacearea(struct box *var1)//In this we are using -> operator
{
    int l1=var1->length;
    int b1=var1->breadth;
    int h1=var1->height;
    int area=2*((l1*b1)+(b1*h1)+(l1*h1));
    return area;

}
int volume(box *var2)//In this we are using . and * operators
{
    int l2=(*var2).length;
    int b2=(*var2).breadth;
    int h2=(*var2).height;
    int vol=l2*b2*h2;
    return vol;

}
int main()
{
    box t1={t1.length=43,t1.breadth=22,t1.height=14};
    printf("Surface area %d\n ",surfacearea(&t1));
    printf("Volume  %d\n ",volume(&t1));
}