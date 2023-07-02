#include<stdio.h>
/*Computes the dimensional weight of a "12*10"*box*/
int main(void)
{   
    int height ,length,width,volume,weight;
    height=8;
    length=12;
    width=10;
    volume=height*length*width;
    weight=(volume+165)/166;
    printf("Dimensions :%dx%dx%d\n",length,width,height);
    printf("Volume(Cubic inches):%d\n",volume);
    printf("Dimensional weight(Pounds):%d\n",weight);
    return 0;

}
