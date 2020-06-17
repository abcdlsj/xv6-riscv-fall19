#include "kernel/types.h"
#include "kernel/stat.h"
#include "user/user.h"

int main (int argc, char *argv[]) {
  if (argc != 2) {
    write(2, "Error Message\n", strlen("Error Message\n"));

  }
  int ticks = atoi(argv[1]);
  sleep(ticks);
  exit();
}
