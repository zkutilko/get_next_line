/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zkutilko <zkutilko@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 19:08:49 by zkutilko          #+#    #+#             */
/*   Updated: 2024/08/20 18:28:54 by zkutilko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int ft_strlen(char *str)
{
	int	i;
	i = 0;

	while(str[i] != '\0')
		i++;
	return i;
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
	int i;
	int j;
	char *ptr;

	if (!str1 && !str2)
		return (NULL);
	ptr = (char *)malloc(sizeof (char) * (ft_strlen(str1) + ft_strlen(str2)) + 1);
	if (!ptr)
		return (NULL);
	i = 0;
	j = 0;
	while (str1[i] != '\0')
	{
		ptr[i] = str1[i];
		i++;
	}
	while (str2[j] != '\0')
	{
		ptr[i] = str2[j];
		i++;
		j++;
	}
	ptr[i] = '\0';
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
// }
char	*ft_strchr(const char *str, int c)
{
	int	i;
	const char	*p;

	i = 0;
	p = str;
	while (p[i] != '\0')
	{
		if (p[i] == c)
			return ((char *)&p[i]);
		i++;
	}
	if ((char) c == p[i])
		return ((char *)&p[i]);
	return (0);
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
