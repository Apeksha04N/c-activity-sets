// 06. Write a program to reverse a string.
#include <stdio.h>
void input_string(char *a);
void str_reverse(char *str, char *rev_str);
void output(char *a, char *reverse_a);
int main()
{
    char a, str[10], rev_str[10], reverse_a[10];
    input_string(&a);
    str_reverse(&str, &rev_str);
    output(&a, &reverse_a);
    return 0;
}
void input_string(char *a)
{
    printf("Enter the string\n");
    scanf("%s", &a);
}
void str_reverse(char *str, char *rev_str)
{
    for(int i=0; i<=10 ; i++)
    {
    printf("Enter the string\n");
    scanf("%s", &str[i]);
    
    }
}
void output(char *a, char *reverse_a)
{
}