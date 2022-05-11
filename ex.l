%{
	#include<stdio.h>
%}
%%
[a-z] {printf("small letters");}
[A-Z] {printf("capital letters");}
[0-9]* {printf("it is a number");}
. ;
%%
int main()
{ 
printf("enter a letter");
yylex();
return 0;
}
int yywrap()
{
return 1;
}
