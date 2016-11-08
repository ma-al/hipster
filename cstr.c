/*
testing C string
*/

#include <stdio.h>
#include <string.h>

#define TRUE  1
#define FALSE 0

void reverse(char *);
void out(char *);
void pout(char *, char *);
int  stringIsBad(char *);


int main ()
{
   char originalStr[10] = "malayalam";
   char *ptr = originalStr;

   //memset(originalStr, '\0', 6);
   //puts(originalStr);

   //ptr++;
   //*ptr = 'u';
   //puts(originalStr);

   puts("");
   reverse(originalStr);
   //reverse(NULL);
   
   return 0;
}

void reverse(char *str)
{
   if(stringIsBad(str))
   {
      puts("Error: Empty/Null string");
      return;
   }

   pout("Input string", str);

   char *head = str;
   char *tail = str; 

   while(TRUE)
   {
      //pout("tail", tail);
      printf("%c\n", *tail);
      tail++;
      if(*tail == '\0')
      {
         out("-----");
         break;
      }
   }

   tail--;
   printf("head=%c | tail=%c\n", *head, *tail);
   out("-----");

   while(TRUE)
   {
      pout("BEF", str);
      char tmp = *head;
      //printf("tmp=%c\n", tmp);
      
      *head = *tail;
      *tail = tmp;

      head++;
      tail--;
      pout("AFT", str);

      //printf("head=%c | tail=%c\n", *head, *tail);
      puts("----");

      if(head >= tail)
      {
         break;
      }
   }

   pout("FIN", str);
}



int stringIsBad(char *str)
{
   if(str == NULL || strlen(str) <= 0)
   {
      return TRUE;
   }

   return FALSE;
}

void out(char *msg)
{
   if(stringIsBad(msg))
   {
      puts("LOG ERROR: Bad string");
      return;
   }

   puts(msg);
}

void pout(char *msg, char *str)
{
   if(stringIsBad(msg))
   {
      puts("LOG ERROR: Empty message");
      return;
   }

   if(stringIsBad(str))
   {
      puts(msg);
      return;
   }

   printf("%s:%s\n", msg, str);
}

