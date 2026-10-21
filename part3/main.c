#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "../libft.h"

static void	up(void *c)
{
	char	*s;

	s = (char *)c;
	s[0] = toupper(s[0]);
}

int	main(void)
{
	t_list	*head;
	t_list	*cur;

	head = ft_lstnew(strdup("a"));
	ft_lstadd_back(&head, ft_lstnew(strdup("b")));
	ft_lstadd_back(&head, ft_lstnew(strdup("c")));
	cur = head;
	printf("BEFORE:");
	while (cur)
	{
		printf(" %s", (char *)cur->content);
		cur = cur->next;
	}
	printf("  size=%d\n", ft_lstsize(head));
	ft_lstiter(head, up);
	cur = head;
	printf("AFTER :");
	while (cur)
	{
		printf(" %s", (char *)cur->content);
		cur = cur->next;
	}
	printf("  size=%d\n", ft_lstsize(head));
	ft_lstclear(&head, free);
	return (0);
}