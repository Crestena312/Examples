#include"ordered_1.h"
#include<stdlib.h>
#include<stdio.h>
void FillVector4(int P,int A[P]){//заповнюємо одновимірний масив за зростанням
    int number=0;
for (int i=0;i<P;i++){
A[i]=number++;
}
}
