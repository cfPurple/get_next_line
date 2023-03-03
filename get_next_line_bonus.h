/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfelix <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 13:52:59 by cfelix            #+#    #+#             */
/*   Updated: 2023/02/23 13:53:08 by cfelix           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_BONUS_H

# define GET_NEXT_LINE_BONUS_H

# include <unistd.h>
# include <stdlib.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 42
# endif

# ifndef FD_SIZE
#  define FD_SIZE 65535
# endif 

int		extend_stash(char **stash, char *buf);
void	stock(char **stash, char *buf, int red);
void	read_n_stock(int fd, char **stash);
char	*get_next_line(int fd);
int		found_new_line(char *str);
int		char_until_end(char *str);
int		ft_strlen(char *str);
void	clean_stash(char **stash);
void	extract_line(char **stash, char **line);
void	ft_strlcpy(char **dst, char *src);

#endif
