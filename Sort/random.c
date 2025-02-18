#include"random.h"
#include<stdlib.h>
#include <stdio.h>
void FillVector2(int P,int M, int N, int ***A){//заповнюємо тривимірний масив рандомно
for (int i=0;i<P;i++){
    for (int j=0;j<N;j++){
        for(int k=0;k<M;k++){
            A[i][j][k] = rand() % (P*M*N);
        }
    }
}
}
