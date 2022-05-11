%{
	#include<stdio.h>
	#include<stdlib.h>
	int yyerror();
	int yylex();
%}
%token A B
%%
Start:S '\n'{printf("valid expression");exit(0);}
S:A S B {printf("valid expression");exit(0);} 
|
;
%%
int main()
{
printf("enter the input");
yyparse();
return 0;
}
int yyerror()
{
printf("invalid");
exit(0);
}
