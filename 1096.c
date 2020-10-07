#include <stdio.h>

int main() {
  int num_1,num_2;
    for(num_1 = 1; num_1 <= 9; num_1+=2){
        for(num_2 = 7; num_2 >= 5; num_2--)
            printf("I=%d J=%d\n",num_1,num_2);
    }
    return 0;
}