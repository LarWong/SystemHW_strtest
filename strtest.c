#include<stdio.h>
#include<string.h>

int main(){


    //Testing strcmp()
   char first[] = "abcd";
   char second[] = "abcd";
   char third[] = "abdc";
   char fourth[] = "ABCD";
   char fifth[] = "xtdgg";


   //first and second: true
   printf("%s compared to %s : %d \n", first,second,strcmp(first,second));
    
   printf("%s compared to %s : %d \n", first,third,strcmp(first,third));

   printf("%s compared to %s : %d \n", first,fourth,strcmp(first,fourth));

   printf("%s compared to %s : %d \n", first,fifth,strcmp(first,fifth));
   // uppercase and lowercase differ by 32
   
   char nfirst[] = "abcd";
   char nsecond[] = "abce";
   char nthird[] = "acfr";
   char nfourth[] = "bvdf";

   printf("%s compared to %s (First %d chars): %d \n", nfirst,nsecond,3,strncmp(nfirst,nsecond,3));

   printf("%s compared to %s (First %d chars): %d \n", nfirst,nsecond,4,strncmp(nfirst,nsecond,4));

   printf("%s compared to %s (First char): %d \n", nthird,nfourth,strncmp(nthird,nfourth,1));

   printf("%s compared to %s (First char): %d \n", nfirst,nthird,strncmp(nfirst,nthird,1));

   return 0;
}

