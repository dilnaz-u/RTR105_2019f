//http://www.cplusplus.com/reference/cstdio/fprintf
/* fprintf example */
#include <stdio.h>

int main ()
{
   FILE * pFile;
   int n;
   char name [100];

   //pFile = fopen ("myfile.txt","w");
   pFile = fopen ("myfile.txt","a");
   for (n=0 ; n<3 ; n++)
   {
     //puts ("please, enter a name: ");
     printf("please, enter a name: ");
     //gets (name);
     scanf("%s",name);
     fprintf (pFile, "Name %d [%-10.10s]\n",n+1,name);
   }
   fclose (pFile);

   return 0;
}
