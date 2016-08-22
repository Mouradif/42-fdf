#include "libft.h"

int main(void)
{
	t_buf *l = ft_buf_file("Makefile");
	ft_putstr(l->buf);
}
