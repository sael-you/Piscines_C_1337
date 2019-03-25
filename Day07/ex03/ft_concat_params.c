/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_concat_params.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sael-you <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/22 07:37:12 by sael-you          #+#    #+#             */
/*   Updated: 2019/01/26 09:27:07 by sael-you         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(int argc, char **argv)
{
	int i;
	int j;
	int cmpt;

	i = 0;
	cmpt = 0;
	while (++i < argc)
	{
		j = -1;
		while (argv[i][++j])
			cmpt++;
		cmpt++;
	}
	return (cmpt);
}

char	*ft_concat_params(int argc, char **argv)
{
	int		i;
	int		j;
	int		cmpt;
	char	*catpara;

	cmpt = ft_strlen(argc, argv);
	catpara = (char *)malloc(cmpt * sizeof(char));
	i = 0;
	cmpt = -1;
	while (++i < argc)
	{
		j = -1;
		while (argv[i][++j])
			catpara[++cmpt] = argv[i][j];
		catpara[++cmpt] = '\n';
	}
	catpara[cmpt] = '\0';
	return (catpara);
}
