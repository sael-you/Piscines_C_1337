/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sael-you <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/10 04:47:10 by sael-you          #+#    #+#             */
/*   Updated: 2019/01/10 08:40:21 by sael-you         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_print(int *tab, int nb)
{
	int i;

	i = 0;
	while (++i < nb)
		if (tab[i - 1] >= tab[i])
			return ;
	i = -1;
	while (++i < nb)
		ft_putchar(tab[i] + 48);
	if (tab[0] < (10 - nb))
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	ft_print_combn(int nb)
{
	int tab[10];
	int i;

	if (nb > 10 || nb <= 0)
		return ;
	i = -1;
	while (++i < nb)
		tab[i] = i;
	while (tab[0] <= (10 - nb))
	{
		ft_print(tab, nb);
		if (nb == 10)
			break ;
		tab[nb - 1]++;
		i = nb;
		while (i && nb > 1)
		{
			i--;
			if (tab[i] > 9)
			{
				tab[i - 1]++;
				tab[i] = 0;
			}
		}
	}
}
