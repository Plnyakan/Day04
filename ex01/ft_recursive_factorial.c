/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plnyakan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/15 14:53:06 by plnyakan          #+#    #+#             */
/*   Updated: 2020/07/15 15:35:52 by plnyakan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int ft_recursive_factorial(int nb){



		if( nb>=1)
			return (nb * ft_recursive_factorial(nb-1));
	else
		return 1;


}


int  main(){
		
}

