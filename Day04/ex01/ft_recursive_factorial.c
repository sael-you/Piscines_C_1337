/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sael-you <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/12 17:42:31 by sael-you          #+#    #+#             */
/*   Updated: 2019/01/15 05:27:45 by sael-you         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_recursive_factorial(int nb)
{
	if (nb >= 13 || nb < 0)
		return (0);
	if (nb >= 1)
		return (nb * ft_recursive_factorial(nb - 1));
	else
		return (1);
}
