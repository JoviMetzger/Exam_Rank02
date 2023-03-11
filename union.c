#include <unistd.h>

int main(int argc, char **argv)
{
    char tmp[255];
    int i;

    i = -1;
    if (argc == 3)
    {
        while (argv[1][++i])
        {
            if (tmp[(int)argv[1][i]] != 1)
            {
                    write(1, &argv[1][i], 1);
                    tmp[(int)argv[1][i]] = 1;
            }
        }
        i = -1;
        while (argv[2][++i])
        {
            if (tmp[(int)argv[2][i]] != 1)
            {
                write(1, &argv[2][i], 1);
                tmp[(int)argv[2][i]] = 1;
            }
        }
    }
    write(1, "\n", 1);
    return (0);
}
