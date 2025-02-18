#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "measurment.h"
#include "Test.h"
#include "Common_vector_1.h"
#include "random.h"
#include "backordered.h"
#include"random_1.h"
#include"ordered.h"
#include"ordered_1.h"
#include"backorder_1.h"
#include "bulb.h"
#include "bulb_1.h"
#include "Shell.h"
#include "Shell2.h"
#include "Shell_1.h"
#include "Shell_2.h"
#define VectorLength 25000//Кількість перерізів
#define m 16//Кількість рядочків
#define n 16//Кількість стовпчиків
int ***Vector;
//функція для виміру часу одновимірного масива, який заповнюється за незменьшенням і сортується бульбашковим сортуванням
void ExchangeSortMeasurement11()
{
 for (int i = 0; i < measurements_number; i++) {
        FillVector4(VectorLeng,Vector1);// викликаємо функцію, яка заповнює одновимірний масив за незменшенням
 Res[i] = Exchange1(VectorLeng,Vector1);//викликаємо функкцію, яка сортує одновимірний масив методом бульбашкового сортування
 }
}
//функція для виміру часу одновимірного масива, який заповнюється рандомно і сортується бульбашковим сортуванням
void ExchangeSortMeasurement12()
{
 for (int i = 0; i < measurements_number; i++) {
        FillVector5(VectorLeng,Vector1);// викликаємо функцію, яка заповнює одновимірний масив рандомно
 Res[i] = Exchange1(VectorLeng,Vector1);//викликаємо функкцію, яка сортує одновимірний масив методом бульбашкового сортування
 }
}
//функція для виміру часу одновимірного масива, який заповнюється за незбільшенням і сортується бульбашковим сортуванням
void ExchangeSortMeasurement13()
{
 for (int i = 0; i < measurements_number; i++) {
        FillVector6(VectorLeng,Vector1);// викликаємо функцію, яка заповнює одновимірний масив за незбільшенням
 Res[i] = Exchange1(VectorLeng,Vector1);//викликаємо функкцію, яка сортує одновимірний масив методом бульбашкового сортування
 }
}
//функція для виміру часу одновимірного масива, який заповнюється за незменшенням і сортується сортуванням Шелла для 1го способу
void ExchangeSortMeasurement21()
{
 for (int i = 0; i < measurements_number; i++) {
        FillVector4(VectorLeng,&Vector1[0]);// викликаємо функцію, яка заповнює одновимірний масив за незменшенням
 Res[i] = Shell_11(VectorLeng,Vector1);//викликаємо функкцію, яка сортує одновимірний масив методом шелла для 1го способу
 }
}
//функція для виміру часу одновимірного масива, який заповнюється рандомно і сортується сортуванням Шелла для 1го способу
void ExchangeSortMeasurement22()
{
 for (int i = 0; i < measurements_number; i++) {
        FillVector5(VectorLeng,Vector1);// викликаємо функцію, яка заповнює одновимірний масив рандомно
 Res[i] = Shell_11(VectorLeng,Vector1);//викликаємо функкцію, яка сортує одновимірний масив методом шелла для 1го способу
 }
}
//функція для виміру часу одновимірного масива, який заповнюється за незбільшенням і сортується сортуванням Шелла для 1го способу
void ExchangeSortMeasurement23()
{
 for (int i = 0; i < measurements_number; i++) {
        FillVector6(VectorLeng,Vector1);// викликаємо функцію, яка заповнює одновимірний масив за незбільшенням
 Res[i] = Shell_11(VectorLeng,Vector1);//викликаємо функкцію, яка сортує одновимірний масив методом шелла для 1го способу
 }
}
//функція для виміру часу одновимірного масива, який заповнюється за незбільшенням і сортується сортуванням Шелла для 2го способу
void ExchangeSortMeasurement31(){
 for (int i = 0; i < measurements_number; i++) {
        FillVector4(VectorLeng,&Vector1[0]);// викликаємо функцію, яка заповнює одновимірний масив за незменшенням
 Res[i] = Shell_22(VectorLeng,Vector1);//викликаємо функкцію, яка сортує одновимірний масив методом шелла для 2го способу
 }
}
//функція для виміру часу одновимірного масива, який заповнюється рандомно і сортується сортуванням Шелла для 2го способу
void ExchangeSortMeasurement32()
{
 for (int i = 0; i < measurements_number; i++) {
        FillVector5(VectorLeng,Vector1);// викликаємо функцію, яка заповнює одновимірний масив рандомно
 Res[i] = Shell_22(VectorLeng,Vector1);//викликаємо функкцію, яка сортує одновимірний масив методом шелла для 2го способу
 }
}
//функція для виміру часу одновимірного масива, який заповнюється за незбільшення і сортується сортуванням Шелла для 2го способу
void ExchangeSortMeasurement33()
{
 for (int i = 0; i < measurements_number; i++) {
        FillVector6(VectorLeng,Vector1);// викликаємо функцію, яка заповнює одновимірний масив за незбільшенням
 Res[i] = Shell_22(VectorLeng,Vector1);//викликаємо функкцію, яка сортує одновимірний масив методом шелла для 2го способу
 }
}
//функція для виміру часу тривимірного масива, який заповнюється за незбільшення і сортується бульбашковим сортуванням
void ExchangeSortMeasurement1()
{
 for (int i = 0; i < measurements_number; i++) {
        FillVector1(VectorLength,m,n,Vector);// викликаємо функцію, яка заповнює тривимірний масив за незменшенням
 Res[i] = ExchangeSort(VectorLength,m,n,Vector);//викликаємо функкцію, яка сортує тривимірний масив методом бульбашкового сортування
 }
}

//функція для виміру часу тривимірного масива, який заповнюється рандомно і сортується бульбашковим сортуванням
void ExchangeSortMeasurement2()
{
 for (int i = 0; i < measurements_number; i++) {
 FillVector2(VectorLength,m,n,Vector);// викликаємо функцію, яка заповнює тривимірний масив рандомно
 Res[i] = ExchangeSort(VectorLength,m,n,Vector);//викликаємо функкцію, яка сортує тривимірний масив методом бульбашкового сортування
 }
}
//функція для виміру часу тривимірного масива, який заповнюється за незбільшенням і сортується бульбашковим сортуванням
void ExchangeSortMeasurement3()
{
 for (int i = 0; i < measurements_number; i++) {
 FillVector3(VectorLength,m,n,Vector);// викликаємо функцію, яка заповнює тривимірний масив за незбільшенням
 Res[i] = ExchangeSort(VectorLength,m,n,Vector);//викликаємо функкцію, яка сортує тривимірний масив методом бульбашкового сортування
 }
}
//функція для виміру часу тривимірного масива, який заповнюється за незбільшенням і сортується сортуванням шелла №1
void ExchangeSortMeasurement4()
{
for (int i = 0; i < measurements_number; i++) {
         FillVector1(VectorLength,m,n,Vector);// викликаємо функцію, яка заповнює тривимірний масив за незменшенням
 Res[i] = Shell_1(VectorLength,m,n,Vector);//викликаємо функкцію, яка сортує тривимірний масив методом сортування Шелла №1
 }
}
//функція для виміру часу тривимірного масива, який заповнюється рандомно і сортується сортуванням шелла №1
void ExchangeSortMeasurement5()
{
for (int i = 0; i < measurements_number; i++) {
         FillVector2(VectorLength,m,n,Vector);// викликаємо функцію, яка заповнює тривимірний масив рандомно
 Res[i] = Shell_1(VectorLength,m,n,Vector);//викликаємо функкцію, яка сортує тривимірний масив методом сортування Шелла №1
 }
}
//функція для виміру часу тривимірного масива, який заповнюється за незбільшенням і сортується сортуванням шелла №1
void ExchangeSortMeasurement6()
{
for (int i = 0; i < measurements_number; i++) {
         FillVector3(VectorLength,m,n,Vector);// викликаємо функцію, яка заповнює тривимірний масив за незбільшенням
 Res[i] = Shell_1(VectorLength,m,n,Vector);//викликаємо функкцію, яка сортує тривимірний масив методом сортування Шелла №1
 }
}
//функція для виміру часу тривимірного масива, який заповнюється за незменшенням і сортується сортуванням шелла №2
void ExchangeSortMeasurement7()
{
for (int i = 0; i < measurements_number; i++) {
         FillVector1(VectorLength,m,n,Vector);// викликаємо функцію, яка заповнює тривимірний масив за незменшенням
 Res[i] = Shell_2(VectorLength,m,n,Vector);//викликаємо функкцію, яка сортує тривимірний масив методом сортування Шелла №2
 }
}
//функція для виміру часу тривимірного масива, який заповнюється рандомно і сортується сортуванням шелла №2
void ExchangeSortMeasurement8()
{
for (int i = 0; i < measurements_number; i++) {
         FillVector2(VectorLength,m,n,Vector);// викликаємо функцію, яка заповнює тривимірний масив рандомно
 Res[i] = Shell_2(VectorLength,m,n,Vector);//викликаємо функкцію, яка сортує тривимірний масив методом сортування Шелла №2
 }
}
//функція для виміру часу тривимірного масива, який заповнюється за незбільшенням і сортується сортуванням шелла №2
void ExchangeSortMeasurement9()
{
for (int i = 0; i < measurements_number; i++) {
         FillVector3(VectorLength,m,n,Vector);// викликаємо функцію, яка заповнює тривимірний масив за незбільшенням
 Res[i] = Shell_2(VectorLength,m,n,Vector);//викликаємо функкцію, яка сортує тривимірний масив методом сортування Шелла №2
 }
}
//Функція яка виводе результати сортування бульбашкою для 3 видів заповнення одновимірних масивів
void OutTable11(float ordered1, float random1, float backordered1){
 printf("\t\t Ordered \t Random \t BackOrdered \n");
 printf("Bubble\t %13.2f \t %13.2f \t %13.2f \n", ordered1, random1,
backordered1);
 printf("\n\n");
}
//Функція яка виводе результати сортування Шелла №1 для 3 видів заповнення одновимірних масивів
void OutTable22(float ordered2, float random2, float backordered2){
 printf("\t\t Ordered \t Random \t BackOrdered \n");
 printf("Shell1\t %13.2f \t %13.2f \t %13.2f \n", ordered2, random2,
backordered2);
 printf("\n\n");
}
//Функція яка виводе результати сортування Шелла №1 для 3 видів заповнення одновимірних масивів
void OutTable33(float ordered3, float random3, float backordered3){
 printf("\t\t Ordered \t Random \t BackOrdered \n");
 printf("Shell1\t %13.2f \t %13.2f \t %13.2f \n", ordered3, random3,
backordered3);
 printf("\n\n");
}
//Функція яка виводе результати для всіх видів сортування та для всіх видів заповнення одновимірних масивів
void OutTable4(float ordered, float random, float backordered,float shell1,float shell2,float shell3,float shell4,float shell5,float shell6){
 printf("\t\t Ordered \t Random \t BackOrdered \n");
 printf("Bubl1\t %13.2f \t %13.2f \t %13.2f \n", ordered, random,
backordered);
 printf("Shell1\t %13.2f \t %13.2f \t %13.2f \n", shell1, shell2,
shell3);
printf("Shell2\t %13.2f \t %13.2f \t %13.2f \n", shell4, shell5,
shell6);
 printf("\n\n");}
 //Функція яка виводе результати сортування бульбашкою для 3 видів заповнення тривимірних масивів
void OutTable1(float ordered1, float random1, float backordered1){
printf("\t\t Ordered \t Random \t BackOrdered \n");
printf("Bubble\t %13.2f \t %13.2f \t %13.2f \n", ordered1, random1,
backordered1);
 printf("\n\n");}
 //Функція яка виводе результати сортування Шелла №1 для 3 видів заповнення тривимірних масивів
void OutTable2(float ordered2, float random2, float backordered2){
printf("\t\t Ordered \t Random \t BackOrdered \n");
printf("Shell1\t %13.2f \t %13.2f \t %13.2f \n", ordered2, random2,
backordered2);
 printf("\n\n");}
  //Функція яка виводе результати сортування Шелла №2 для 3 видів заповнення тривимірних масивів
void OutTable3(float ordered3, float random3, float backordered3){
printf("\t\t Ordered \t Random \t BackOrdered \n");
printf("Shell2\t %13.2f \t %13.2f \t %13.2f \n", ordered3, random3,
backordered3);
 printf("\n\n");
}
//Функція яка виводе результати для всіх видів сортування та для всіх видів заповнення тривимірних масивів
void OutTable(float ordered, float random, float backordered,float shell1,float shell2,float shell3,float shell4,float shell5,float shell6){
 printf("\t\t Ordered \t Random \t BackOrdered \n");
 printf("Bubble\t %13.2f \t %13.2f \t %13.2f \n", ordered, random,
backordered);
 printf("Shell1\t %13.2f \t %13.2f \t %13.2f \n", shell1, shell2,
shell3);
printf("Shell2\t %13.2f \t %13.2f \t %13.2f \n", shell4, shell5,
shell6);
 printf("\n\n");
}
//Функція яка виводе результати для всіх видів сортування та для всіх видів заповнення одновимірних та тривимірних масивів
void OutTableAll(float ordered1, float random1, float backordered1,float shell11,float shell12,float shell13,float shell14,float shell15,
float shell16,float ordered, float random, float backordered,float shell1,float shell2,float shell3,float shell4,float shell5,float shell6){
 printf("\t\t Ordered \t Random \t BackOrdered \n");
  printf("Bubble\t %13.2f \t %13.2f \t %13.2f \n", ordered1, random1,
backordered1);
 printf("Shell1\t %13.2f \t %13.2f \t %13.2f \n", shell11, shell12,
shell13);
printf("Shell2\t %13.2f \t %13.2f \t %13.2f \n", shell14, shell15,
shell16);
 printf("Bubble\t %13.2f \t %13.2f \t %13.2f \n", ordered, random,
backordered);
 printf("Shell1\t %13.2f \t %13.2f \t %13.2f \n", shell1, shell2,
shell3);
printf("Shell2\t %13.2f \t %13.2f \t %13.2f \n", shell4, shell5,
shell6);
 printf("\n\n");
}
int main(){
     Vector = (int***) malloc(VectorLength*sizeof(int**));
 for (int k=0; k<VectorLength; k++)
 { Vector[k] = (int**) malloc(n*sizeof(int*));
 for (int i=0; i<n; i++)
 Vector[k][i] = (int*) malloc(m*sizeof(int));
 }
 float SortingTime1=0,SortingTime2=0,SortingTime3=0,SortingTime4=0,SortingTime5=0,SortingTime6=0,SortingTime7=0,SortingTime8=0,SortingTime9=0,
 SortingTime11=0,SortingTime12=0,SortingTime13=0,SortingTime21=0,SortingTime22=0,SortingTime23=0,SortingTime31=0,SortingTime32=0,SortingTime33=0;
 srand(time(NULL));
int h=11;
 int l;
 char*name[11]={"1.Bubble direct exchange for 1-demensiion array","2.Shell1 for 1-demensiion array",
  "3.Shell2 for 1-demensiion array","4.View all for 1-demensiion array",
 "5.Bubble direct exchange for 3-demensiion array","6.Shell1 for 3-demensiion array", "7.Shell2 for 3-demensiion array",
 "8.View all for 3-demensiion array","9.View all", "10.Test",
 "11.Exit"};
do{//оголошуємо цикл для виведення меню
printf("\n\n\nMAIN MANU\n\n");// Виводимо меню
for(h=0;h<11;h++){
printf("%s\n",name[h]);
}
printf("%s","Enter the mode number and slash enter ");
 scanf("%d",&l);
 switch(l){
     case 1:ExchangeSortMeasurement11();
SortingTime11 = MeasurementProcessing();//присваюємо середнє значення часу яке повернеться із функції
ExchangeSortMeasurement12();
  SortingTime12 = MeasurementProcessing();//присваюємо середнє значення часу яке повернеться із функції
ExchangeSortMeasurement13();
  SortingTime13 = MeasurementProcessing();//присваюємо середнє значення часу яке повернеться із функції
 OutTable11(SortingTime11, SortingTime12, SortingTime13);break;
     case 2:ExchangeSortMeasurement21();
SortingTime21 = MeasurementProcessing();//присваюємо середнє значення часу яке повернеться із функції
ExchangeSortMeasurement22();
  SortingTime22 = MeasurementProcessing();//присваюємо середнє значення часу яке повернеться із функції
ExchangeSortMeasurement23();
  SortingTime23 = MeasurementProcessing();//присваюємо середнє значення часу яке повернеться із функції
 OutTable22(SortingTime21, SortingTime22, SortingTime23);break;
      case 3:ExchangeSortMeasurement31();
SortingTime31 = MeasurementProcessing();//присваюємо середнє значення часу яке повернеться із функції
ExchangeSortMeasurement32();
  SortingTime32 = MeasurementProcessing();//присваюємо середнє значення часу яке повернеться із функції
ExchangeSortMeasurement33();
  SortingTime33 = MeasurementProcessing();//присваюємо середнє значення часу яке повернеться із функції
 OutTable33(SortingTime31, SortingTime32, SortingTime33);break;
  case 4:
 ExchangeSortMeasurement11();
SortingTime11 = MeasurementProcessing();//присваюємо середнє значення часу яке повернеться із функції
ExchangeSortMeasurement12();
  SortingTime12 = MeasurementProcessing();//присваюємо середнє значення часу яке повернеться із функції
ExchangeSortMeasurement13();
  SortingTime13 = MeasurementProcessing();//присваюємо середнє значення часу яке повернеться із функції
 ExchangeSortMeasurement21();
SortingTime21 = MeasurementProcessing();//присваюємо середнє значення часу яке повернеться із функції
ExchangeSortMeasurement22();
  SortingTime22 = MeasurementProcessing();//присваюємо середнє значення часу яке повернеться із функції
ExchangeSortMeasurement23();
  SortingTime23 = MeasurementProcessing();//присваюємо середнє значення часу яке повернеться із функції
   ExchangeSortMeasurement31();
SortingTime31 = MeasurementProcessing();//присваюємо середнє значення часу яке повернеться із функції
ExchangeSortMeasurement32();
  SortingTime32 = MeasurementProcessing();//присваюємо середнє значення часу яке повернеться із функції
ExchangeSortMeasurement33();
  SortingTime33 = MeasurementProcessing();//присваюємо середнє значення часу яке повернеться із функції
OutTable4(SortingTime11, SortingTime12, SortingTime13, SortingTime21, SortingTime22, SortingTime23, SortingTime31,
          SortingTime32, SortingTime33);break;
 case 5:ExchangeSortMeasurement1();
SortingTime1 = MeasurementProcessing();//присваюємо середнє значення часу яке повернеться із функції
ExchangeSortMeasurement2();
  SortingTime2 = MeasurementProcessing();//присваюємо середнє значення часу яке повернеться із функції
ExchangeSortMeasurement3();
  SortingTime3 = MeasurementProcessing();//присваюємо середнє значення часу яке повернеться із функції
 ExchangeSortMeasurement4();
 OutTable1(SortingTime1, SortingTime2, SortingTime3);break;
  case 6: ExchangeSortMeasurement4();
  SortingTime4 = MeasurementProcessing();//присваюємо середнє значення часу яке повернеться із функції
   ExchangeSortMeasurement5();
  SortingTime5 = MeasurementProcessing();//присваюємо середнє значення часу яке повернеться із функції
     ExchangeSortMeasurement6();
  SortingTime6 = MeasurementProcessing();//присваюємо середнє значення часу яке повернеться із функції
 OutTable2(SortingTime4, SortingTime5, SortingTime6);break;
   case 7:ExchangeSortMeasurement7();
  SortingTime7 = MeasurementProcessing();//присваюємо середнє значення часу яке повернеться із функції
  ExchangeSortMeasurement8();
  SortingTime8 = MeasurementProcessing();//присваюємо середнє значення часу яке повернеться із функції
  ExchangeSortMeasurement9();
  SortingTime9 = MeasurementProcessing();//присваюємо середнє значення часу яке повернеться із функції
 OutTable3(SortingTime7, SortingTime8, SortingTime9);break;
 case 8:
 ExchangeSortMeasurement1();
SortingTime1 = MeasurementProcessing();//присваюємо середнє значення часу яке повернеться із функції
ExchangeSortMeasurement2();
  SortingTime2 = MeasurementProcessing();//присваюємо середнє значення часу яке повернеться із функції
ExchangeSortMeasurement3();
  SortingTime3 = MeasurementProcessing();//присваюємо середнє значення часу яке повернеться із функції
 ExchangeSortMeasurement4();
  SortingTime4 = MeasurementProcessing();//присваюємо середнє значення часу яке повернеться із функції
   ExchangeSortMeasurement5();
  SortingTime5 = MeasurementProcessing();//присваюємо середнє значення часу яке повернеться із функції
     ExchangeSortMeasurement6();
  SortingTime6 = MeasurementProcessing();//присваюємо середнє значення часу яке повернеться із функції
       ExchangeSortMeasurement7();
  SortingTime7 = MeasurementProcessing();//присваюємо середнє значення часу яке повернеться із функції
  ExchangeSortMeasurement8();
  SortingTime8 = MeasurementProcessing();//присваюємо середнє значення часу яке повернеться із функції
  ExchangeSortMeasurement9();
  SortingTime9 = MeasurementProcessing();//присваюємо середнє значення часу яке повернеться із функції
OutTable(SortingTime1, SortingTime2, SortingTime3, SortingTime4, SortingTime5, SortingTime6,
           SortingTime7, SortingTime8,SortingTime9);break;
         case 9:
              ExchangeSortMeasurement11();
SortingTime11 = MeasurementProcessing();//присваюємо середнє значення часу яке повернеться із функції
ExchangeSortMeasurement12();
  SortingTime12 = MeasurementProcessing();//присваюємо середнє значення часу яке повернеться із функції
ExchangeSortMeasurement13();
  SortingTime13 = MeasurementProcessing();//присваюємо середнє значення часу яке повернеться із функції
 ExchangeSortMeasurement21();
SortingTime21 = MeasurementProcessing();//присваюємо середнє значення часу яке повернеться із функції
ExchangeSortMeasurement22();
  SortingTime22 = MeasurementProcessing();//присваюємо середнє значення часу яке повернеться із функції
ExchangeSortMeasurement23();
  SortingTime23 = MeasurementProcessing();//присваюємо середнє значення часу яке повернеться із функції
   ExchangeSortMeasurement31();
SortingTime31 = MeasurementProcessing();//присваюємо середнє значення часу яке повернеться із функції
ExchangeSortMeasurement32();
  SortingTime32 = MeasurementProcessing();//присваюємо середнє значення часу яке повернеться із функції
ExchangeSortMeasurement33();
  SortingTime33 = MeasurementProcessing();//присваюємо середнє значення часу яке повернеться із функції
 ExchangeSortMeasurement1();
SortingTime1 = MeasurementProcessing();//присваюємо середнє значення часу яке повернеться із функції
ExchangeSortMeasurement2();
  SortingTime2 = MeasurementProcessing();//присваюємо середнє значення часу яке повернеться із функції
ExchangeSortMeasurement3();
  SortingTime3 = MeasurementProcessing();//присваюємо середнє значення часу яке повернеться із функції
 ExchangeSortMeasurement4();
  SortingTime4 = MeasurementProcessing();//присваюємо середнє значення часу яке повернеться із функції
   ExchangeSortMeasurement5();
  SortingTime5 = MeasurementProcessing();//присваюємо середнє значення часу яке повернеться із функції
     ExchangeSortMeasurement6();
  SortingTime6 = MeasurementProcessing();//присваюємо середнє значення часу яке повернеться із функції
       ExchangeSortMeasurement7();
  SortingTime7 = MeasurementProcessing();//присваюємо середнє значення часу яке повернеться із функції
  ExchangeSortMeasurement8();
  SortingTime8 = MeasurementProcessing();//присваюємо середнє значення часу яке повернеться із функції
  ExchangeSortMeasurement9();
  SortingTime9 = MeasurementProcessing();//присваюємо середнє значення часу яке повернеться із функції
OutTableAll(SortingTime11, SortingTime12, SortingTime13, SortingTime21, SortingTime22, SortingTime23, SortingTime31,
          SortingTime32, SortingTime33,SortingTime1, SortingTime2, SortingTime3, SortingTime4, SortingTime5, SortingTime6, SortingTime7, SortingTime8,
        SortingTime9);break;
        case 10:Test();break;
case 11:system("cls");return 0;
default:printf("Wrong number. Repeat.");}
}while(l!=11);
 return 0;
}

