/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: patferna <patferna@student.42madrid.com>   #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-10-16 13:02:45 by patferna          #+#    #+#             */
/*   Updated: 2024-10-16 13:02:45 by patferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(const char *str)
{
	int	result;
	int	flag;
	int	i;

	result = 0;
	flag = 1;
	i = 0;
	while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n'
		|| str[i] == '\v' || str[i] == '\f' || str[i] == '\r'
		|| str[i] == '+')
		i++;
	if (str[i] == '-' )
		flag = -1;
	//i++; se quita porq sino avanza dos
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = result * 10 + (str[i] - '0');
		i++;
	}
	return (result * flag);
}

int main (void)
{
	char str[] = " \t\n+458";
	printf("%d\n", ft_atoi(str));
	return (0);
}
