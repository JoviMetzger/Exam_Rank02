#include <unistd.h>

int main(int argc, char **argv)
{
    char map[255];
    int i;

    i = -1;
    if (argc == 3)
    {
        while (argv[1][++i])
        {
            if (map[(int)argv[1][i]] != 1)
            {
                    write(1, &argv[1][i], 1);
                    map[(int)argv[1][i]] = 1;
            }
        }
        i = -1;
        while (argv[2][++i])
        {
            if (map[(int)argv[2][i]] != 1)
            {
                write(1, &argv[2][i], 1);
                map[(int)argv[2][i]] = 1;
            }
        }
    }
    write(1, "\n", 1);
}