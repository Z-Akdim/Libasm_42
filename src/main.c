/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zakdim <zakdim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/11 13:22:40 by zakdim            #+#    #+#             */
/*   Updated: 2021/05/11 13:57:13 by zakdim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libasm.h"

int main()
{
	 char	*str;
	 char	*str12;
	int		fd;
	char	dest[100] = "akdim";
	char	dest1[100] = "akdim";
	char	str1[] = "hhh";
	char	str2[] = "hhyyh";
	char	*s1 = "hello world";
	
	// str = malloc(sizeof(char) * 40);
	// str12 = malloc(sizeof(char) * 40);
	//	############## FT_STRCMP
	// printf("my  : %d\n", ft_strcmp(str1, str2));
	// printf("orig: %d\n",    strcmp(str1, str2));


	//	############## FT_STRCPY
	// printf("dest before: |%s|\n", dest);
	// printf("my  : |%s|\n", ft_strcpy(dest, ""));
	// printf("dest after : |%s|\n", dest);
	// printf ("\n");
	// printf("dest1 before: |%s|\n", dest1);
	// printf("orig: |%s|\n", strcpy(dest1, ""));
	// printf("dest1 after : |%s|\n", dest1);

	// ############## FT_STRLEN
	// printf("my  : %zu\n", ft_strlen("NULL"));
	// printf("orig: %zu\n", strlen("NULL"));
	// printf("my  : %zu\n", ft_strlen(""));
	// printf("orig: %zu\n", strlen(""));
	// printf("my  : %zu\n", ft_strlen(s1));
	// printf("orig: %zu\n", strlen(s1));
	// printf("my  : %zu\n", ft_strlen("-1"));
	// printf("orig: %zu\n", strlen("-1"));

	// ############## FT_STRDUP
	// printf("ft_strdup  : |%s|\n", ft_strdup("Hello"));
	// printf("strdup: |%s|\n", strdup("Hello"));
	// printf("ft_strdup  : |%s|\n", ft_strdup(""));
	// printf("strdup: |%s|\n", strdup(""));
	// printf("ft_strdup  : |%s|\n", ft_strdup("NULL"));
	// printf("strdup: |%s|\n",  strdup("NULL"));

	//	############## FT_READ
	//fd = open("ft_read.s", O_RDONLY);
	//printf("my  : %d | %s\n", (int)ft_read(fd, str, 60), str);
	//printf("orig: %d | %s\n", (int)read(fd, str12, 60), str12);

	//printf("my  : %d | %s\n", (int)ft_read(-1, str, 5), str);
	//printf("orig: %d | %s\n", (int)read(-1, str12, 5), str12);
	//perror(str12);

	//printf("my  : %d | %s\n", (int)ft_read(1, str, 5), str);
	//printf("orig: %d | %s\n", (int)read(1, str12, 5), str12);

	//	############## FT_WRITE
	// printf("my  : %d\n", (int)ft_write(1, "NULL\n", 5));
	// printf("orig: %d\n", (int)write(1, "NULL\n", 5));
	// printf("my  : %d\n", (int)ft_write(1, NULL, 5));
	// printf("orig: %d\n", (int)write(1, NULL, 5));
	// printf("my  : %d\n", (int)ft_write(-1, "akdim\n", 6));
	// printf("orig: %d\n", (int)write(-1, "akdim\n", 6));
}
