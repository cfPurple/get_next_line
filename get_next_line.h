/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfelix <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 15:36:51 by cfelix            #+#    #+#             */
/*   Updated: 2022/12/14 15:37:02 by cfelix           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H

# define GET_NEXT_LINE_H

# include <unistd.h>
# include <stdlib.h>

#include <sys/types.h>
#include <sys/uio.h>
#include <unistd.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 5
# endif 

typedef struct s_list
{
	char 			*content;
	struct s_list	*next;
}				t_list;

char	*get_next_line(int fd);
int found_new_line(t_list *stash);
t_list *ft_lst_get_last(t_list *stash);
void generate_line(char **line, t_list *stash);
void free_stash(t_list *stash);
int ft_strlen(const char *str);
void read_and_stash(int fd, t_list **stash);
void add_to_stash(t_list **stash, char *buf, int red);
void extract_line(t_list *stash, char **line);
void clean_stash(t_list **stash);

#endif
