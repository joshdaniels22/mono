#include <stdio.h>
#include <time.h>
#include <unistd.h>
#include <stdlib.h>

int main() {
      time_t timer;
    char buffer[26];
    struct tm* tm_info;

    timer = time(NULL);
    tm_info = localtime(&timer);

    strftime(buffer, 26, "%y_%m_%d_%a.md", tm_info);
      FILE *fptr;

  // Create a file on your computer (filename.txt)
  fptr = fopen(buffer, "r");

  if (fptr != NULL) {
    char defaultTextEditor[] = "nvim";
    int sleepDuration = 1;
    printf("Note Already Exists: %s.\n", buffer);
    sleep(sleepDuration);

    printf("Opening note with %s...\n", defaultTextEditor);
    sleep(sleepDuration);

    char *argv[] = {defaultTextEditor, buffer, NULL};
    execvp(argv[0], argv);

    return 0;
  }

  fptr = fopen(buffer, "w");
  // Close the file
  fclose(fptr);


    printf("Note Generated: %s.\n", buffer);

    return 0;
}
