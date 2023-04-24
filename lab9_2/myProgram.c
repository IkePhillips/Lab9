#include <stdio.h>

const int COIN_VALUES[5] = {8, 7, 6, 3, 2};


void make_score(int totalPoints, int score[5], int coinIndex) {

  if (coinIndex > 4) {
    if (totalPoints == 0) {
    printf("%d TD + 2pt, %d TD + FG, %d TD, %d 3pt FG, %d Safety\n", score[0], score[1], score[2], score[3], score[4]);
    }
    return;
  }

  int coinValue = COIN_VALUES[coinIndex];

  int max = totalPoints / coinValue;

  for(int i = max; i >= 0; --i) {

    int points = i * coinValue;

    int remainingPoints = totalPoints - points;

    score[coinIndex] = i;

    make_score(remainingPoints, score, coinIndex + 1);
  }
}

int main() {

int inputScore;

while (1)
{

printf("Enter an NFL score: ");
scanf("%d", &inputScore);

if (inputScore <= 1)
  break;

int score[5];

make_score(inputScore, score, 0);

}

printf("Goodbye!\n");
return 0;
}
