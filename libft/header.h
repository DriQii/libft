#ifndef HEADER_H
# define HEADER_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

int ft_isalnum(char c);
int ft_isalpha(char c);
int ft_isdigit(char nb);
char *ft_strcat(char *dest, char *src);
int ft_strcmp(char *s1, char *s2);
char *ft_strcpy(char *dest, char *src);
int ft_strlcat(char *dest, char *src, int size);
int ft_strlen(char *str);
int ft_strncmp(char *s1, char *s2, int n);
char *ft_strncpy(char *dest, char *src, int n);
void	ft_bzero(void *str, int len);
void	*ft_memset(void *str, int c, int count);
void	*ft_memcpy(void *dest, void *src, int len);
void *ft_memccpy(void *dest, void *src, int c, int len);
void *ft_memmove(void *dest, void *src, int len);

#endif
