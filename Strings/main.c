#include<stdint.h>
#include<stdio.h>

int main(void){
    char string1[]="Hello how are you?";
    char string2[]={'H','e','l','l','o'};
    char string3[6]={'H','e','l','l','o','\0'};
    char string4[100];

    // printf("Size of String1 is : %d\n",sizeof(string1));
    // printf("Size of String2 is : %d\n",sizeof(string2));
    // printf("Size of String3 is : %d\n",sizeof(string3));
    // printf("Enter a String : ");
    // scanf("%s",string4);
    // printf("You Entered : %s\n",string4);
    // printf("Size of String4 is : %d\n",sizeof(string4));

    printf("the message is: %s\n",string1);
    printf("Address of message 1 variable is: %p\n",&string1);
    





    return 0;
}