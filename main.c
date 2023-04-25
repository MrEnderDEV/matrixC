#include <stdio.h>
#include "m_matrix.h"

int main(void){
  printf("Замена заданым числом\n");
  matrix zamena = initm(3,2,8);
  printm(zamena);
  printf("Заполнение матрицы рандомным числом\n");
  matrix randmatrix = randomm(3, 2, 4, 50);
  printm(randmatrix);
  printf("Сложение матрицы\n");
  matrix summa = summ(zamena, randmatrix);
  printm(summa);
  printf("Замена заданым числом\n");
  matrix vremena = initm(3, 2, 3);
  printm(vremena);
  printf("Вычитание\n");
  matrix vichit = minusm(summa, vremena);
  printm(vichit);
  printf("Рандом\n");
  vremena = randomm(2, 3, 2, 40);
  printm(vremena);
  printf("Умножение\n");
  matrix umnoz = umnm(randmatrix, vremena);
  printm(umnoz);
  printf("Транспонирование\n");
  vremena = transpm(randmatrix);
  printm(vremena);
  printf("Проверка на выполняемость вычитание\n");
  matrix six = minusm(vichit, umnoz);
  printm(six);
  printf("%d %d\n",six.w,six.h);
  printf("\n");
  printf("Копирование матрицы\n");
  matrix coppy = coppym(umnoz);
  printm(umnoz);
  printm(coppy);
  printf("Освобождение памяти\n");
  coppy = freem(coppy);
  printf("%d %d\n",coppy.w,coppy.h);
  printm(coppy);
  return 0;
}