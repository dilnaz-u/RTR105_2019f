#include<stdio.h>

void main(){
 int a=7, b=2;


 printf("Studying of arithmetic operations: +, -, *, /, %c, ++, --\n",'%');

 printf("In the beginig value of a is %d and value of b is %d\n",a,b);
 printf("%d + %d = %d (sizeof \"a+b\" %lu byte(s))\n",a,b,a+b,sizeof(a+b));

 printf("Value of a is %d and value of b is %d after \"+\" and before \"-\"\n",a,b);
 printf("%d - %d = %d (sizeof \"a-b\" %lu byte(s))\n",a,b,a-b,sizeof(a-b));

 printf("Value of a is %d and value of b is %d after \"-\" and before \"*\"\n",a,b);
 printf("%d * %d = %d (sizeof \"a*b\" %lu byte(s))\n",a,b,a*b,sizeof(a*b));

 printf("Value of a is %d and value of b is %d after \"*\" and before \"/\"\n",a,b);
 printf("%d / %d = %d (sizeof \"a/b\" %lu byte(s))\n",a,b,a/b,sizeof(a/b));

 printf("%d / %d = %.1f (result of using a/b even with f format)\n",a,b,(float)(a/b));
 printf("%d / %d = %.1f (result of using (float)a/b)\n",a,b,(float)a/b);

 printf("Value of a is %d after \"/\" and before \"a++\"\n",a);
 printf("%d++ = %d (sizeof \"a++\" %lu byte(s))\n",a,a++,sizeof(a++));

 printf("Value of a is %d after \"a++\" and before \"++a\"\n",a);
 printf("++%d = %d (sizeof \"++a\" %lu byte(s))\n",a,++a,sizeof(++a));
 printf("Value of a is %d after \"++a\"\n",a);


 printf("\n\nStudying of relational operations: ==, !=, >, <, >=, <=\n");
 printf("In the beginig value of a is %d and value of b is %d\n",a,b);

 printf("\n\nStudying of logical operations: &&, ||, !\n");
 printf("In the beginig value of a is %d and value of b is %d\n",a,b);

 printf("\n\nStudying of bitwise operations: &, |, ^, ~, <<, >>\n");
 printf("In the beginig value of a is %d and value of b is %d\n",a,b);

 printf("\n\nStudying of assignment operations: =, +=, -=, *=, /=, %c=, <<=, >>=, &=, ^=, |=\n",'%');
 printf("In the beginig value of a is %d and value of b is %d\n",a,b);

}
