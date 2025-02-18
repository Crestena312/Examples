#include"Shell_2.h"
#include<stdlib.h>
#include<time.h>
#include<stdio.h>
#include<math.h>
//алгоритм сортування Шелла №2 для одновимірного масива
clock_t Shell_22(int P,int A[P])
{
 int B, t, j, k;// t—кількість етапів, j—змінна лічильник для пошуку місця вставки, k—відстань між елементами, що взаємодіють на поточному етапі
 clock_t time_start, time_stop;
 time_start = clock();
 if (P<4) t=1;
 else t=(int)log2f((float)P)-1;//рахуємо кількість етапів
 int Stages[t];
 Stages[t-1]=1;
 for (int i=t-2; i>=0; i--)
Stages[i]=2*Stages[i+1]+1;//рахуємо кількість кроків
 for (int p=0; p<t; p++){
 k=Stages[p];
 for (int i=k; i<P; i++){
 j=i;
 while (j>=k && A[j]<A[j-k]) {
B=A[j];
A[j]=A[j-k];
A[j-k]=B;
j=j-k;
 }
 }}
 time_stop = clock();
 return time_stop - time_start;
}
