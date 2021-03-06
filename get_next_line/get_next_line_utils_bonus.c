/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils_bonus.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amalbrei <amalbrei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 19:12:40 by amalbrei          #+#    #+#             */
/*   Updated: 2022/05/29 20:41:38 by amalbrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

/*DESCRIPTION
Function returns the size of the given string (char *s)

PARAMETERS
char *s: string to measure the size of
*/
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

/*DESCRIPTION
Function that finds the character (int c) within the string (char *s),
returning its pointer.

PARAMETERS
char *s: string to find character in
int c: target character to be found
*/
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

/*DESCRIPTION
Function joins two strings together (char *s1 and char *s2).
NOTE: a string that is NULL and a string CONTAINING a null terminator 
are two different strings
CHECK ON 'if (s2)'

PARAMETERS
char *s1: first string (line_read)
char *s2: second string (buff)
*/
char	*ft_strjoin(char *s1, char *s2)
{
	int		i;
	int		j;
	char	*str;

	if (!s1)
	{
		s1 = (char *)malloc(1 * sizeof(char));
		if (!s1 || !s2)
			return (NULL);
		s1[0] = '\0';
	}
	str = malloc(sizeof(char) * ((ft_strlen(s1) + ft_strlen(s2)) + 1));
	if (str == NULL)
		return (NULL);
	i = -1;
	j = 0;
	if (s1)
		while (s1[++i] != '\0')
			str[i] = s1[i];
	while (s2[j] != '\0')
		str[i++] = s2[j++];
	str[ft_strlen(s1) + ft_strlen(s2)] = '\0';
	free(s1);
	return (str);
}

/*DESCRIPTION
Function used to extract the line from the variable obtained from the buffer

PARAMETERS
char *line_read: the line extracted from the buffer
*/
char	*ft_get_line(char *line_read)
{
	int		i;
	char	*str;

	i = 0;
	if (!line_read)
		return (NULL);
	while (line_read[i])
		i++;
	str = (char *)malloc(sizeof(char) * (i + 1));
	if (!str)
		return (NULL);
	i = 0;
	while (line_read[i] && line_read[i] != '\n')
	{
		str[i] = line_read[i];
		i++;
	}
	if (line_read[i] == '\n')
	{
		str[i] = line_read[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}

/*DESCRIPTION
Returns any extra characters found beyond the newline ("\n") and saves it into 
the static variable (line_read) to be extracted and printed out in the next 
call of the entire function

PARAMETERS
char *line_read: line to be saved and returned
*/
char	*ft_save_extra_characters(char *line_read)
{
	int		i;
	int		j;
	char	*str;

	i = 0;
	while (line_read[i] && line_read[i] != '\n')
		i++;
	if (!line_read)
	{
		free(line_read);
		return (NULL);
	}
	str = (char *)malloc(sizeof(char) * (ft_strlen(line_read) - i + 1));
	if (!str)
		return (NULL);
	if (line_read[i] == '\n')
		i++;
	j = 0;
	while (line_read[i])
		str[j++] = line_read[i++];
	str[j] = '\0';
	free(line_read);
	return (str);
}
