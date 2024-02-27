// 05.  Write a program to find GCD _(HCF)_ of two numbers.
#include <stdio.h>
#include <math.h>
int input();
int find_gcd(int a, int b);
void output(int a, int b, int gcd);
int main()
{
    int a, b;
    a = input();
    b = input();
    int gcd = find_gcd(a, b);
    output(a, b, gcd);
    return 0;
}
int input()
{
    int n;
    printf("Enter the number\n");
    scanf("%d", &n);
    return n;
}
/*What is gcd?
greatest common divisor..
*/
int find_gcd(int a, int b)
{
    int c;
    for(int i=0;;i++)
    {
        c=a%b;
        if(c==0)
        {
            return b;
        }
        else{
            a=b;
            b=c;
        }
    }
}
void output(int a, int b, int gcd)
{
    printf("The gcd of %d and %d is %d", a, b, gcd);
}