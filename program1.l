%{
	#include<stdio.h>
	int id=0,op=0,br=0;
%}
%%
[0-9]+ {id++;}
[\+\/\*\=] {op++;}
"(" {br++;}
")" {br--;}
. ;
%%
int main()
{ 
printf("enter the expression");
yylex();
if(br==0 && id==(op+1))
{
printf("valid\n");
printf("the number of operators %d\n",op++);
printf("the number of identifirs is %d\n",id);
}
else
{
printf("invalid expression");
}
return 0;
}
int yywrap()
{
return 1;
}
