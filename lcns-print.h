#include <stdio.h>
#define A "GPL v2"
#define B "GPL v3"
#define C "MIT"
#define D "BSD"
#define E "Apache v2.0"
#define F "LGPL"
#define G "AGPL"
int main(int argc, char** argv)
{
  if (argv[1] == A || argv[1] == B || argv[1] == F || argv[1] == G) puts("FLOSS, copyleft\n");
  else if (argv[1] == C || argv[1] == D || argv[1] == E) puts("FLOSS, copyright\n");
  else puts("ABSOLUTELY PROPRIETARY\n");
}
