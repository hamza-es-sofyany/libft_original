#include <stdio.h>
#include "../libft.h"

int	main(void)
{
	t_list	a;
	t_list	b;
	t_list	n;
	t_list	*head;

	a.content = "A";
	b.content = "B";
	n.content = "N";
	a.next = &b;
	b.next = NULL;
	n.next = NULL;
	head = &a;
	printf("&a=%p &b=%p &n=%p\n", (void *)&a, (void *)&b, (void *)&n);
	printf("BEFORE: head=%p a.next=%p b.next=%p\n",
		(void *)head, (void *)a.next, (void *)b.next);
	ft_lstadd_back(&head, &n);
	printf("AFTER : head=%p a.next=%p b.next=%p n.next=%p\n",
		(void *)head, (void *)a.next, (void *)b.next, (void *)n.next);
	return (0);
}