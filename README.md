# Get_next_line

This is my 3rd project at 42 Lisbon programming school. The goal is to create a function that takes a file descriptor and returns line by line from the file when called consecutively. After a call, the program saves the position in the file.

## Prototype

```c
char *get_next_line(int fd);
```

## Usage

```c
#include "get_next_line.h"

int main() {
    int fd = open("example.txt", O_RDONLY);
    char *line;

    while ((line = get_next_line(fd)) != NULL) {
        // Process or print the line as needed
        printf("%s\n", line);
        free(line);
    }

    // Close the file descriptor when done
    close(fd);

    return 0;
}

```

## Installation

Clone the repository:
```
git clone git@gitlab.com:dinis-petrukha/get_next_line.git get_next_line
cd get_next_line
```

Execute the Makefile:
```
make
```
---
Feel free to contribute to the project.
