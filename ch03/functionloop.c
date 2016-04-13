#include <stdio.h>

void hello_world(int n) {
  for (int i = 0; i < n; i++) {
    puts("Hello, world!");
  }
}

int main(int argc, char** argv) {
  hello_world(5);
  return 0;
}
