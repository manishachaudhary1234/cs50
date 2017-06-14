#include<stdio.h>
#include<cs50.h>
#include <string.h>
int main(void){
     printf("Enter full name: ");
     string name= GetString();
     int n= strlen(name);
      if(name[0]!=' '){
         printf("%c ",name[0]); 
      }
       for(int i = 0; i < n; i++) {
       if(name[i] == ' ' && name[i+1]!=' ' && name[i+1] != '\0') {
        printf("%c ",name[i+1]);
        i++;
       }
   }
   printf("\n");

     return 0;
}