#include<stdio.h>
#include<stdint.h>
#include "core/inc/container.h"



int main(){

    sensorData* s_ptr;     //s_ptr = structure pointer of type sensorData
    structInit(&s_ptr);

    for (uint8_t i = 0; i < 6; i++)
    {
        insertItem(s_ptr, i);
    }

    printArray(s_ptr);
    getItem(s_ptr, 2);
    changeItem(s_ptr, 3, 500);
    printArray(s_ptr);
    deleteItem(s_ptr, 3);
    printArray(s_ptr);

    for (uint8_t i = s_ptr->index; i < 12; i++) // update the size of arrray
    {
        insertItem(s_ptr, i);
    }
    printArray(s_ptr);

    freeMemory(s_ptr); // free the memory allocated to structure

    return 0;
       
}