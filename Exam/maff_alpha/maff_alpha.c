#include <unistd.h>

int	main(void)
{
	char	alpha[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ\n";
	char	*p_alpha;

	p_alpha = alpha;
	while(*p_alpha)
	{
		if (*p_alpha % 2 != 0)
			*p_alpha += 32;
		p_alpha++;
	}
	write(1, &alpha, 27);
	return (0);	
}
