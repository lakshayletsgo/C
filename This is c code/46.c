//To remove a particular character from a given string
#include <stdio.h>
#include <string.h> 
void main() {
  char first[100], second[20];
  int i, j, fsl, ssl, temp, chk = 0;
  
  printf("Enter the String: ");
  gets(first);
  
  printf("Enter a Word: ");
  gets(second);
  
  fsl = strlen(first);
  ssl = strlen(second);

  for (i = 0; i < fsl; i++) {
    temp = i;
    for (j = 0; j < ssl; j++) {
      if (first[i] == second[j])
        i++;
    }
    chk = i - temp;
    if (chk == ssl) {
      i = temp;
      for (j = i; j < (fsl - ssl); j++)
        first[j] = first[j + ssl];
      fsl = fsl - ssl;
      first[j] = '\0';
    }
  }
  printf("\nNew String = %s", first);
}