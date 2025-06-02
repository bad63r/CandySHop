#include <stdio.h>

int main(int argc, char *argv[])
{
  enum colors {
    blue,
    white,
    yellow,
    red,
    black
  };

  printf("Candy List:\n");
  printf("* Chocolate candy njam njam!\n");
  printf("* Caramela candy with soo much sugar grrr\n");
  printf("* Apple simple candy\n");
  printf("* vegan candy for hippy ppl :o) \n\n\n");

  printf("we have candy with different colors:\n");

  enum colors colorCandy = yellow;
  if (colorCandy == yellow) printf("the best color we think is yellow\n");
  
  
  
  return 0;
}
