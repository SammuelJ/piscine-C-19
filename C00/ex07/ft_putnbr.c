/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjanssen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/13 22:29:49 by sjanssen          #+#    #+#             */
/*   Updated: 2019/08/13 23:35:24 by sjanssen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <unistd.h>

void		ft_putnbr(int nb)
{
	char a;
	
	if(nb < 0)
	{
		nb *= -1;
		write(1, "-", 1);
	}
	if(nb > 10)
	{
		ft_putnbr(nb/10);
	}
	a = nb % 10 + '0';
	write(1, &a, 1);
}



int main(void)
{
	ft_putnbr(-524);
	return 0;
}