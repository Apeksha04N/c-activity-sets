//Write a C program to compare three numbers using **pass by value**
#include<stdio.h>
int input();
int compare(int a, int b, int c);
void output(int a, int b, int c, int largest);
int main()
{
    int a,b,c;
    a=input();
    b=input();
    c=input();
    int largest=compare(a,b,c);
    output(a,b,c,largest);
    return 0;
}
int input()
{
    int x;
    printf("Enter the number\n");
    scanf("%d", &x);
    return x;
}
int compare(int a, int b, int c)
{
    int largest;
    if(a>=b && a>=c)
    {
        largest=a;
        return largest;
    }
    if(b>=c && b>=a)
    {
        largest=b;
        return largest;
    }
    else{
        largest=c;
        return largest;
    }
}
void output(int a, int b, int c, int largest)
{
    printf("The largest of %d , %d and %d is %d\n",a,b,c,largest);
}
