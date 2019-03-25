/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sael-you <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/22 04:08:34 by sael-you          #+#    #+#             */
/*   Updated: 2019/01/26 09:16:41 by sael-you         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int i;
	int j;
	int *range;

	if (min >= max)
		return (0);
	i = min - 1;
	j = 0;
	while (++i < max)
		j++;
	range = (int *)malloc(j * sizeof(*range));
	i = min - 1;
	j = -1;
	while (++i < max)
		range[++j] = i;
	return (range);
}

int	ft_ultimate_range(int **range, int min, int max)
{
	int i;
	int j;
	int *ultimate_range;

	ultimate_range = ft_range(min, max);
	i = min - 1;
	j = 0;
	while (++i < max)
		j++;
	*range = ultimate_range;
	return (j);
}
