#include<stdio.h>
#include<assert.h>
#include<stdbool.h>
bool pattern(int n){
    for(int i=1;i<=n;i++){
        for(int j=0;j<i;j++){
            printf("%d ",i);
        }
        printf("\n");
    }
}
void test(){
    assert(pattern(5)==true);
    printf("\n");
    assert(pattern(1)==true);
    printf("\n");
    assert(pattern(10)==true);
}
int main(){
    test();
    return 0;
}
