/*
char is 1 byte of data 
range : -128 to 127

unsigned char : 0 to 255

----------Format Specifier-------------
%d-- integer
%x-- hex
%o-- octal
%c-- char
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
    
    printf("Total Distance form A2C is: %d",data3);
    return 0;
    

    
}
