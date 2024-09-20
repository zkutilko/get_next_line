/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zkutilko <zkutilko@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 19:08:49 by zkutilko          #+#    #+#             */
/*   Updated: 2024/09/15 16:57:57 by zkutilko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int	ft_len(char *str)
{
	size_t	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

// int main()
// {
// 	char *str = "ahoj";
// 	int count;
// 	count = ft_strlen(str);
// 	printf("%d", count);
// 	return (0);
// }
char	*ft_strjoin(char *str1, char *str2)
{
	int		i;
	int		j;
	char	*ptr;

	if (!str1)
	{
		str1 = (char *)malloc(1 * sizeof(char));
		str1[0] = '\0';
	}
	if (!str2)
		return (NULL);
	ptr = (char *)malloc(sizeof (char) * (ft_len(str1) + ft_len(str2) + 1));
	if (!ptr)
		return (NULL);
	i = -1;
	j = 0;
	while (str1[++i] != '\0')
		ptr[i] = str1[i];
	while (str2[j] != '\0')
		ptr[i++] = str2[j++];
	ptr[ft_len(str1) + ft_len(str2)] = '\0';
	free(str1);
	return (ptr);
}
// int main()
// {
// 	char *str1 = "ahoj ";
// 	char *str2 = "brouku";
// 	char *join;
// 	join = ft_strjoin(str1, str2);
// 	printf("%s", join);
// 	return (0);
//

char	*ft_strchr(const char *str, int c)
{
	int			i;
	const char	*p;

	if (str == NULL)
		return (NULL);
	i = 0;
	p = str;
	while (p[i] != '\0')
	{
		if (p[i] == (char) c)
			return ((char *)&p[i]);
		i++;
	}
	if ((char) c == p[i])
		return ((char *)&p[i]);
	return (NULL);
}
// int main()
// {
// 	char *str1 = "ahojgfdshbgjjj ";
// 	char c = 'j';
// 	char *chr;
// 	chr = ft_strchr(str1, c);
// 	printf("%s", chr);
// 	return (0);
// }

char	*get_single_line(char *str)
{
	int		i;
	char	*ptr;

	i = 0;
	if (!str[i])
		return (NULL);
	while (str[i] && str[i] != '\n')
		i++;
	ptr = (char *)malloc(sizeof(char) * (i + 2));
	if (!ptr)
		return (NULL);
	i = 0;
	while (str[i] && str[i] != '\n')
	{
		ptr[i] = str[i];
		i++;
	}
	if (str[i] == '\n')
	{
		ptr[i] = str[i];
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}

// int main()
// {
// 	char str[] = "hdbv\n";
// 	char *test;

// 	test = get_single_line(str);
// 	printf("%s", test);
// }
