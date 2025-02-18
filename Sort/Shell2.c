#include"Shell2.h"
#include<stdlib.h>
#include<time.h>
#include<stdio.h>
#include<math.h>
//алгоритм сортування Шелла №2 для тривимірного масива
clock_t Shell_2(int P,int M,int N,int ***A)
{
 int  t, j, k,B;
 clock_t time_start, time_stop;//Elem—для запомʼятовування елемента, t—кількість етапів, j—змінна лічильник для пошуку місця вставки, k—відстань між елементами, що взаємодіють на поточному етапі,B-додаткова комірка пам'яті
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
 while (j>=k && A[j][0][0]<A[j-k][0][0]) {
        for(int l=0;l<N;l++){
            for(int s=0;s<M;s++){
B=A[j][l][s];
A[j][l][s]=A[j-k][l][s];
A[j-k][l][s]=B;
  }
}
j=j-k;
 }
 }}
 time_stop = clock();
 return time_stop - time_start;
}
