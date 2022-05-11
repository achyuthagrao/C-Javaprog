%{
	#include<stdio.h>
	int sig=0,dou=0;
%}
%%
[/][/] {sig++;}
"*/"  {dou++;} 
. ;
%%
int main()
{ 
yyin=fopen("program2.txt","r");
yylex();
printf("no of single line comment %d\n",sig);
printf("no of double line comment %d\n",dou);
return 0;
}
int yywrap()
{
return 1;
}
