#include<stdio.h>
#include<cs50.h>
int main(void){
    int rupee,coin=0;
    float paise;
    printf("Enter Change: ");
    paise=GetFloat();
    rupee=(int)(paise*100);
    coin=coin+rupee/25;
    rupee=rupee%25;
    coin=coin+rupee/10;
    rupee=rupee%10;
    coin=coin+rupee/5;
    rupee=rupee%5;
    coin=coin+rupee;
    printf("%d",coin);
}