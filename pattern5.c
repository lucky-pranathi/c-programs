//Pyramid Pattern with Increasing Numbers
#include<stdio.h>
#include<assert.h>
#include<stdbool.h>
bool pattern(int n){
    int num=1;
    for(int i=n;i>0;i--){
        for(int j=0;j<i-1;j++){
            printf(" ");
        }
        for(int k=0;k<=n-i;k++){
            printf("%d ",num);
            num++;
        }
        printf("\n");
    }
}
void test(){
    assert(pattern(5)==true);
    printf("\n");
    assert(pattern(2)==true);
    printf("\n");
    assert(pattern(10)==true);
    printf("\n");
    assert(pattern(20)==true);
}
int main(){
    test();
    return 0;
}

