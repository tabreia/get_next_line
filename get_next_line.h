/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tabreia- <tabreia-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 10:12:35 by tabreia-          #+#    #+#             */
/*   Updated: 2022/11/24 15:28:53 by tabreia-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <stdlib.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 1000
# endif

char	*get_next_line(int fd);
char	*ft_read_to_glbstr(int fd, char *glbstr);
char	*ft_strchr(char *s, int c);
char	*ft_strjoin(char *glbstr, char *buff);
size_t	ft_strlen(char *s);
char	*ft_get_line(char *glbstr);
char	*ft_new_glbstr(char *glbstr);

#endif
