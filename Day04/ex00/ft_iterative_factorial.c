/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sael-you <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/12 17:31:17 by sael-you          #+#    #+#             */
/*   Updated: 2019/01/15 05:29:37 by sael-you         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int x;
	int factorial;

	x = nb;
	factorial = 1;
	if (nb >= 13 || nb < 0)
		return (0);
	while (x >= 1)
	{
		factorial = factorial * x;
		x--;
	}
	return (factorial);
}
