/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elteran <elteran@student.42madrid.>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 10:58:22 by elteran           #+#    #+#             */
/*   Updated: 2023/09/23 15:54:08 by elteran          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <stdio.h>

int	main(void)
{
	char		str[13] = "no";
	char		si[] = "hola";
	char		no[] = "hola";
	size_t		n = 4;
	char		src[] = "HOLA!";
    char		dest[] = "";
	char		a[] = "cadena vieja";
	const char 	b[]  = "cadena nueva";
	char 		c[]  = "cadena vieja";
	const char 	d[]  = "cadena nueva";
	char 		g[] = "Hello, world!";
    char 		v[10];
	char 		l[] = "Hello, world!";
	char 		m[20];  
	char		k[] = "coñodesumadre";
	char		e[] = "hola";
	char		f[] = "hola";
	char		h[] = "hola";
	char		i[] = "hola";
	const char	scmp1[] = "hala";
	const char	scmp2[] = "hola";
	int			scmp3 = '5';
	int			result = ft_strncmp(scmp1, scmp2, scmp3);

	printf("isalnum es %i\n", ft_isalnum('1'));
	printf("isalpha es %i\n", ft_isalpha('A'));
	printf("\n");
	printf("isdigit es %i\n", ft_isdigit('a'));
	printf("\n");
	printf("isascii es %d\n", ft_isascii('c'));
	printf("isascii original es %d\n", isascii('c'));
	printf("\n");
	printf("isprint es %i\n", ft_isprint('c'));
	printf("\n");
	printf("strlen original es %lu\n", strlen("coñodelamadre"));
	printf("strlen es %lu\n", ft_strlen("coñodelamadre"));
	printf("\n");
	printf("memset original es %s\n", memset(str, 'B', 10));
	printf("memset es %s\n", ft_memset(str, 'B', 10));
	printf("\n");
	printf("toupper original %c\n", toupper('b'));
	printf("toupper %c\n", ft_toupper('b'));
	printf("toupper original %c\n", tolower('B'));
	printf("toupper %c\n", ft_tolower('b'));
	printf("\n");
	printf("bzero original antes es :%s\n", si);
	bzero(si, n);
	printf("bzero original es:%s\n", si);
	printf("bzero antes es:%s\n", no);
	ft_bzero(no, n);
	printf("bzero es:%s\n", no);
	printf("\n");
	printf("original string: %s\n", dest);
	ft_memcpy(dest, src, ft_strlen(src)+ 1);
	printf("Copied string: %s\n", dest);
	printf("\n");
	printf("original memmove a = %s, b = %s\n", a, b);
	memmove(a, b, 8);
	printf("original memmove a = %s, b = %s\n", a, b);
	printf("\n");
	printf("Before memmove c = %s, d = %s\n", c, d);
	ft_memmove(c, d, 8);
	printf("after memmove c = %s, d = %s\n", c, d);
	printf("\n");
    printf("original Copied %zu characters: %s\n", strlcpy(v, g, 7), v);
    printf("Copied %zu characters: %s\n", ft_strlcpy(m, l, 7), m);
	printf("\n");
	printf("strchr original : %s\n", strchr(k, 'o'));
	printf("strchr original : %ld\n", strchr(k, 'o') - k);
	printf("strchr : %ld\n", ft_strchr(k, 'o') - k);
	printf("\n");
	printf("strrchr : %s\n", ft_strrchr(k, 'o'));
	printf("strrchr : %ld\n", strrchr(k, 'o') - k);
	printf("ft_strrchr : %ld\n", ft_strrchr(k, 'o') - k);
	printf("\n");
	printf("strlcat =%zu\n", strlcat(e, f, 5));
	printf("ft_strlcat =%zu\n", ft_strlcat(h, i, 30));
	printf("\n");
	printf("%d\n", result);
	printf("%d\n", strncmp(scmp1, scmp2, scmp3));
	printf("\n");
}
