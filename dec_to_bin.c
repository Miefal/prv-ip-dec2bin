#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

void load_menu(void);
void dectobin(int ipaddr[]);
void bintodec();

int main()
{
    load_menu();
    return 0;
}

void load_menu(void)
{
    int choice;
 
    do
    {
        printf("-------Menu-------\n\n");
        printf(" 1. DectoBin\n");
        printf(" 2. BintoDec\n");
        printf(" 3. Exit\n");
        printf(" Choice: ");
        scanf("%d",&choice);
 
        switch(choice)
        {
            case 1: void dectobin(int ipaddr[]); break;
            case 2: void bintodec(void); break;
            case 3: printf("Quitting program!\n"); exit(0); break;
            default: printf("Invalid choice!\n"); break;
        }
  } while (choice != 3);
}

  void dectobin(int ipaddr[]){
  	
  char decstring[4][4];
  int i;
  printf("Enter 32-bit IP address in dotted decimal notation (xxx.xxx.xxx.xxx): ");
  fflush(stdout);
  if (scanf("%[^.].%[^.].%[^.].%[^\r\n]", decstring[0], decstring[1], decstring[2], decstring[3]) < 4) 
    printf("Invalid input string (wrong IP address format)\n");
  
  for (i=0; i<4; i++)
    ipaddr[i] = atoi(decstring[i]); 
    if (ipaddr[i] < 0 || ipaddr[i] > 255)
      printf("Invalid input string (incorrect numbers for IP address)\n");
      
      /* Flushes input buffer from the newline from scanf() */
      int ch;
    while ( (ch = getchar()) != '\n' && ch != EOF) ;
 
    printf("\n\nPress ENTER to continue.");
    while ( (ch = getchar()) != '\n' && ch != EOF);
        
   return;
}


void bintodec(void){
	printf("hello");//insert code//
}
