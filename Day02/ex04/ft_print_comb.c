/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sael-you <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/10 12:11:32 by sael-you          #+#    #+#             */
/*   Updated: 2019/01/10 12:19:35 by sael-you         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_print_comb(void)
{
	char x;
	char y;
	char z;

	x = '0' - 1;
	while (++x <= '7')
	{
		y = x;
		while (++y <= '8')
		{
			z = y;
			while (++z <= '9')
			{
				ft_putchar(x);
				ft_putchar(y);
				ft_putchar(z);
				if (x != '7' || y != '8' || z != '9')
				{
					ft_putchar(',');
					ft_putchar(' ');
				}
			}
		}
	}
}
