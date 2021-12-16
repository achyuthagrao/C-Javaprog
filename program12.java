import java.io.*;
import java.util.*;
class program12{
public static void main(String []args)
{
Scanner sc=new Scanner(System.in);
System.out.println("enter message:");
String data=sc.nextLine();
System.out.println("enter the polynomial");
String gen=sc.nextLine();
String code=data;
while(code.length()<(data.length()+gen.length()-1))
                code+="0";
  code=data+div(code,gen);
  System.out.println("transmitted message is "+" "+code);
  String rem=div(code,gen);
  if(Integer.parseInt(rem)==0)
        System.out.println("no error");
   else
         System.out.println("error");
         System.out.println("enter the position of bit");
         int a=sc.nextInt();
         if(code.charAt(a)=='0')
         {
         code=code.substring(0,a)+"1"+code.substring(a+1);
         }
         else
         {
         code=code.substring(1,a)+"0"+code.substring(a+1);
         }
         rem=div(code,gen);
         if(Integer.parseInt(rem)==0)
         {
                System.out.println("error detected");
          }
        else
        {
        System.out.println("no error detected");
        }
        }
        static String div(String str1,String str2)
        {
            int pointer=str2.length();
            String result=str1.substring(0,pointer);
            String remainder="";           
            System.out.println(result.charAt(1));
           
            for(int i=0;i<str2.length();i++)
            {
              if(result.charAt(i)==str2.charAt(i))
              {
               remainder+="0";
              }
              else
              {
               remainder+="1";
              }
            }
           while(pointer<str1.length())
           { 
            if(remainder.charAt(0)=='0')
            {
             remainder=remainder.substring(1,remainder.length());
             remainder=remainder+String.valueOf(str1.charAt(pointer));
             pointer++;
            }
            result=remainder;
            remainder="";   
            if(result.charAt(0)!='0')
            {        
             for(int i=0;i<str2.length();i++)
             {
              if(result.charAt(i)==str2.charAt(i))
              {
               remainder+="0";
              }
              else
              {
               remainder+="1";
              }
             }
            }
            else
            remainder=result;
          }   
     
     return remainder.substring(1,remainder.length());
   }
 }
          
              

