#pragma once
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define ROW 9
#define COL 9
#define ROWS ROW+2
#define COLS COL+2
#define COUNT 10

void intiboard(char arr[ROWS][COLS], int rows, int cols, char set);
void printboard(char arr[ROWS][COLS], int row, int col);
void mineset(char arr[ROWS][COLS], int row, int col);
void findmine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col);
