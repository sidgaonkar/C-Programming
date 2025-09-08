/*
char is 1 byte of data 
range : -128 to 127

unsigned char : 0 to 255

----------Format Specifier-------------
%d-- integer
%x-- hex
%o-- octal
%c-- char
%p-- address

&--address of variables
*/

/*
------------Variables--------------------
variable name is assigned to memory address to retrieve the data
<datatype> <Variable name>

char myscore; //cariable defination
myscore=25    // variable initiialization

------------Variable Scope--------------------
when the variable is created inside a function it is called local variable
when the variable is vreated outside a function it is called Global Variable
 */

 /*----------Storage Classes-----------------
 -static:-- static makes the variable accessible only in the class, it cuts acess to outside world
 Extern:-- is used to accss the global variable whici is defined outside the scope of file
 
 
 */
#include <stdio.h>
#include "math.h"

int main()
{
    // unsigned char Temperature; // this is variable defination
    
    // Temperature = 25; // this is variable initialization
    // unsigned int data1,data2,data3;
    // data1=160;
    // data2=40;
    // data3 = data1+data2;

    // unsigned long int addressofdata1 = (unsigned long int)&data1; //typecasting pointer to a number

    // printf("Total Distance form A2C is: %d \n",data3);
    // printf("-------Printing the Address of the variable----------");
    // printf("address of data1:%p data2:%p data3:%p",&data1,&data2,&data3);
    // printf("The Addition is: %d \n",Addition(5,2));
    // printf("The Multiply is: %d \n",Multiply(5,2));
    // printf("The Subtract is: %d \n",Subtract(5,2));
    // printf("The Divide is: %d \n",Divide(5,2));



    // Bitwise Operations
    // int num1,num2,bitwiseOR,bitwiseAND;

    // printf("\nEnter Two Number:\n");
    // scanf("%d %d",&num1,&num2);
    // bitwiseOR = num1|num2;
    // bitwiseAND = num1&num2;

    // printf("The Result of BitWiseOR is %d and BitWiseAND is %d\n",bitwiseOR,bitwiseAND);
    // return 0;


    /*Checking the given number is Even or Odd using Bit Testing Logic
    int num1;
    printf("\nEnter the number\n");
    scanf("%d",&num1);

    if (num1 & 1)
    {
        printf("%d number is the Odd Number\n",num1);
    }
    else{
        printf("%d number is the Even Number\n",num1);
    }
    return 0;
    */

    /* Setting of the Bit
    int num,output;
    printf("\nEnter the number\n");
    scanf("%d",&num);
    output = num|0x90;

    printf("[input] [output] : 0x%x 0x%x\n",num,output);
    return 0;
    */

    




    


}
