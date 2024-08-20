/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zkutilko <zkutilko@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 19:05:26 by zkutilko          #+#    #+#             */
/*   Updated: 2024/08/20 19:35:58 by zkutilko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

#define BUFFER_SIZE 1024

int ft_strlen(char *str);
char	*ft_strjoin(char *str1, char *str2);
char	*ft_strchr(const char *str, int c);
int	*get_next_line(int fd);

#endif
