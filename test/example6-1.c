#include <stdio.h>

main()
{
  int a, b, big, small, mok, nmg, gcm, lcm;
  scanf("%d %d, &a, &b);
        
  if(a >= b)
  {
    big = a;
    small = b; // 수행 후 while문
  }
  else
  {
    big = b;
    small = a; // 수행 후 while문
  }
        
  while (1)
  {
     mok = big / small;
     nmg = big - mok * small;
    
     if (nmg == 0)
     {
       gcm = small;
       lcm = a * b / gcm;
       printf("%d %d, gcm, lcm);
       break;
     }              
     big = small;
     small = nmg;
  }
}                   

//0527  
