#include"Shell_2.h"
#include<stdlib.h>
#include<time.h>
#include<stdio.h>
#include<math.h>
//�������� ���������� ����� �2 ��� ������������ ������
clock_t Shell_22(int P,int A[P])
{
 int B, t, j, k;// t�������� �����, j������ �������� ��� ������ ���� �������, k�������� �� ����������, �� ��������� �� ��������� ����
 clock_t time_start, time_stop;
 time_start = clock();
 if (P<4) t=1;
 else t=(int)log2f((float)P)-1;//������ ������� �����
 int Stages[t];
 Stages[t-1]=1;
 for (int i=t-2; i>=0; i--)
Stages[i]=2*Stages[i+1]+1;//������ ������� �����
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
