/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tabreia- <tabreia-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 10:12:58 by tabreia-          #+#    #+#             */
/*   Updated: 2022/11/24 15:27:27 by tabreia-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

size_t	ft_strlen(char *s)
{
	size_t	i;

	i = 0;
	if (!s)
		return (0);
	while (s[i] != '\0')
		i++;
	return (i);
}

char	*ft_strchr(char *s, int c)
{
	int	i;

	i = 0;
	if (!s)
		return (0);
	if (c == '\0')
		return ((char *)&s[ft_strlen(s)]);
	while (s[i] != '\0')
	{
		if (s[i] == (char) c)
			return ((char *)&s[i]);
		i++;
	}
	return (0);
}

char	*ft_strjoin(char *glbstr, char *buff)
{
	size_t	i;
	size_t	j;
	char	*str;

	if (!glbstr)
	{
		glbstr = (char *)malloc(1 * sizeof(char));
		glbstr[0] = '\0';
	}
	if (!glbstr || !buff)
		return (NULL);
	str = malloc(sizeof(char) * ((ft_strlen(glbstr) + ft_strlen(buff)) + 1));
	if (str == NULL)
		return (NULL);
	i = -1;
	j = 0;
	if (glbstr)
		while (glbstr[++i] != '\0')
			str[i] = glbstr[i];
	while (buff[j] != '\0')
		str[i++] = buff[j++];
	str[ft_strlen(glbstr) + ft_strlen(buff)] = '\0';
	free(glbstr);
	return (str);
}

char	*ft_get_line(char *glbstr)
{
	int		i;
	char	*str;

	i = 0;
	if (!glbstr[i])
		return (NULL);
	while (glbstr[i] && glbstr[i] != '\n')
		i++;
	str = (char *)malloc(sizeof(char) * (i + 2));
	if (!str)
		return (NULL);
	i = 0;
	while (glbstr[i] && glbstr[i] != '\n')
	{
		str[i] = glbstr[i];
		i++;
	}
	if (glbstr[i] == '\n')
	{
		str[i] = glbstr[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}

char	*ft_new_glbstr(char *glbstr)
{
	int		i;
	int		j;
	char	*str;

	i = 0;
	while (glbstr[i] && glbstr[i] != '\n')
		i++;
	if (!glbstr[i])
	{
		free(glbstr);
		return (NULL);
	}
	str = (char *)malloc(sizeof(char) * (ft_strlen(glbstr) - i + 1));
	if (!str)
		return (NULL);
	i++;
	j = 0;
	while (glbstr[i])
		str[j++] = glbstr[i++];
	str[j] = '\0';
	free(glbstr);
	return (str);
}
