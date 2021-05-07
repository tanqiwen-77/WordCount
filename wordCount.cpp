#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h> 
int main(int argc, char *argv[])
{
     if( argc == 3 ){
         char data;
       FILE *fp = fopen(argv[2],"r");
       
       if(!fp){
            printf("错误：文件读取失败\n");
            return -1;
        }        
        
           
       
       if( !strcmp(argv[1],"-c") ){//字符数
           char temp;
           int num = 0;
           temp = fgetc(fp);
           while( temp != EOF ){
               //putchar(temp);
           temp = fgetc(fp);
               num++;
           }          
           printf("该文本文件的字符数为：%d\n",num);
           
        }
        else if( !strcmp(argv[1],"-w") ){//单词数
            int w = 0;
          char a = fgetc(fp);
          while( a != EOF){
               if( (a >='a' && a <='z') || ( a >='A' && a <='Z') || ( a >='0' && a <='9') ){
                   while( (a >='a' && a <='z') || ( a >='A' && a <='Z') || ( a >='0' && a <='9') )
                       a =fgetc(fp);
                   w++;
                   a =fgetc(fp);
                   
               }
               else
                   a =fgetc(fp);
           }
           printf("该文本文件的单词数为：%d\n",w);
            
      }
      } 
      return 0;
  }
