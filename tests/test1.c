#include<stdio.h>
#include<string.h>

int main()
{
char name[15];
char name_[15];
char answ[1];

printf("What is Your name?\n");
scanf("%s",name);
printf("Hello! %s (from original)\n", name);

strcpy(name_,name);

printf("Yes / No: ");
scanf("%s", answ);

printf("Hello! %s (from original)\n", name);
printf("Hello! %s (from copy)\n", name_);
printf("You sad: %s\n", answ);

return 0;
}
