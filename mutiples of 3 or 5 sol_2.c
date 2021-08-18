//solution 2
#include <stdio.h>

int main(){
    int sum3 = 0;
    int sum5 = 0;
    int sum53 = 0;
    for(int i = 1; i < 1000; i++){
        if(i % 3 == 0 ){
            sum3 += i;
        }
    }
    for(int j = 1; j < 1000; j++){
        if(j % 5 == 0){
            sum5 += j;
        }
    }
    for(int k = 1; k< 1000; k++){
        if(k % 3 == 0 && k % 5 == 0){
            sum53 += k;
        }
    }

    printf("%d",sum3 + sum5 - sum53);
}
