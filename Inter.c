#include <stdio.h>
#include <unistd.h>

int main(int argc, char **argv)
{
    char map[255];
    int i;
    int j;

    i = 0;
    if (argc == 3)
    {
        while (argv[1][i])
        {
            j = 0;
            while (argv[2][j])
            {
                if (map[(int)argv[1][i]] != 1 && (argv[1][i] == argv[2][j]))
                {
                    write(1, &argv[1][i], 1);
                    map[(int)argv[1][i]] = 1;
                }
                j++;
            }
            i++;
        }
    }
    write(1, "\n", 1);
    return (0);
}