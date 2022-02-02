#include <stdio.h>
struct engine
{
    //yom is year of Manufacturing and mat is material used 
  char serial[3];
  int quantity;
  int yom;
  char mat[40];
} car[10];

int main ()
{
  int n;
  printf ("ITPGROUP_17\n");
  printf ("enter no of parts :");
  scanf (" %d", &n);
  for (int i = 0; i < n; i++)
    {
      printf ("serial no:");
      scanf ("%s", car[i].serial);
      printf ("Quantity:");
      scanf ("%d", &car[i].quantity);
      printf ("Year Of Manufacturing:");
      scanf ("%d", &car[i].yom);
      printf ("Material Used:");
      scanf ("%s", car[i].mat);
    }
  for (int i = 0; i < n; i++)
    {
      if (car[i].serial[0] == 'A')
	continue;

      if (car[i].serial[0] > 'C')
	continue;


      if ((car[i].serial[0] == 'C' && car[i].serial[2] > '6'))
	continue;

      printf ("Info about the parts with serial no.between BB1 and CC6\n:");

      printf
	("serial no:%s\nQuantity:%d\nYear of Manufacturing:%d\nMaterialUsed:%s",
	 car[i].serial, car[i].quantity, car[i].yom, car[i].mat);
    }
  return 0;

}