#include"random_1.h"
#include<stdlib.h>
#include <stdio.h>
void FillVector5(int P, int A[P]){//���������� ����������� ����� ��������
for (int i=0;i<P;i++){
A[i] = rand() % (P);
}
}
