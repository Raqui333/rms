#include <stdio.h>

int main() {
  // for test purposes these values are stored in [stack] on /proc/PID/maps
  int var_to_find = 43; // hex 2b
  int var_to_mess = 43; // hex 2b

  while (1) {
    printf("Current value: %d\n", var_to_find);
    printf("Set new value: ");
    scanf("%d", &var_to_find);
  }

  return 0;
}
