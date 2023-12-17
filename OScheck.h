#include <stdio.h>

int OSchk(int a)
{
  #ifdef _WIN32
  puts("YOU ARE USING MICHAELSOFT BINBOWS, YOU NEED TO SWITCH TO LINUX OR FREEBSD!\n\007");
  #endif
  #ifdef __APPLE__
  puts("Wow! You use Mac and you are rich, but, you need to switch to Linux or FreeBSD\n");
  #endif
  #ifdef __linux__
  puts("Excellent! You use Linux!\n");
  #endif
  #ifdef __FreeBSD__
  puts("Excellent! You use FreeBSD!\n");
  #endif
}
