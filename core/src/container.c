#include<stdlib.h>
#include<stdint.h>
#include<stdio.h>
#include "../inc/container.h"

void structInit(sensorData** p_ptr){

    sensorData* l_ptr = (sensorData *)malloc(sizeof(sensorData));
    if(l_ptr == NULL){
        printf("memory allocation failed\n");
        exit(EXIT_SUCCESS);
    }
    l_ptr->index = 0;
    l_ptr->capacity = CAPACITY;
    l_ptr->ptr = (int *)malloc( CAPACITY  * sizeof(int));

    *p_ptr = l_ptr;
}

void insertItem(sensorData* p_ptr, int p_value){

    if(p_ptr->index == p_ptr->capacity){
      p_ptr->capacity = 2*CAPACITY;
      p_ptr->ptr = (int *)realloc(p_ptr->ptr, p_ptr->capacity * sizeof(int));
    }

    p_ptr->ptr[p_ptr->index++] = p_value + 100;
}

void printArray(sensorData *p_ptr){
    printf("Print array: \n");
    for (int i = 0; i < p_ptr->index; i++)
    {
        printf("%d ",  *(p_ptr->ptr + i));
    }
    printf("\nsize of array: %u", p_ptr->index);
    printf("\ncapacity of array: %u", p_ptr->capacity);
}

void getItem(sensorData *p_ptr, int p_index){
    if(p_index >= p_ptr->index){
        printf("\nOutof array range");
        exit(EXIT_SUCCESS);
    }
    printf("\nGet item at index %d: %d", p_index, p_ptr->ptr[p_index]);
}

void changeItem(sensorData *p_ptr, int p_index, int p_newValue){
    if(p_index >= p_ptr->index){
        printf("\nOutof array range");
        exit(EXIT_SUCCESS);
    }
    printf("\nValue updatae at %d index is %d\n", p_index, p_newValue);
    p_ptr->ptr[p_index] = p_newValue;
}

void deleteItem(sensorData *p_ptr, int p_index){
    
    for (int i = p_index; i < p_ptr->index; i++)
    {
        p_ptr->ptr[p_index] = p_ptr->ptr[p_index+1];
    }

    p_ptr->index--;
    
}