
#include <stdio.h>

int main(void){
   int i;
   int v[] =
      {0x74113bc,
       0x7494f54,
       0x74e782c,
       0x759c6ad,
       0x76201ad,
       0x76a44b2,
       0x7727a69,
       0x77ab9e3,
       0x782f0cc,
       0x78b34df,
       0x79370d3,
       0x79baf5f,
       0x7a3f4df,
       0x7ac2a23,
       0x7b46cde,
       0x7bca0e3,
       0x7c51054,
       0x7cd23a3,
       0x7d5627e,
       0x7dd9a63,
       0x7e5e105,
       0x7eb8f12,
       0x7f65b74,
       0x7fe8ffb,
       0x806cce9,
       0x80f0fba,
       0x8174c17,
       0x81b6a24};
   
   for (i=0; i<sizeof(v)/sizeof(int); i++)
   {
      printf("%8d\n",v[i]);
   }
   return 0;
}
