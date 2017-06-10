#include<stdio.h>
#include<cs50.h>
int main(void){
    int height,iterator,bar,space;
    printf("Please enter height: ");
    height=GetInt();
    for(iterator=0;iterator<=height;iterator++){
        for(space=0;space<height-iterator;space++){
            printf(" ");
        }
        for(bar=0;bar<iterator;bar++){
            printf("#");
        }
        printf("\n");
    }
    
}