/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sael-you <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/09 07:36:49 by sael-you          #+#    #+#             */
/*   Updated: 2019/01/10 10:47:51 by sael-you         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_count(int nb)
{
	int x;
	int y;

	if (nb > 9)
	{
		x = nb / 10;
		y = nb % 10;
		ft_putchar(x + 48);
		ft_putchar(y + 48);
	}
	else
	{
		ft_putchar('0');
		ft_putchar(nb + 48);
	}
}

void	ft_print_comb2(void)
{
	int i;
	int j;

	i = -1;
	while (++i <= 99)
	{
		j = i;
		while (++j <= 99)
		{
			ft_count(i);
			ft_putchar(' ');
			ft_count(j);
			if (i < 98 || j < 99)
			{
				ft_putchar(',');
				ft_putchar(' ');
			}
		}
	}
}
