#include <u.h>

main()
{
  asm(LI, 0);
  asm(BIN);
  asm(PSHA);
  asm(POPB);
  asm(LI, 1);
  asm(BOUT);
  asm(HALT);
}