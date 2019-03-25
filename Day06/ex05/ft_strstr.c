/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sael-you <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/16 16:53:54 by sael-you          #+#    #+#             */
/*   Updated: 2019/01/19 23:55:11 by sael-you         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strstr(char *str, char *to_find)
{
	int i;
	int j;

	i = -1;
	j = 0;
	if (!to_find[j])
		return (str);
	while (str[++i])
	{
		j = -1;
		if (str[i] == to_find[++j])
		{
			while (to_find[j] && str[i + j] == to_find[j])
				j++;
			if (!to_find[j])
				return (str + i);
		}
	}
	return (NULL);
}
