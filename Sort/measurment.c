#include "measurment.h"
#include <stdio.h>
// ����� ������� ���� ������ ���������
clock_t Res[measurements_number];
float MeasurementProcessing()
{
 long int Sum;
 float AverageValue;
 /* ���� 2.
��� ����������� min_max_number ��������� � ������������
������� ����� �������� min_max_number �������� ���������
����� ��������� ���������� ���������� � ������� ������� ��
rejected_number �� measurements_number-1.
� ���������, min_max_number ��������� ������� ����� ������ ����������� �� �������� � ������� ������� ��
rejected_number �� rejected_number+min_max_number-1, �
min_max_number ������������ ������� ����� � �� �������� �
������� ������� �� measurements_number-min_max_number ��
measurements_number-1.
*/
 clock_t buf;
int L = rejected_number, R = measurements_number - 1;
int k = rejected_number;
for (int j=0; j < min_max_number; j++) {
for (int i = L; i < R; i++) {
if (Res[i] > Res[i + 1]) {
buf = Res[i];
Res[i] = Res[i + 1];
Res[i + 1] = buf;
k = i;
}
}
R = k;
for (int i = R - 1; i >= L; i--) {
if (Res[i] > Res[i + 1]) {
buf = Res[i];
Res[i] = Res[i + 1];
Res[i + 1] = buf;
k = i;
}
}
L = k + 1;
}
 /* ��������� ������ �������� ����� ���� ���������
rejected_number ������ ����� �� min_max_number ����� �
���������� ���������� � min_max_number ����� � ������������� ����������, ����� ������ �������� ����� � �������
������� �� rejected_number + min_max_number ��
measurements_number - min_max_number - 1.
*/
 Sum=0;
 for (int i = rejected_number + min_max_number; i <
measurements_number - min_max_number; i++)
 Sum = Sum + Res[i];
  AverageValue = (float)Sum / (float)(measurements_number -
min_max_number - rejected_number);
 for(int i=0;i<measurements_number;i++){
    Res[i]=0;
 }
 return AverageValue;
}
