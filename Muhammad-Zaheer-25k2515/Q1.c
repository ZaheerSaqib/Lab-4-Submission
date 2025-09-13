#include <stdio.h>
int main(){
    int number;
    printf("Enter A Number: ");
    scanf("%d",&number);
    if (number>0){
        printf("Number = %d is Postive", number);
    }
    else if (number<0){
        printf("Number = %d is Negative", number);
    }
    else{
        printf("Number = %d is Zero", number);
    }
    return 0;

}
