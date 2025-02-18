#include"backorder_1.h"
#include<stdlib.h>
#include<stdio.h>
void FillVector6(int P, int A[P]){//заповнення одновимірного масива на спадання
    int number=P;
for (int i=0;i<P;i++){
 A[i]=number--;
}
}
