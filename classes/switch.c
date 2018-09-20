#include <stdio.h>
int c;
int main(){
    for (c=0; c<=3; c++ ){
        printf("c: %d\n", c);

        switch(c){
            case 1:
                printf("Here is 1\n");
                break;
            case 2:
                printf("Here is 1\n");
                break;
            case 3:
                case 4:
                    printf("Here is 3, 4\n");
                    break;
            default:
                printf("here is default\n");
        }
    }
    return 0;
}