#include<stdio.h>
#include<string.h>
void sreverse(char* str1,char *str2)
{
    int n = strlen(str1);
    int m = strlen(str2);
    char b[n];
    char c[m];
    strcpy(b,str1);
    strcpy(c,str2);
    for(int i = 0;i < n;i++)
    { 
        str1[i] = b[n-i-1]; 
    }
    for(int i =0;i < m;i++)
    {
        str2[i] = c[m-i-1];
    }
}
int main()
{
    char str1[200];
    printf("ENTER THE FIRST STRING: ");
    scanf("%s",&str1);
    char str2[200];
    printf("ENTER THE SECOND STRING: ");
    scanf("%s",&str2);
    int a;
    printf("PRESS 1 FOR STRING COMPARISION\nPRESS 2 FOR STRING CONCATATION\nPRESS 3 FOR STRING REVERSAL\nPRESS 4 FOR STRING LENGTH COMPARISION\n");
    scanf(" %d",&a);
    switch (a)
    {
        case 1:
        int x =0;
        int i = strcmp(str1,str2);
        if(i == 0)
        {
            x = 1;
        }
        else if(i<0)
        {
            x = 2;
        }
        else
        {
            x = 3;
        }
        switch(x)
        {
            case 1:
                printf("BOTH THE STRINGS ARE SAME");
            break;
            case 2:
                printf("STRING 1 IS SMALLER THAN STRING 2");
            break;
            case 3:
                printf("STRING 1 IS GREATER THAN THAN STRING 2");
            break;
        }
        break;
        case 2:
        strcat(str1,str2);
        printf("THE CONCATED STRING IS: %s",str1);
        break;
        case 3:
        sreverse(str1,str2);
        printf("THE NEW REVERSED STRING ARE %s AND %s",str1,str2);
        break;
        case 4:
        int k = strlen(str1);
        int l = strlen(str2);
        if(k == l)
        {
        printf("BOTH THE STRINGS ARE EQUAL LENGTH");
        }
        else if(k > l)
        {
        printf("FIRST STRING IS BIGGER THAN SECOND STRING");
        }
        else
        {
        printf("SECOND STRING IS BIGGER THAN FIRST STRING");
        }
        break;
        default :
        printf("INVALID ENTRY");
        break;

    }
}