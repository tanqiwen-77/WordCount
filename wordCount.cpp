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
            printf("�����ļ���ȡʧ��\n");
            return -1;
        }        
        
           
       
       if( !strcmp(argv[1],"-c") ){//�ַ���
           char temp;
           int num = 0;
           temp = fgetc(fp);
           while( temp != EOF ){
               //putchar(temp);
           temp = fgetc(fp);
               num++;
           }          
           printf("���ı��ļ����ַ���Ϊ��%d\n",num);
           
        }
        else if( !strcmp(argv[1],"-w") ){//������
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
           printf("���ı��ļ��ĵ�����Ϊ��%d\n",w);
            
      }
      } 
      return 0;
  }
