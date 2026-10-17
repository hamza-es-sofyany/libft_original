#include <stdio.h>
#include <string.h>
#include "libft.h"

int	main(void)
{
	char	r[10];
	char	f[10];
	char	s[10] = {'a', 'b', 0, 'c', (char)200, 'd', 'e', 'f', 'g', 'h'};

	memset(r, 'x', 10);
	memset(f, 'x', 10);
	memcpy(r, s, 10);
	ft_memcpy(f, s, 10);
	printf("case 1 full copy with a 0 byte and byte 200 (raw): real: %d %d %d %d %d ft: %d %d %d %d %d\n", r[0], r[2], r[4], r[9], r[5], f[0], f[2], f[4], f[9], f[5]);
	memset(r, 'x', 10);
	memset(f, 'x', 10);
	memcpy(r, s, 0);
	ft_memcpy(f, s, 0);
	printf("case 2 n = 0 (buffer must stay 'x'): real: %d %d ft: %d %d\n", r[0], r[9], f[0], f[9]);
	memset(r, 'x', 10);
	memset(f, 'x', 10);
	memcpy(r + 3, s, 4);
	ft_memcpy(f + 3, s, 4);
	printf("case 3 copy 4 bytes at offset 3 (raw idx 2,3,6,7): real: %d %d %d %d ft: %d %d %d %d\n", r[2], r[3], r[6], r[7], f[2], f[3], f[6], f[7]);
	memset(r, 'x', 10);
	memset(f, 'x', 10);
	memcpy(r, s, 1);
	ft_memcpy(f, s, 1);
	printf("case 4 n = 1 (only idx 0 changes, idx 1 stays): real: %d %d ft: %d %d\n", r[0], r[1], f[0], f[1]);
	printf("case 5 return value is dest: real: %d ft: %d\n", memcpy(r, s, 5) == r, ft_memcpy(f, s, 5) == f);
	return (0);
}