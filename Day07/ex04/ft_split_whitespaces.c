/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sael-you <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/23 14:25:29 by sael-you          #+#    #+#             */
/*   Updated: 2019/01/26 09:28:37 by sael-you         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int		ft_is_ws(char *str)
{
	int i;
	int ws;

	i = -1;
	ws = 0;
	while (str[++i])
		if (str[i] <= ' ')
			ws++;
	return (ws + 1);
}

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i + 1);
}

void	ft_strcp(int tlen, char **tab, char *str)
{
	int i;
	int j;
	int k;

	i = 0;
	j = 0;
	while (str[i] && i < tlen)
	{
		if (str[i] > ' ')
		{
			k = 0;
			while (str[i] > ' ')
			{
				tab[j][k] = str[i];
				i++;
				k++;
			}
			tab[j][k] = '\0';
			j++;
		}
		i++;
	}
	tab[j] = NULL;
}

char	**ft_split_whitespaces(char *str)
{
	char	**tab;
	int		slen;
	int		i;
	int		j;

	i = 0;
	j = 0;
	tab = (char **)malloc((ft_is_ws(str) + 1) * sizeof(char *));
	while (str[i] && i < ft_strlen(str))
	{
		if (str[i] > ' ')
		{
			slen = 0;
			while (str[i] > ' ')
			{
				slen++;
				i++;
			}
			tab[j] = (char *)malloc((slen + 1) * sizeof(char));
			j++;
		}
		i++;
	}
	ft_strcp(ft_strlen(str), tab, str);
	return (tab);
}
