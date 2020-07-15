/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plnyakan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/15 16:01:34 by plnyakan          #+#    #+#             */
/*   Updated: 2020/07/15 16:02:05 by plnyakan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int ft_iterative_power(int nb, int power){

	if (power!=0)

		return (nb *ft_iterative_power(nb,power-1));
	else
		return 1;
}

int main(){

	int num =2;
	int exp =2;
	int result=ft_iterative_power(num,exp);

	printf("%d", result);
		return 0;
}
