/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nchairun <nchairun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 01:50:32 by nchairun          #+#    #+#             */
/*   Updated: 2025/03/24 08:32:35 by nchairun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 42
# endif

# include <fcntl.h>
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

// get_next_line.c
void	clear_buffer(char buffer[]);
void	next_line(char buffer[]);
char	*get_next_line(int fd);
char	*read_into_buffer(char *buffer, int fd);

// get_next_line_utils.c
char	*ft_strchr_gnl(const char *ptr_string, int ptr_find);
char	*ft_strjoin_free(char *s1, char *s2);
char	*ft_strjoin_gnl(char *s1, char *s2);
int		ft_strlcpy_gnl(char *dst, const char *src, int dstsize);
int		ft_strlen_gnl(const char *str);

#endif
