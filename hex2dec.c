
#include <stdio.h>

int main(void){
   int i;
   int v[] =
      {0x74113bc,
       0x7404f54,
       0x740782c,
       0x750c6ad,
       0x76201ad,
       0x81b6a24};
   
   for (i=0; i<sizeof(v)/sizeof(int); i++)
   {
      printf("%8d\n",v[i]);
   }
   return 0;
}
