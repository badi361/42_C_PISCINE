/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bguzel <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/07 17:39:48 by bguzel            #+#    #+#             */
/*   Updated: 2022/09/08 15:41:19 by bguzel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{

	if (b != 0)
	{
		*div = a / b;
		*mod = a % b;
	}

}
int	main()
{
	int x;
	int y;
	int a;
	int b;
	a = 15;
	b = 5;

	ft_div_mod(a,b,&x,&y);
    printf("%d\n",x);
	printf("%d", y);
}	
