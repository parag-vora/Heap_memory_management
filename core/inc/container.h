#ifndef CONTAINER_H
#define CONTAINER_H


#define CAPACITY 8

typedef struct{

    unsigned int index : 5;   // maximum can go upto 32
    unsigned int capacity : 5 ;   // maximum can go upto 32
    int* ptr;   // array pointer

}sensorData;


extern void structInit(sensorData** p_ptr); // initialize the structure i.e initialize member
extern void insertItem(sensorData* p_ptr, int p_value); //inster value to member
extern void printArray(sensorData *p_ptr); // print arra for current index
extern void getItem(sensorData *p_ptr, int p_index); // get a value form given index
extern void changeItem(sensorData *p_ptr, int p_index, int p_newValue); // change value at given index
extern void deleteItem(sensorData *p_ptr, int p_index); // delete item and adjust index
extern void freeMemory(sensorData *p_ptr); // free memory allocated to structure

#endif CONTAINER_H