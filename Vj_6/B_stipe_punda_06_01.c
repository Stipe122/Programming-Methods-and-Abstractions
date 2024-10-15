#include "stdio.h"
#include "stdlib.h"
#include "string.h"

int* funk(int *arr1,int size1,int *arr2,int size2, int* size_rez){
int *arr = (int*)malloc((size1+size2)*sizeof(int));
arr[0] = arr1[0];
int size = 1;
int counter = 0;

for(int i = 0 ; i < size1 ; i++){
    for(int j = 0 ; j < size ; j++){
        if(arr1[i] == arr[j]){
            counter++;
        }
    }
    if(counter == 0){
        arr[size] = arr1[i];
        size++;
    }
    counter=0;
}
for(int i = 0 ; i < size2 ; i++){
    for(int j = 0 ; j < size ; j++){
        if(arr2[i] == arr[j]){
            counter++;
        }
    }
    if(counter == 0){
        arr[size] = arr2[i];
        size++;
    }
    counter = 0;
}
arr = realloc(arr,size*sizeof(int));

*size_rez = size;

 return arr;
}

int main(){

int arr1[]={1,2,3,6,9};
int arr2[]={2,5,8,7,3};
int size1=sizeof(arr1)/sizeof(int);
int size2=sizeof(arr2)/sizeof(int);
int* size_rez;

int* arr = funk(arr1,size1,arr2,size2,&size_rez);

for(int i = 0 ; i < size_rez ; i++){
    printf("%d ", arr[i]);
}

free(arr1);
free(arr2);

return 0;
}
