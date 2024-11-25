/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpetrukh <dpetrukh@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 15:59:29 by dpetrukh          #+#    #+#             */
/*   Updated: 2023/11/15 15:18:50 by dpetrukh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 10
# endif

# include <stdio.h>
# include <stdlib.h>
# include <fcntl.h>
# include <unistd.h>

char	*ft_strdup(char *str);
char	*ft_calloc(int bytes, int size);
int		ft_strlen(char	*str);
char	*ft_strjoin(char *str1, char *str2);
int		ft_strchr(char *str, int c);
char	*ft_clean(char *buffer);
void	load_buffer(char *buffer, char *str);
int		ft_update_buffer(char *buffer, int check_point);
char	*ft_read(int fd, char *ptr_to_buf, char *line);
char	*get_next_line(int fd);

#endif
