#include "get_next_line.h"
#include <fcntl.h>  // For open() function
#include <stdio.h>

int main() {
    int fd;
    char *line;

    fd = open("prueba.txt", O_RDONLY);  // Open a file to test
    if (fd == -1) {
        perror("Error opening file");
        return 1;
    }

    while ((line = get_next_line(fd)) != NULL) {
        printf("%s", line);  // Print the line
        free(line);          // Don't forget to free the line after use
    }

    close(fd);  // Close the file
    return 0;
}