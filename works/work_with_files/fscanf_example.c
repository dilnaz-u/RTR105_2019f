//http://www.cplusplus.com/reference/cstdio/fscanf/
/* fscanf example */
#include <stdio.h>

int main ()
{
  char str [80];
  float f;
  FILE * pFile;

  pFile = fopen ("myfile.txt","w+");
  fprintf (pFile, "I have read: %f %s", 3.1416, "PI");
  //rewind (pFile);//fseek(pFile,0,SEEK_SET);
  fseek(pFile,4,SEEK_SET);
  fscanf (pFile, "%f", &f);
  fscanf (pFile, "%s", str);
  fclose (pFile);
  printf ("I have read: %f and %s \n",f,str);
  return 0;
}
