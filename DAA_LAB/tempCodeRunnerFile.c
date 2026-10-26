#include <stdio.h>
#include <string.h>
#include <time.h>

int bruteForceSearch(char text[], char pattern[])
{
    int n = strlen(text);
    int m = strlen(pattern);
    for (int i = 0; i <= n - m; i++)
    {
        int j;
        for (j = 0; j < m; j++)
        {
            if (text[i + j] != pattern[j])
            {
                break;
            }
        }
        if (j == m)
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    int sizes[] = {100, 500, 1000, 5000};
    int repetitions = 10000;

    printf("Brute Force String Matching\n");
    printf("--------------------------------------------------\n");
    printf("Length\tBeginning\tMiddle\tEnd\tNot Present\n");

    for (int s = 0; s < 4; s++)
    {
        int n = sizes[s];
        char *text = (char *)malloc((n + 1) * sizeof(char));
        for (int i = 0; i < n; i++)
        {
            text[i] = 'a';
        }
        text[n] = '\0';

        char beginning[] = "aaaa";
        char middle[] = "aaaa";
        char ending[] = "aaaa";
        char notPresent[] = "bbbb";

        clock_t start, end;
        text[0] = 'a';

        start = clock();
        for (int i = 0; i < repetitions; i++)
        {
            bruteForceSearch(text, beginning);
        }
        end = clock();
        double beginningTime =
            ((double)(end - start) / CLOCKS_PER_SEC) * 1000;

        start = clock();
        for (int i = 0; i < repetitions; i++)
        {
            bruteForceSearch(text, middle);
        }
        end = clock();
        double middleTime =
            ((double)(end - start) / CLOCKS_PER_SEC) * 1000;
        text[n - 4] = 'a';
        start = clock();
        for (int i = 0; i < repetitions; i++)
        {
            bruteForceSearch(text, ending);
        }
        end = clock();
        double endTime =
            ((double)(end - start) / CLOCKS_PER_SEC) * 1000;
        start = clock();
        for (int i = 0; i < repetitions; i++)
        {
            bruteForceSearch(text, notPresent);
        }
        end = clock();
        double notPresentTime =
            ((double)(end - start) / CLOCKS_PER_SEC) * 1000;

        printf("%d\t%.4f\t\t%.4f\t%.4f\t%.4f\n",
               n, beginningTime,
               middleTime, endTime,
               notPresentTime);

        free(text);
    }
    return 0;
}