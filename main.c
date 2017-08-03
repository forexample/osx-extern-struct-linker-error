#include <foo.h>

#include <stdio.h> // printf

int main(int argc, char** argv)
{
  foo_struct.name = "asd";

#if defined(FOO_APPLY_WORKAROUND)
  printf("%d\n", foo_int);
#endif

  printf("%s\n", foo_struct.name);
  return 0;
}
