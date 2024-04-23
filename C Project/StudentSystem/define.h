#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
typedef struct
{
	char num[10];
	char name[10];
	int gender;
	int score[5];
	float average;
}Student;

typedef struct Node
{
	Student student;
	struct Node* next;
}Node;

void Login(void);
void createInitialPassword(void);
void createInitialPassword(void);
int login_check(char* username, char* password);
void change(char* newUsername, char* newPassword);
/*µÇÂ¼¹¦ÄÜº¯Êý*/

void ShowMenu(void);


void AddStudent(void);
void ShowStudent(void);
void FindStudent(void);
void EditStudent(void);
void SortStudent(void);
void DeleteStudent(void);
void InsertStudent(void);
void ShowFailStudent(void);
int GetStuNum(Node* head);
