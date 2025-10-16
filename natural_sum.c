//Display n Terms of Natural Numbers and Their Sum
#include<stdio.h>
#include<assert.h>
#include<stdbool.h>

bool sum(int n){
    int sum=0;
    for(int i=1;i<=n;i++){
        printf("%d\n",i);
        sum+=i;
    }
    printf("Sum=%d\n",sum);
    return true;
}
void unit_test(){
    assert(sum(5)==true);
    assert(sum(7)==true);
}
int main(){
    unit_test();
}
