#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef struct
{
	int num[10];
	char name[10];
	bool gender;
	int score[5];
	float average;
}Student;

typedef struct Node
{
	Student student;
	struct Node* next;
}Node;

void createInitialPassword(void);
int login_check(char* username, char* password);
void change(char* newUsername, char* newPassword);
/*µÇÂ¼¹¦ÄÜº¯Êý*/
void ShowMenu(void);
void FindStudent(void);
void AddStudent(void);
void DeleteStudent(void);
void ShowStudent(void);
void SaveStudent(void);
void LoadStudent(void);
void SortStudent(void);
void FreeStudent(void);
void Login(void);
void createInitialPassword(void);
