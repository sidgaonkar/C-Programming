#include<stdint.h>
#include<stdio.h>

void array_Display(uint8_t *ptr, uint8_t size);

int main(void){
    // uint8_t studentAge[100];
    // printf("The Size of an Array is : %d\n", sizeof(studentAge));
    // printf("Printing Base Address of Array %p",studentAge);
    // return 0;

     uint8_t data[10]={1,2,3,4,5,6,7,8,9,10};
    // printf("Printing the Base address of the array %p\n",data);
    // printf("Content of Array\n");
    // printf("0\t 1\t 2\t 3\t 4\t 5\t 6\t 7\t 8\t 9\n"); 
    
    // for ( uint8_t i = 0; i < sizeof(data); i++)
    // {   
    //     printf("%d\t",i,*data+i);
    // }

    array_Display(data,sizeof(data));

return 0;
}

void array_Display(uint8_t *ptr, uint8_t size)
{
    for ( uint8_t i = 0; i < size; i++)
    {   
        printf("%d\t",i,*(ptr+i));
    }
}