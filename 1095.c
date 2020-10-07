#include <stdio.h>

int main() {
 int num_1,num_2;
  num_1 = 1;
  num_2 = 60;
  
    for(num_1 = 1,num_2 = 60;num_2 <= 60; num_1+=3,num_2-=5){
        printf("I=%d J=%d\n",num_1,num_2);
        if(num_2 == 0)
            break;
    }
    return 0;
}