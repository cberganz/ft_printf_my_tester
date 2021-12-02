/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tester.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cberganz <cberganz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 14:46:31 by cberganz          #+#    #+#             */
/*   Updated: 2021/12/02 15:14:50 by cberganz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <limits.h>

int	main(void)
{
	int	len_printf;
	int	len_ftprintf;

	/*
	** Test c
	*/

	printf("\n#\n# Test c\n#\n\n");

	ft_printf("Test 1 : '0'\nYour return :");
	len_ftprintf = ft_printf("%c", '0');
	printf("#\nGood return :");
	len_printf = printf("%c", '0');
	printf("#\n");
	if (len_printf == len_ftprintf)
		printf("Returned size --> %d --> \e[1;32m[OK]\e[0m\n\n", len_ftprintf);
	else
		printf("Returned size --> %d while expecting %d -->\e[1;31m[KO]\e[0m\n\n", len_ftprintf, len_printf);

	ft_printf("Test 2 : '0' - 256 \nYour return :");
	len_ftprintf = ft_printf("%c", '0' - 256);
	printf("#\nGood return :");
	len_printf = printf("%c", '0' - 256);
	printf("#\n");
	if (len_printf == len_ftprintf)
		printf("Returned size --> %d --> \e[1;32m[OK]\e[0m\n\n", len_ftprintf);
	else
		printf("Returned size --> %d while expecting %d -->\e[1;31m[KO]\e[0m\n\n", len_ftprintf, len_printf);

	ft_printf("Test 3 : '0', 0, 1, 't' \nYour return :");
	len_ftprintf = ft_printf("%c %c %c %c", '0', 0, 1, 't');
	printf("#\nGood return :");
	len_printf = printf("%c %c %c %c", '0', 0, 1, 't');
	printf("#\n");
	if (len_printf == len_ftprintf)
		printf("Returned size --> %d --> \e[1;32m[OK]\e[0m\n\n", len_ftprintf);
	else
		printf("Returned size --> %d while expecting %d -->\e[1;31m[KO]\e[0m\n\n", len_ftprintf, len_printf);


	/*
	** Test s
	*/

	printf("\n#\n# Test s\n#\n\n");

	ft_printf("Test 1 : "" \nYour return :");
	len_ftprintf = ft_printf("%s", "");
	printf("#\nGood return :");
	len_printf = printf("%s", "");
	printf("#\n");
	if (len_printf == len_ftprintf)
		printf("Returned size --> %d --> \e[1;32m[OK]\e[0m\n\n", len_ftprintf);
	else
		printf("Returned size --> %d while expecting %d -->\e[1;31m[KO]\e[0m\n\n", len_ftprintf, len_printf);

	ft_printf("Test 2 : \"Ceci est un test\" \nYour return :");
	len_ftprintf = ft_printf("%s", "Ceci est un test");
	printf("#\nGood return :");
	len_printf = printf("%s", "Ceci est un test");
	printf("#\n");
	if (len_printf == len_ftprintf)
		printf("Returned size --> %d --> \e[1;32m[OK]\e[0m\n\n", len_ftprintf);
	else
		printf("Returned size --> %d while expecting %d -->\e[1;31m[KO]\e[0m\n\n", len_ftprintf, len_printf);

	ft_printf("Test 3 : Null pointer \nYour return :");
	len_ftprintf = ft_printf("%s", NULL);
	printf("#\nGood return :");
	len_printf = printf("%s", NULL);
	printf("#\n");
	if (len_printf == len_ftprintf)
		printf("Returned size --> %d --> \e[1;32m[OK]\e[0m\n\n", len_ftprintf);
	else
		printf("Returned size --> %d while expecting %d -->\e[1;31m[KO]\e[0m\n\n", len_ftprintf, len_printf);

	/*
	** Test p
	*/

	printf("\n#\n# Test p\n#\n\n");
	
	ft_printf("Test 1 : Null pointer \nYour return :");
	len_ftprintf = ft_printf("%p", 0);
	printf("#\nGood return :");
	len_printf = printf("%p", 0);
	printf("#\n");
	if (len_printf == len_ftprintf)
		printf("Returned size --> %d --> \e[1;32m[OK]\e[0m\n\n", len_ftprintf);
	else
		printf("Returned size --> %d while expecting %d -->\e[1;31m[KO]\e[0m\n\n", len_ftprintf, len_printf);

	ft_printf("Test 2 : INT_MIN & INT_MAX \nYour return :");
	len_ftprintf = ft_printf("%p & %p", INT_MIN, INT_MAX);
	printf("#\nGood return :");
	len_printf = printf("%p & %p", INT_MIN, INT_MAX);
	printf("#\n");
	if (len_printf == len_ftprintf)
		printf("Returned size --> %d --> \e[1;32m[OK]\e[0m\n\n", len_ftprintf);
	else
		printf("Returned size --> %d while expecting %d -->\e[1;31m[KO]\e[0m\n\n", len_ftprintf, len_printf);

	ft_printf("Test 3 : LONG_MIN & LONG_MAX \nYour return :");
	len_ftprintf = ft_printf("%p & %p", LONG_MIN, LONG_MAX);
	printf("#\nGood return :");
	len_printf = printf("%p & %p", LONG_MIN, LONG_MAX);
	printf("#\n");
	if (len_printf == len_ftprintf)
		printf("Returned size --> %d --> \e[1;32m[OK]\e[0m\n\n", len_ftprintf);
	else
		printf("Returned size --> %d while expecting %d -->\e[1;31m[KO]\e[0m\n\n", len_ftprintf, len_printf);

	ft_printf("Test 4 : -ULONG_MAX & ULONG_MAX \nYour return :");
	len_ftprintf = ft_printf("%p & %p", -ULONG_MAX, ULONG_MAX);
	printf("#\nGood return :");
	len_printf = printf("%p & %p", -ULONG_MAX, ULONG_MAX);
	printf("#\n");
	if (len_printf == len_ftprintf)
		printf("Returned size --> %d --> \e[1;32m[OK]\e[0m\n\n", len_ftprintf);
	else
		printf("Returned size --> %d while expecting %d -->\e[1;31m[KO]\e[0m\n\n", len_ftprintf, len_printf);

	/*
	** Test d
	*/

	printf("\n#\n# Test d\n#\n\n");

	ft_printf("Test 1 : INT_MAX \nYour return :");
	len_ftprintf = ft_printf("%d", INT_MAX);
	printf("#\nGood return :");
	len_printf = printf("%d", INT_MAX);
	printf("#\n");
	if (len_printf == len_ftprintf)
		printf("Returned size --> %d --> \e[1;32m[OK]\e[0m\n\n", len_ftprintf);
	else
		printf("Returned size --> %d while expecting %d -->\e[1;31m[KO]\e[0m\n\n", len_ftprintf, len_printf);

	ft_printf("Test 2 : INT_MIN \nYour return :");
	len_ftprintf = ft_printf("%d", INT_MIN);
	printf("#\nGood return :");
	len_printf = printf("%d", INT_MIN);
	printf("#\n");
	if (len_printf == len_ftprintf)
		printf("Returned size --> %d --> \e[1;32m[OK]\e[0m\n\n", len_ftprintf);
	else
		printf("Returned size --> %d while expecting %d -->\e[1;31m[KO]\e[0m\n\n", len_ftprintf, len_printf);

	ft_printf("Test 3 : LONG_MAX \nYour return :");
	len_ftprintf = ft_printf("%d", LONG_MAX);
	printf("#\nGood return :");
	len_printf = printf("%d", LONG_MAX);
	printf("#\n");
	if (len_printf == len_ftprintf)
		printf("Returned size --> %d --> \e[1;32m[OK]\e[0m\n\n", len_ftprintf);
	else
		printf("Returned size --> %d while expecting %d -->\e[1;31m[KO]\e[0m\n\n", len_ftprintf, len_printf);

	ft_printf("Test 4 : LONG_MIN \nYour return :");
	len_ftprintf = ft_printf("%d", LONG_MIN);
	printf("#\nGood return :");
	len_printf = printf("%d", LONG_MIN);
	printf("#\n");
	if (len_printf == len_ftprintf)
		printf("Returned size --> %d --> \e[1;32m[OK]\e[0m\n\n", len_ftprintf);
	else
		printf("Returned size --> %d while expecting %d -->\e[1;31m[KO]\e[0m\n\n", len_ftprintf, len_printf);

	ft_printf("Test 5 : UINT_MAX \nYour return :");
	len_ftprintf = ft_printf("%d", UINT_MAX);
	printf("#\nGood return :");
	len_printf = printf("%d", UINT_MAX);
	printf("#\n");
	if (len_printf == len_ftprintf)
		printf("Returned size --> %d --> \e[1;32m[OK]\e[0m\n\n", len_ftprintf);
	else
		printf("Returned size --> %d while expecting %d -->\e[1;31m[KO]\e[0m\n\n", len_ftprintf, len_printf);

	ft_printf("Test 6 : ULONG_MAX \nYour return :");
	len_ftprintf = ft_printf("%d", ULONG_MAX);
	printf("#\nGood return :");
	len_printf = printf("%d", ULONG_MAX);
	printf("#\n");
	if (len_printf == len_ftprintf)
		printf("Returned size --> %d --> \e[1;32m[OK]\e[0m\n\n", len_ftprintf);
	else
		printf("Returned size --> %d while expecting %d -->\e[1;31m[KO]\e[0m\n\n", len_ftprintf, len_printf);

	ft_printf("Test 7 : MIXED \nYour return :");
	len_ftprintf = ft_printf("%d %d %d %d %d %d", INT_MIN, INT_MAX, LONG_MIN, LONG_MAX, ULONG_MAX, 42);
	printf("#\nGood return :");
	len_printf = printf("%d %d %d %d %d %d", INT_MIN, INT_MAX, LONG_MIN, LONG_MAX, ULONG_MAX, 42);
	printf("#\n");
	if (len_printf == len_ftprintf)
		printf("Returned size --> %d --> \e[1;32m[OK]\e[0m\n\n", len_ftprintf);
	else
		printf("Returned size --> %d while expecting %d -->\e[1;31m[KO]\e[0m\n\n", len_ftprintf, len_printf);

	/*
	** Test i
	*/

	printf("\n#\n# Test i\n#\n\n");

	ft_printf("Test 1 : INT_MAX \nYour return :");
	len_ftprintf = ft_printf("%i", INT_MAX);
	printf("#\nGood return :");
	len_printf = printf("%i", INT_MAX);
	printf("#\n");
	if (len_printf == len_ftprintf)
		printf("Returned size --> %d --> \e[1;32m[OK]\e[0m\n\n", len_ftprintf);
	else
		printf("Returned size --> %d while expecting %d -->\e[1;31m[KO]\e[0m\n\n", len_ftprintf, len_printf);

	ft_printf("Test 2 : INT_MIN \nYour return :");
	len_ftprintf = ft_printf("%i", INT_MIN);
	printf("#\nGood return :");
	len_printf = printf("%i", INT_MIN);
	printf("#\n");
	if (len_printf == len_ftprintf)
		printf("Returned size --> %d --> \e[1;32m[OK]\e[0m\n\n", len_ftprintf);
	else
		printf("Returned size --> %d while expecting %d -->\e[1;31m[KO]\e[0m\n\n", len_ftprintf, len_printf);

	ft_printf("Test 3 : LONG_MAX \nYour return :");
	len_ftprintf = ft_printf("%i", LONG_MAX);
	printf("#\nGood return :");
	len_printf = printf("%i", LONG_MAX);
	printf("#\n");
	if (len_printf == len_ftprintf)
		printf("Returned size --> %d --> \e[1;32m[OK]\e[0m\n\n", len_ftprintf);
	else
		printf("Returned size --> %d while expecting %d -->\e[1;31m[KO]\e[0m\n\n", len_ftprintf, len_printf);

	ft_printf("Test 4 : LONG_MIN \nYour return :");
	len_ftprintf = ft_printf("%i", LONG_MIN);
	printf("#\nGood return :");
	len_printf = printf("%i", LONG_MIN);
	printf("#\n");
	if (len_printf == len_ftprintf)
		printf("Returned size --> %d --> \e[1;32m[OK]\e[0m\n\n", len_ftprintf);
	else
		printf("Returned size --> %d while expecting %d -->\e[1;31m[KO]\e[0m\n\n", len_ftprintf, len_printf);

	ft_printf("Test 5 : UINT_MAX \nYour return :");
	len_ftprintf = ft_printf("%i", UINT_MAX);
	printf("#\nGood return :");
	len_printf = printf("%i", UINT_MAX);
	printf("#\n");
	if (len_printf == len_ftprintf)
		printf("Returned size --> %d --> \e[1;32m[OK]\e[0m\n\n", len_ftprintf);
	else
		printf("Returned size --> %d while expecting %d -->\e[1;31m[KO]\e[0m\n\n", len_ftprintf, len_printf);

	ft_printf("Test 6 : ULONG_MAX \nYour return :");
	len_ftprintf = ft_printf("%i", ULONG_MAX);
	printf("#\nGood return :");
	len_printf = printf("%i", ULONG_MAX);
	printf("#\n");
	if (len_printf == len_ftprintf)
		printf("Returned size --> %d --> \e[1;32m[OK]\e[0m\n\n", len_ftprintf);
	else
		printf("Returned size --> %d while expecting %d -->\e[1;31m[KO]\e[0m\n\n", len_ftprintf, len_printf);

	ft_printf("Test 7 : MIXED \nYour return :");
	len_ftprintf = ft_printf("%i %i %i %i %i %i", INT_MIN, INT_MAX, LONG_MIN, LONG_MAX, ULONG_MAX, 42);
	printf("#\nGood return :");
	len_printf = printf("%i %i %i %i %i %i", INT_MIN, INT_MAX, LONG_MIN, LONG_MAX, ULONG_MAX, 42);
	printf("#\n");
	if (len_printf == len_ftprintf)
		printf("Returned size --> %d --> \e[1;32m[OK]\e[0m\n\n", len_ftprintf);
	else
		printf("Returned size --> %d while expecting %d -->\e[1;31m[KO]\e[0m\n\n", len_ftprintf, len_printf);

	/*
	** Test u
	*/

	printf("\n#\n# Test u\n#\n\n");

	ft_printf("Test 1 : INT_MAX \nYour return :");
	len_ftprintf = ft_printf("%u", INT_MAX);
	printf("#\nGood return :");
	len_printf = printf("%u", INT_MAX);
	printf("#\n");
	if (len_printf == len_ftprintf)
		printf("Returned size --> %d --> \e[1;32m[OK]\e[0m\n\n", len_ftprintf);
	else
		printf("Returned size --> %d while expecting %d -->\e[1;31m[KO]\e[0m\n\n", len_ftprintf, len_printf);

	ft_printf("Test 2 : INT_MIN \nYour return :");
	len_ftprintf = ft_printf("%u", INT_MIN);
	printf("#\nGood return :");
	len_printf = printf("%u", INT_MIN);
	printf("#\n");
	if (len_printf == len_ftprintf)
		printf("Returned size --> %d --> \e[1;32m[OK]\e[0m\n\n", len_ftprintf);
	else
		printf("Returned size --> %d while expecting %d -->\e[1;31m[KO]\e[0m\n\n", len_ftprintf, len_printf);

	ft_printf("Test 3 : LONG_MAX \nYour return :");
	len_ftprintf = ft_printf("%u", LONG_MAX);
	printf("#\nGood return :");
	len_printf = printf("%u", LONG_MAX);
	printf("#\n");
	if (len_printf == len_ftprintf)
		printf("Returned size --> %d --> \e[1;32m[OK]\e[0m\n\n", len_ftprintf);
	else
		printf("Returned size --> %d while expecting %d -->\e[1;31m[KO]\e[0m\n\n", len_ftprintf, len_printf);

	ft_printf("Test 4 : LONG_MIN \nYour return :");
	len_ftprintf = ft_printf("%u", LONG_MIN);
	printf("#\nGood return :");
	len_printf = printf("%u", LONG_MIN);
	printf("#\n");
	if (len_printf == len_ftprintf)
		printf("Returned size --> %d --> \e[1;32m[OK]\e[0m\n\n", len_ftprintf);
	else
		printf("Returned size --> %d while expecting %d -->\e[1;31m[KO]\e[0m\n\n", len_ftprintf, len_printf);

	ft_printf("Test 5 : UINT_MAX \nYour return :");
	len_ftprintf = ft_printf("%u", UINT_MAX);
	printf("#\nGood return :");
	len_printf = printf("%u", UINT_MAX);
	printf("#\n");
	if (len_printf == len_ftprintf)
		printf("Returned size --> %d --> \e[1;32m[OK]\e[0m\n\n", len_ftprintf);
	else
		printf("Returned size --> %d while expecting %d -->\e[1;31m[KO]\e[0m\n\n", len_ftprintf, len_printf);

	ft_printf("Test 6 : ULONG_MAX \nYour return :");
	len_ftprintf = ft_printf("%u", ULONG_MAX);
	printf("#\nGood return :");
	len_printf = printf("%u", ULONG_MAX);
	printf("#\n");
	if (len_printf == len_ftprintf)
		printf("Returned size --> %d --> \e[1;32m[OK]\e[0m\n\n", len_ftprintf);
	else
		printf("Returned size --> %d while expecting %d -->\e[1;31m[KO]\e[0m\n\n", len_ftprintf, len_printf);

	ft_printf("Test 7 : MIXED \nYour return :");
	len_ftprintf = ft_printf("%u %u %u %u %u %u", INT_MIN, INT_MAX, LONG_MIN, LONG_MAX, ULONG_MAX, 42);
	printf("#\nGood return :");
	len_printf = printf("%u %u %u %u %u %u", INT_MIN, INT_MAX, LONG_MIN, LONG_MAX, ULONG_MAX, 42);
	printf("#\n");
	if (len_printf == len_ftprintf)
		printf("Returned size --> %d --> \e[1;32m[OK]\e[0m\n\n", len_ftprintf);
	else
		printf("Returned size --> %d while expecting %d -->\e[1;31m[KO]\e[0m\n\n", len_ftprintf, len_printf);

	/*
	** Test x
	*/

	printf("\n#\n# Test x\n#\n\n");

	ft_printf("Test 1 : INT_MAX \nYour return :");
	len_ftprintf = ft_printf("%x", INT_MAX);
	printf("#\nGood return :");
	len_printf = printf("%x", INT_MAX);
	printf("#\n");
	if (len_printf == len_ftprintf)
		printf("Returned size --> %d --> \e[1;32m[OK]\e[0m\n\n", len_ftprintf);
	else
		printf("Returned size --> %d while expecting %d -->\e[1;31m[KO]\e[0m\n\n", len_ftprintf, len_printf);

	ft_printf("Test 2 : INT_MIN \nYour return :");
	len_ftprintf = ft_printf("%x", INT_MIN);
	printf("#\nGood return :");
	len_printf = printf("%x", INT_MIN);
	printf("#\n");
	if (len_printf == len_ftprintf)
		printf("Returned size --> %d --> \e[1;32m[OK]\e[0m\n\n", len_ftprintf);
	else
		printf("Returned size --> %d while expecting %d -->\e[1;31m[KO]\e[0m\n\n", len_ftprintf, len_printf);

	ft_printf("Test 3 : LONG_MAX \nYour return :");
	len_ftprintf = ft_printf("%x", LONG_MAX);
	printf("#\nGood return :");
	len_printf = printf("%x", LONG_MAX);
	printf("#\n");
	if (len_printf == len_ftprintf)
		printf("Returned size --> %d --> \e[1;32m[OK]\e[0m\n\n", len_ftprintf);
	else
		printf("Returned size --> %d while expecting %d -->\e[1;31m[KO]\e[0m\n\n", len_ftprintf, len_printf);

	ft_printf("Test 4 : LONG_MIN \nYour return :");
	len_ftprintf = ft_printf("%x", LONG_MIN);
	printf("#\nGood return :");
	len_printf = printf("%x", LONG_MIN);
	printf("#\n");
	if (len_printf == len_ftprintf)
		printf("Returned size --> %d --> \e[1;32m[OK]\e[0m\n\n", len_ftprintf);
	else
		printf("Returned size --> %d while expecting %d -->\e[1;31m[KO]\e[0m\n\n", len_ftprintf, len_printf);

	ft_printf("Test 5 : UINT_MAX \nYour return :");
	len_ftprintf = ft_printf("%x", UINT_MAX);
	printf("#\nGood return :");
	len_printf = printf("%x", UINT_MAX);
	printf("#\n");
	if (len_printf == len_ftprintf)
		printf("Returned size --> %d --> \e[1;32m[OK]\e[0m\n\n", len_ftprintf);
	else
		printf("Returned size --> %d while expecting %d -->\e[1;31m[KO]\e[0m\n\n", len_ftprintf, len_printf);

	ft_printf("Test 6 : ULONG_MAX \nYour return :");
	len_ftprintf = ft_printf("%x", ULONG_MAX);
	printf("#\nGood return :");
	len_printf = printf("%x", ULONG_MAX);
	printf("#\n");
	if (len_printf == len_ftprintf)
		printf("Returned size --> %d --> \e[1;32m[OK]\e[0m\n\n", len_ftprintf);
	else
		printf("Returned size --> %d while expecting %d -->\e[1;31m[KO]\e[0m\n\n", len_ftprintf, len_printf);

	ft_printf("Test 7 : MIXED \nYour return :");
	len_ftprintf = ft_printf("%x %x %x %x %x %x", INT_MIN, INT_MAX, LONG_MIN, LONG_MAX, ULONG_MAX, 42);
	printf("#\nGood return :");
	len_printf = printf("%x %x %x %x %x %x", INT_MIN, INT_MAX, LONG_MIN, LONG_MAX, ULONG_MAX, 42);
	printf("#\n");
	if (len_printf == len_ftprintf)
		printf("Returned size --> %d --> \e[1;32m[OK]\e[0m\n\n", len_ftprintf);
	else
		printf("Returned size --> %d while expecting %d -->\e[1;31m[KO]\e[0m\n\n", len_ftprintf, len_printf);

	/*
	** Test X
	*/

	printf("\n#\n# Test X (upper)\n#\n\n");

	ft_printf("Test 1 : INT_MAX \nYour return :");
	len_ftprintf = ft_printf("%X", INT_MAX);
	printf("#\nGood return :");
	len_printf = printf("%X", INT_MAX);
	printf("#\n");
	if (len_printf == len_ftprintf)
		printf("Returned size --> %d --> \e[1;32m[OK]\e[0m\n\n", len_ftprintf);
	else
		printf("Returned size --> %d while expecting %d -->\e[1;31m[KO]\e[0m\n\n", len_ftprintf, len_printf);

	ft_printf("Test 2 : INT_MIN \nYour return :");
	len_ftprintf = ft_printf("%X", INT_MIN);
	printf("#\nGood return :");
	len_printf = printf("%X", INT_MIN);
	printf("#\n");
	if (len_printf == len_ftprintf)
		printf("Returned size --> %d --> \e[1;32m[OK]\e[0m\n\n", len_ftprintf);
	else
		printf("Returned size --> %d while expecting %d -->\e[1;31m[KO]\e[0m\n\n", len_ftprintf, len_printf);

	ft_printf("Test 3 : LONG_MAX \nYour return :");
	len_ftprintf = ft_printf("%X", LONG_MAX);
	printf("#\nGood return :");
	len_printf = printf("%X", LONG_MAX);
	printf("#\n");
	if (len_printf == len_ftprintf)
		printf("Returned size --> %d --> \e[1;32m[OK]\e[0m\n\n", len_ftprintf);
	else
		printf("Returned size --> %d while expecting %d -->\e[1;31m[KO]\e[0m\n\n", len_ftprintf, len_printf);

	ft_printf("Test 4 : LONG_MIN \nYour return :");
	len_ftprintf = ft_printf("%X", LONG_MIN);
	printf("#\nGood return :");
	len_printf = printf("%X", LONG_MIN);
	printf("#\n");
	if (len_printf == len_ftprintf)
		printf("Returned size --> %d --> \e[1;32m[OK]\e[0m\n\n", len_ftprintf);
	else
		printf("Returned size --> %d while expecting %d -->\e[1;31m[KO]\e[0m\n\n", len_ftprintf, len_printf);

	ft_printf("Test 5 : UINT_MAX \nYour return :");
	len_ftprintf = ft_printf("%X", UINT_MAX);
	printf("#\nGood return :");
	len_printf = printf("%X", UINT_MAX);
	printf("#\n");
	if (len_printf == len_ftprintf)
		printf("Returned size --> %d --> \e[1;32m[OK]\e[0m\n\n", len_ftprintf);
	else
		printf("Returned size --> %d while expecting %d -->\e[1;31m[KO]\e[0m\n\n", len_ftprintf, len_printf);

	ft_printf("Test 6 : ULONG_MAX \nYour return :");
	len_ftprintf = ft_printf("%X", ULONG_MAX);
	printf("#\nGood return :");
	len_printf = printf("%X", ULONG_MAX);
	printf("#\n");
	if (len_printf == len_ftprintf)
		printf("Returned size --> %d --> \e[1;32m[OK]\e[0m\n\n", len_ftprintf);
	else
		printf("Returned size --> %d while expecting %d -->\e[1;31m[KO]\e[0m\n\n", len_ftprintf, len_printf);

	ft_printf("Test 7 : MIXED \nYour return :");
	len_ftprintf = ft_printf("%X %X %X %X %X %X", INT_MIN, INT_MAX, LONG_MIN, LONG_MAX, ULONG_MAX, 42);
	printf("#\nGood return :");
	len_printf = printf("%X %X %X %X %X %X", INT_MIN, INT_MAX, LONG_MIN, LONG_MAX, ULONG_MAX, 42);
	printf("#\n");
	if (len_printf == len_ftprintf)
		printf("Returned size --> %d --> \e[1;32m[OK]\e[0m\n\n", len_ftprintf);
	else
		printf("Returned size --> %d while expecting %d -->\e[1;31m[KO]\e[0m\n\n", len_ftprintf, len_printf);

	/*
	** Test %
	*/

	printf("\n#\n# Test %\n#\n\n");

	ft_printf("Test 1 : \" %%% \" \nYour return :");
	len_ftprintf = ft_printf(" %% ");
	printf("#\nGood return :");
	len_printf = printf(" %% ");
	printf("#\n");
	if (len_printf == len_ftprintf)
		printf("Returned size --> %d --> \e[1;32m[OK]\e[0m\n\n", len_ftprintf);
	else
		printf("Returned size --> %d while expecting %d -->\e[1;31m[KO]\e[0m\n\n", len_ftprintf, len_printf);

	ft_printf("Test 2 : \" %%%%% \" \nYour return :");
	len_ftprintf = ft_printf(" %%% ");
	printf("#\nGood return :");
	len_printf = printf(" %%% ");
	printf("#\n");
	if (len_printf == len_ftprintf)
		printf("Returned size --> %d --> \e[1;32m[OK]\e[0m\n\n", len_ftprintf);
	else
		printf("Returned size --> %d while expecting %d -->\e[1;31m[KO]\e[0m\n\n", len_ftprintf, len_printf);

	ft_printf("Test 3 : \" %%% %%% %%% \" \nYour return :");
	len_ftprintf = ft_printf(" %% %% %% ");
	printf("#\nGood return :");
	len_printf = printf(" %% %% %% ");
	printf("#\n");
	if (len_printf == len_ftprintf)
		printf("Returned size --> %d --> \e[1;32m[OK]\e[0m\n\n", len_ftprintf);
	else
		printf("Returned size --> %d while expecting %d -->\e[1;31m[KO]\e[0m\n\n", len_ftprintf, len_printf);

	ft_printf("Test 4 : \"%%%\" \nYour return :");
	len_ftprintf = ft_printf("%%");
	printf("#\nGood return :");
	len_printf = printf("%%");
	printf("#\n");
	if (len_printf == len_ftprintf)
		printf("Returned size --> %d --> \e[1;32m[OK]\e[0m\n\n", len_ftprintf);
	else
		printf("Returned size --> %d while expecting %d -->\e[1;31m[KO]\e[0m\n\n", len_ftprintf, len_printf);

	/*
	** Test MIXED
	*/

	printf("\n#\n# Test mixed\n#\n\n");
	ft_printf("Test 1 :\nYour return :");
	len_ftprintf = ft_printf("This is a mixed test :%%%c%%%s%%%d%%%i%%%u%%%x%%%X%%%% %%%c%%%s%%%d%%%i%%%u%%%x%%%X%%%% %%%c%%%s%%%d%%%i%%%u%%%x%%%X%%%% %c%%", 'A', "42", 42, 42 ,42 , 42, 42, 'B', "-42", -42, -42 ,-42 ,-42, 42, 'C', "0", 0, 0 ,0 ,0, 42, 0);
	printf("#\nGood return :");
	len_printf = printf("This is a mixed test :%%%c%%%s%%%d%%%i%%%u%%%x%%%X%%%% %%%c%%%s%%%d%%%i%%%u%%%x%%%X%%%% %%%c%%%s%%%d%%%i%%%u%%%x%%%X%%%% %c%%", 'A', "42", 42, 42 ,42 , 42, 42, 'B', "-42", -42, -42 ,-42 ,-42, 42, 'C', "0", 0, 0 ,0 ,0, 42, 0);
	printf("#\n");
	if (len_printf == len_ftprintf)
		printf("Returned size --> %d --> \e[1;32m[OK]\e[0m\n\n", len_ftprintf);
	else
		printf("Returned size --> %d while expecting %d -->\e[1;31m[KO]\e[0m\n\n", len_ftprintf, len_printf);

	return (0);
}
