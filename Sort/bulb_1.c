#include "bulb_1.h"
#include<stdlib.h>
#include<stdio.h>
#include<time.h>
//Алгоритм сортування одновимірного масива методом бульбашкового сортування із запом'ятовування змінної останньої перестановки
clock_t Exchange1( int P,int A[P])
{
 int R, k, tmp;//R-права границя,k-змінна яка запам'ятовує місце останньої перестановки, tmp-додаткова змінна
 clock_t time_start, time_stop;
 time_start = clock();
 R=P-1;
 while(R>0){
 k=0;
 for(int i=0; i<R; i++){
 if (A[i]>A[i+1]) {
 tmp=A[i];
 A[i]=A[i+1];
A[i+1]=tmp;
 k=i;
 }}
 R=k;
 }
 time_stop = clock();
 return time_stop - time_start;
}
