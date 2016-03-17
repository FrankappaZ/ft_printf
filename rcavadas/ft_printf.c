/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcavadas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/16 15:03:56 by rcavadas          #+#    #+#             */
/*   Updated: 2016/03/16 15:03:57 by rcavadas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


# include "ft_printf.h"

int	ft_printf(const char *restrict format, ...)
{
	va_list	args;

	va_start(args, format);
	return (0);
}