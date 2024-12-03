#pragma once
#define ROW 10
#define COL 10
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<windows.h>
void initboard(char board[ROW][COL], int row, int col);
void printboard(char board[ROW][COL], int row, int col);
void playerboard(char board[ROW][COL], int row, int col);
void computerboard(char board[ROW][COL], int row, int col);
char is_win(char board[ROW][COL], int row, int col,int count);
//int obstacle(char board[ROW][COL], int row, int col);