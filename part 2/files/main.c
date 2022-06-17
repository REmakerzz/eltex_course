#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <string.h>

int		main(void)
{
		int				len;
		int				fd;
		const char		*buf = "Hello World!";
		ssize_t			ret;

		len = strlen(buf);
		if (!(fd = open("text.txt", O_RDWR | O_CREAT, S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH)))
			return (-1);
		if (!(ret = write(fd, buf, len)))
				return (-1);
		if (!(close (fd)))
				return (-1);
		return (0);
}
