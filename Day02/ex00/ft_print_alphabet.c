/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sael-you <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/08 23:21:30 by sael-you          #+#    #+#             */
/*   Updated: 2019/01/10 08:01:29 by sael-you         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_print_alphabet(void)
{
	char alph;

	alph = 'a';
	while (alph <= 'z')
	{
		ft_putchar(alph);
		alph++;
	}
}
