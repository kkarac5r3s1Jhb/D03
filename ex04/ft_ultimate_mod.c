/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_mod.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkara <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/10 13:02:53 by kkara             #+#    #+#             */
/*   Updated: 2020/07/10 13:07:29 by kkara            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a,int *b)
{
	int 	div;
	int 	mod;

	div = *a / *b;
	mod = *a % *b;

	*a = div;
	*b = mod;
}
