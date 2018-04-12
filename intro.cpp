#include<stdio.h>
#include<conio.h>
struct students{
	int id;
	int time;
	int ct = 0;
	int bt;
};
void sort(students s[]);
bool incomp(students s[]);
void completiontime(students s[]);
