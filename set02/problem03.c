//03.  Write a program find whether a number is a composite number
#include <stdio.h>
#include <math.h>
int input_number();
int is_composite(int n);
void output(int n, int result);
int main()
{
    int n=input_number();
    int result=is_composite(n);
    output(n,result);
    return 0;
}
int input_number()
{
    int n;
    printf("Enter the number\n");
    scanf("%d",&n);
    return n;
}

/* What is a composite number
    A number which has a factor other than 1 and itself
    what is a factor.
    A factor divides a given number completely.
    The remainder should be zero.
    How do you find the remainder of a divided b.
    a%b
    b is one of 2 to sqrt(n).
    Can there be a number greater than n/2 which can divide n?
    no
    can there number greater than sqrt(n) which divide n and quotient which is less than sqrt(n)?
        
     if (n==1)
        return 0;
        
    for(int b=2;b<=sqrt(n);b++) {
        if ( n%b == 0 )
        {
            return 0;
        }
    }
    return 1;
    }
    A number which more than 2 factors. 

*/

int is_composite(int n)
{
    int count=0;
    for(int i=0;i<n;i++) 
    {
        if(n%i == 0)
        {
            count++;
        }
    }
    return count;
}
void output(int n, int result)
{
    if(result>=2)
    {
        printf("The given number %d is composite\n",n,result);
    }
    else if(result==1){
        printf("1 is neither a prime nor a composite\n");
    }
    else{
        printf("The given number %d is not composite\n",n,result);
    }
}