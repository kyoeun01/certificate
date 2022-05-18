#include <stdio.h>

main()
{
  int hap, cnt, c;
  
  hap = 2;
  cnt = 2;
  
  while (1)
  {
    c = a + b;
    hap += c;
    cnt++;
    
    if (cnt < 20)
    {
      a = b;
      b = c;
    }
    else
    {
      printf("%d", hap);
      break;
    }
  }
}
