#include <unistd.h>
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}
void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	main(int argc, char **argv)
{
	int	i;

	i = 0;
	if (ft_strlen(argv[2]) != 1 || ft_strlen(argv[3]) != 1)
	{
		ft_putchar('\n');
		exit (EXIT_FAILURE);
	}
	if (argc != 4)
	{
		ft_putchar('\n');
		exit (EXIT_FAILURE);
	}
	while (argv[1][i])
	{
		if (argv[1][i] == argv[2][0])
			argv[1][i] = argv[3][0];
		ft_putchar(argv[1][i]);
		i++;
	}
	ft_putchar('\n');
	exit (EXIT_SUCCESS);
}