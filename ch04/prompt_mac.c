#include <stdio.h>
#include <stdlib.h>

#include <editline/readline.h>
#include <editline/history.h>

int main(int argc, char** argv) {
  /* Print Version and Exit Information */
  puts("Lispy Version 0.0.0.2");
  puts("Press Ctrl+c to Exit\n");

  /* In a never ending loop */
  while(1) {
    /* Output our prompt and get input */
    char* input = readline("lispy> ");
    
    /* Add input to history */
    add_history(input);
    
    /* Echo input back to user */
    printf("No you're a %s", input);
    
    /* Free retrived input */
    free(input);
  }
  return 0;
}
