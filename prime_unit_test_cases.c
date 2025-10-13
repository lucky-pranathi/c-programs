// Online C compiler to run C program online
#include <stdio.h>
#include<math.h>
#include<stdbool.h>
#include<assert.h>

bool test_prime(int n){
    for(int i=2;i<=(int)sqrt(n);i++){
        if(n%i==0){
            return false;
        }
    }
    return true;
}
void test_case(){
    assert(test_prime(1)==true);
    assert(test_prime(2)==true);
    assert(test_prime(4)==false);
    assert(test_prime(50)==false);
    printf("All test cases verified");
}

int main() {
    // Write C code here
    test_case();
    return 0;
}
