#include <stdio.h>
#include<math.h>
int main()
{
   int i, x;
   char str[100];

   printf("\nPlease enter a string\t");
   gets(str);

  
      for(i = 0; (i < 100 && str[i] != '\0'); i++)
        str[i] = str[i] + 3; //in this 3 is added to the ascii value.

      printf("\nEncrypted string: %s\n", str);
   return 0;
}