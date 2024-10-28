/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: patferna <patferna@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 17:21:49 by patferna          #+#    #+#             */
/*   Updated: 2024/10/25 17:21:49 by patferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int get_num_len(int n)
{
    int len;
    
    len = (n <= 0);
    while (n) 
    {
        n /= 10;
        len++;
    }
    return len;
}

char *ft_itoa(int n)
{
    int len;
    char *ptr;
    
    if (n == INT_MIN)
        return ft_strdup("-2147483648");
    len = get_num_len(n);
    ptr = (char *)malloc(len + 1);
    if (!ptr) 
      return NULL;
    ptr[len] = '\0';
    if (n < 0)
    {
        ptr[0] = '-';
        n = -n;
    }      
    while (len-- && n) 
        {
            ptr[len] = (n % 10) + '0';                                                                                                                                                  n /= 10;
        }
    return ptr;
}

int main(void)
{
    int n = -1234;
    char *str = ft_itoa(n);
    printf("%s\n", str);
    free(str);
    return 0;
}
