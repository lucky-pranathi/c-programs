#include<stdio.h>
int main(){
    for(int i=0;i<6;i++){
        if(i==0){
            printf("**");
            for(int j=0;j<6;j++){
                printf(" ");
            }
            printf("*");
            for(int j=0;j<3;j++){
                printf(" ");
            }
            printf("*");
            for(int j=0;j<9;j++){
                printf(" ");
            }
            printf("*");
            for(int j=0;j<1;j++){
                printf(" ");
            }
            for(int k=0;k<5;k++){
                printf("*");
            }
        }
        else if(i==1){
            printf("**");
            for(int j=0;j<5;j++){
                printf(" ");
            }
            printf("* *");
            for(int j=0;j<3;j++){
                printf(" ");
            }
            printf("*");
            for(int j=0;j<7;j++){
                printf(" ");
            }
            printf("*");
            for(int j=0;j<2;j++){
                printf(" ");
            }
            printf("*");
        }
        else if(i==2){
            printf("**");
            for(int j=0;j<4;j++){
                printf(" ");
            }
            printf("*   *");
            for(int j=0;j<3;j++){
                printf(" ");
            }
            printf("*");
            for(int j=0;j<5;j++){
                printf(" ");
            }
            printf("*");
            for(int j=0;j<3;j++){
                printf(" ");
            }
            for(int k=0;k<5;k++){
                printf("*");
            }
        }
        else if(i==3){
            printf("**");
            for(int j=0;j<4;j++){
                printf(" ");
            }
            printf("*   *");
            for(int j=0;j<4;j++){
                printf(" ");
            }
            printf("*   *");
            for(int j=0;j<4;j++){
                printf(" ");
            }
            printf("*");
        }
        else if(i==4){
            for(int j=0;j<5;j++){
                printf("*");
            }
            for(int j=0;j<2;j++){
                printf(" ");
            }
            printf("* *");
            for(int j=0;j<6;j++){
                printf(" ");
            }
            printf("* *");
            for(int j=0;j<5;j++){
                printf(" ");
            }
            printf("*");
        }
        else if(i==5){
            for(int j=0;j<5;j++){
                printf("*");
            }
            for(int j=0;j<3;j++){
                printf(" ");
            }
            printf("*");
            for(int j=0;j<8;j++){
                printf(" ");
            }
            printf("*");
            for(int j=0;j<6;j++){
                printf(" ");
            }
            for(int j=0;j<5;j++){
                printf("*");
            }
        }
        printf("\n");
    }
}
