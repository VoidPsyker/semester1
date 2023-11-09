int main(void)

{

    int score = 0;

    int i, j, k = 0;

    int n = 7;



    for (i = 1; i < n + 1; ++i) {

        for (j = i + 1; j < (i + 1); ++j) {

            for (k = 1; k < (i + j); ++k) {

                ++score;
            }

        }



    }

    return score;

}