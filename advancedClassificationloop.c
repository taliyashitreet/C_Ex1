#include "NumClass.h"
#include <math.h>
int isPalindrome(int n){
    int tmp=0, remainder, original=n;
    while (n!=0)
    {
        remainder=n%10;
        tmp=tmp*10 +remainder;
        n=n/10;
    }
    if (n==original){
        return 1;
    }
    return 0;

}

int isArmstrong(int n){
   int ndigits=floor(log10(n)) +1;
   int original=n;
   int tmp=0;
   while (n!=0)
   {
      tmp+= pow(n%10,ndigits);
      n=n/10;
   }
   if(tmp==original){
       return 1;
   }
   return 0;
       
   }
   
