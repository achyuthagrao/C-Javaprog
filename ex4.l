%{
	#include<stdio.h>
	int c,v;
%}
%%
[aeiouAEIOU] {v++;}
[a-zA-Z] {c++;}
"\n" {printf("vowels = %d,consonents = %d",v,c);} 
%%
int main()
{ 
printf("enter the string");
yylex();
return 0;
}
int yywrap()
{
return 1;
}
