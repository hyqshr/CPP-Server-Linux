#include <stdio.h>
#include <sys/socket.h>
#include <unistd.h>
#include <stdlib.h>
#include <netinet/in.h>
#include <string.h>
#include <sys/types.h>
#include <fcntl.h>
#include <sys/sendfile.h>
#include <sys/stat.h>
#include <errno.h>

char* parse(char line[], const char symbol[]);
char* parse_method(char line[], const char symbol[]);
char* find_token(char line[], const char symbol[], const char match[]);
int send_message(int fd, char image_path[], char head[]);
bool isGetMethod(const char* parse_string_method);

#define PORT 8080
