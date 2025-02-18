#include"bulb.h"
#include"Test.h"
#include<stdlib.h>
#include<stdio.h>
#include<time.h>
//Алгоритм сортування тривимірного масива методом бульбашкового сортування із запом'ятовування змінної останньої перестановки
clock_t ExchangeSort(int P,int M,int N,int ***A)
{
clock_t time_start, time_stop;
 int R, k, tmp;//R-права границя,k-змінна яка запам'ятовує місце останньої перестановки, tmp-додаткова змінна
 time_start = clock();
 R=P-1;
 while(R>0){
 k=0;
 for(int i=0; i<R; i++)
 if (A[i][0][0]>A[i+1][0][0]) {
     for(int j=0;j<N;j++){
             for(int h=0;h<M;h++){
 tmp=A[i][j][h];
 A[i][j][h]=A[i+1][j][h];
A[i+1][j][h]=tmp;}
     }
      k=i;
 }
 R=k;
 }
 time_stop = clock();
  return time_stop - time_start;

}
