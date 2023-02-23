#ifndef GET_NEXT_LINE_H

# define GET_NEXT_LINE_H

# include <unistd.h>
# include <stdlib.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 10000000
# endif 

int extend_stach(char **stash, char *buf);
void stoch(char **stash, char *buf, int red);
void read_n_stock(int fd, char **stash);
char *get_next_line(int fd);
int found_new_line(char *str);
int char_until_end(char *str);
int ft_strlen(char *str);
void clean_stash(char **stash);
void extract_line(char **stash, char **line);
void ft_strlcpy(char **dst, char *src);

#endif