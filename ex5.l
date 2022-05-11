%{
	#include<stdio.h>
	int l=0,w=0,ch=0;
%}
%%
"\n" {l++,w++;}
[ ] {w++;}
[A-Za-z0-9] {ch++;}
. ;
%%
int main()
{ 
printf("enter a string");
yylex();
printf("no of lines=%d,no of words=%d,no of charecter=%d",l,w,ch);
return 0;
}
int yywrap()
{
return 1;
}
