#include<stdio.h>
#include<string.h>
int main()
{
	char str1[10] ="vikky";
	char str2[10] ;
    char str3[10] ;
    strcpy(str2,str1);
    strcpy(str3,"vivek");
    printf("str2 = %s\n",str2);
    printf("str3 = %s\n",str3);
    return 0;
}