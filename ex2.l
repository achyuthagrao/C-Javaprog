%{
	#include<stdio.h>
%}
%%
"hello" {printf("Welcome");}
. ;
%%
int main()
{ 
printf("enter a string");
yylex();
return 0;
}
int yywrap()
{
return 1;
}
