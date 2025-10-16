//Right Angle Triangle with Sequentially Increasing Numbers
#include<stdio.h>
#include<assert.h>
#include<stdbool.h>
bool pattern(int n){
    int num=1;
    for(int i=1;i<=n;i++){
        for(int j=0;j<i;j++){
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
}
int main(){
    test();
    return 0;
}

