#include"Shell.h"
#include<stdlib.h>
#include<time.h>
#include<stdio.h>
#include<math.h>
//алгоритм сортування Шелла №1 для тривимірного масива
clock_t Shell_1( int P,int M,int N,int ***A)
{
 int  Elem,t, j, k;//t—кількість етапів, j—змінна лічильник для пошуку місця вставки, k—відстань між елементами, що взаємодіють на поточному етапі
 clock_t time_start, time_stop;
 time_start = clock();
 if (P<4) t=1;
 else t=(int)log2f((float)P)-1;// рахуємо кількість етапів
   int Stages[t];
 Stages[t-1]=1;
 for (int i=t-2; i>=0; i--){
 Stages[i]=2*Stages[i+1]+1;}//рахуємо кількість кроків
 for (int p=0; p<t; p++){
 k=Stages[p];
 for (int i=k; i<P; i++){
int mas[N][M];
for(int l=0;l<M;l++){
    for(int g=0;g<N;g++){
        mas[g][l]=A[i][g][l];
    }
}
Elem=mas[0][0];
 j=i;
 while (j>=k && Elem<A[j-k][0][0]) {
        for(int l=0;l<N;l++){
            for(int s=0;s<M;s++){
A[j][l][s]=A[j-k][l][s];
  }
}
 j=j-k;
 }
 for(int l=0;l<M;l++){
    for(int g=0;g<N;g++){
        A[j][g][l]=mas[g][l];
    }
}
 }
 }
  time_stop = clock();
 return time_stop - time_start;
}
