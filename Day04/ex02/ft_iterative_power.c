/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sael-you <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/12 17:54:04 by sael-you          #+#    #+#             */
/*   Updated: 2019/01/14 23:50:59 by sael-you         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int result;
	int	i;

	i = 0;
	result = 1;
	if (power < 0)
		return (0);
	while (++i <= power)
		result *= nb;
	return (result);
}
