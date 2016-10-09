/*
For normal people: I always update http://ma-al.github.io. Please refer there
for the latest on me.

I was trying to add this is a LinkedIn "media", but LinkedIn kept eating all
my indents!

Also, I'm using that goto purely for aesthetic hipster reasons!
*/

#include <stdio.h>
 
int main ()
{
   int numTimes = 0;
   const char* alwaysUpdated = "http://ma-al.github.io";

   GITHUB:printf("Please go to %s\n", alwaysUpdated);
   if(numTimes++ < 0) goto GITHUB;
   
   return 0;
}

