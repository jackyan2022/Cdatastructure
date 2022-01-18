#include <stdio.h>
#include <string.h>
int main() {
  /* define first_name */
  /* define last_name */
  char name[100];

  char first_name[50] = "John";
  char last_name[50] = "Doe";
  sprintf(name, "%s %s", first_name, last_name);
  if (strncmp(name, "John Boe", 100) == 0) {
      printf("Done!\n");
  }
  name[0]='\0';
  strncat(name,first_name,4);
  strncat(name,last_name,20);
  printf("%s\n",name);
  return 0;
}