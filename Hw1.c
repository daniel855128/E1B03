#include <stdio.h>
#include <stdlib.h>

int main(){
 printf("0000000000000000\n"
       "0000000000000000\n"
       "0000000000000000\n"
       "0000000000000000\n"
       "0000000000000000\n"
       "0000000000000000\n"
       "0000000000000000\n"
       "0000000000000000\n"
       "0000000000000000\n"
       "0000000000000000\n"
       "0000000000000000\n"
       "0000000000000000\n"
       "0000000000000000\n"
       "0000000000000000\n"
       "0000000000000000\n"
       "0000000000000000\n"
       "0000000000000000\n"
       "0000000000000000\n"
       "0000000000000000\n"
       "0000000000000000\n"
       "0000000000000000\n");  

       system("read -n 1 -s");
       system("clear");

       int pwd;

       printf("請輸入四位數密碼:\n");
       scanf("%d",  &pwd);

       if (pwd== 2026){
        printf("welcome \n");
       }else{printf("wrong\n");
        return 0;}

        printf("------------------------\n"
           "| 'A'...'Z' : Uppercase|\n"
           "| 'a'...'z' : lowercase|\n"
           "| '0'...'9' : Digit    |\n"
           "|otherwise : Your Name |\n"
           "------------------------\n");

       system("read -n 1 -s");
       system("clear");  

       char ch;
       printf("請輸入一個字元:\n");
       scanf(" %c", &ch);

       if(ch >= 'A' && ch <= 'Z') {
         printf("Uppercase\n");
       }
       else if (ch >= 'a' && ch <= 'z') {
         printf("Lowercase\n");    
       }
       else if (ch >= '0' && ch <= '9') {
         printf("Digit\n");
       } 
       else {
         printf("E1b03 李佳承\n");
       }
           return 0;
    }