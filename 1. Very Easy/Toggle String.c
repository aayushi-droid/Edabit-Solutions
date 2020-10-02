#include<stdio.h>
#include<string.h>
 
   
int main() 

{ 
   char str[100];
   printf("Enter the string\n");
    scanf("%s",str);
    int n=strlen(str);
   
    for(int i=0;i<=n;i++)
    {
    	if(str[i]>='a'&&str[i]<='z')
    	{
    		str[i]=str[i]-32;
		}else 	if(str[i]>='A'&&str[i]<='Z')
    	{     
			str[i]=str[i]+32;
		}
	}
       
    printf("%s",str);
    return 0; 
} 
