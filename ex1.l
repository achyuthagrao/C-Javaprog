%{
	#include<stdio.h>
%}
%%
-[0-9]+ {printf("negative number");}
[0-9]+ {printf("positive number");}
. {printf("invalid");} 
%%
int main()
{ 
printf("enter the number");
yylex();
return 0;
}
int yywrap()
{
return 1;
}
