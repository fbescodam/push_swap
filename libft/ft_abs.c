/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_abs.c                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: fbes <fbes@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/12/02 20:02:21 by fbes          #+#    #+#                 */
/*   Updated: 2021/03/03 18:19:06 by fbes          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_abs(int n)
{
	if (n == -2147483648)
		return (2147483648);
	if (n < 0)
		return ((unsigned int) - n);
	return ((unsigned int)n);
}
