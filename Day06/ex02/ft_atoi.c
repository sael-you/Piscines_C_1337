/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sael-you <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/13 18:53:35 by sael-you          #+#    #+#             */
/*   Updated: 2019/01/19 17:12:38 by sael-you         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	unsigned int	nb;
	int				i;
	int				sign;

	sign = 1;
	nb = 0;
	i = 0;
	while (!str)
		return (nb);
	while (str[i] <= ' ')
		i++;
	if (str[i] == '-')
		sign = -1;
	if (str[i] == '-' || str[i] == '+')
		i++;
	while (str[i] >= '0' && str[i] <= '9')
		nb = (nb * 10) + (str[i++] - 48);
	return (nb * sign);
}
