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
#include <stdio.h>

int main()
{
    // unsigned char Temperature; // this is variable defination
    
    // Temperature = 25; // this is variable initialization
    unsigned int data1,data2,data3;
    data1=160;
    data2=40;
    data3 = data1+data2;

    unsigned long int addressofdata1 = (unsigned long int)&data1; //typecasting pointer to a number

    printf("Total Distance form A2C is: %d \n",data3);
    printf("-------Printing the Address of the variable----------");
    printf("address of data1:%p data2:%p data3:%p",&data1,&data2,&data3);


    return 0;
}
