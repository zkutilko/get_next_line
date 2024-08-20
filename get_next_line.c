/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zkutilko <zkutilko@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/20 18:29:01 by zkutilko          #+#    #+#             */
/*   Updated: 2024/08/20 21:01:06 by zkutilko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*get_next_line(int fd)
{
	char buf[BUFFER_SIZE];
	ssize_t reading;
	if (fd != -1)
	{
		reading = read(fd,buf, BUFFER_SIZE -1);
		while (reading > 0)
		{
			buf[reading] = '/0';
			printf("%s\n", buf);
			reading = read(fd,buf, BUFFER_SIZE -1);
		}
	}
	return (reading);
}
