#include<stdio.h>
#include<stdbool.h>

bool isPrimeIterative(int N){
    if(N <= 1){
        return false;
    }
    for(int i = 2;i * i <= N;i++){
        if(N % i == 0){
            return false;
        }
   }
   return true;
}
int main(){
    int N;
    scanf("%d",&N);

    if(isPrimeIterative(N)){
        printf("Prime");
    }
    else{
        printf("Not Prime");
    }
}