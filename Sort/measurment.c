#include "measurment.h"
#include <stdio.h>
// Масив значень часу роботи алгоритма
clock_t Res[measurements_number];
float MeasurementProcessing()
{
 long int Sum;
 float AverageValue;
 /* Крок 2.
Для знаходження min_max_number мінімальних і максимальних
значень вимірів виконуємо min_max_number ітерацій головного
цикла алгоритму шейкерного сортування в діапазоні індексів від
rejected_number до measurements_number-1.
В результаті, min_max_number мінімальних значень вимірів будуть знаходитись на позиціях в діапазоні індексів від
rejected_number до rejected_number+min_max_number-1, а
min_max_number максимальних значень вимірів – на позиціях в
діапазоні індексів від measurements_number-min_max_number до
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
 /* Знаходимо середнє значення вимірів після відкидання
rejected_number перших вимірів та min_max_number вимірів з
мінімальними значеннями і min_max_number вимірів з максимальними значеннями, тобто середнє значення вимірів в діапазоні
індексів від rejected_number + min_max_number до
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
