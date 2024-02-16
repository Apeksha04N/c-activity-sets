//02.  Write a program to find if a triangle is scalene.
#include <stdio.h>
float input_side();
float check_scalene(float a, float b, float c);
void output(float a, float b, float c, int isscalene);
int main()
{
    float a,b,c;
    a=input_side();
    b=input_side();
    c=input_side();
    int isscalene=check_scalene(a,b,c);
    output(a,b,c,isscalene);
    return 0;
}
float input_side()
{
    float x;
    printf("enter the side of a triangle\n");
    scanf("%f",&x);
    return x;
}
float check_scalene(float a, float b, float c)
{
    if(a!=b && a!=c && b!=c && b!=a && c!=a && c!=b)
    {
        return 0;
    }
    else
    {
        return 1;
    }
}
void output(float a, float b, float c, int isscalene)
{
    if(isscalene==0)
    {
    printf("The triangle with sides %f, %f and %f is scalene\n",a,b,c,isscalene);
    }
    else if(isscalene==1)
    {
        printf("The triangle with sides %f, %f and %f is not scalene\n",a,b,c,isscalene);
    }
}