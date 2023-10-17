#include <stdio.h>
#include <string.h>

int main() {
  // idx 0 = a
  // idx 1 = b
  // idx 2 = c
  // idx 3 = d
  int counter1[4] = {0,0,0,0};
  int counter2[4] = {0,0,0,0};
  char s1[] = "dbb cccccaacb cdbababdcdcdab dcdad";
  char s2[] = "bbbcc bdddccccad cdbbaaacaccdabdd";

  for (int i = 0; i < strlen(s1); i++) {
      if(s1[i] == 'a') {
        counter1[0] += 1;
      }
      if(s1[i] == 'b') {
        counter1[1] += 1;
      }
      if(s1[i] == 'c') {
        counter1[2] += 1;
      }
      if(s1[i] == 'd') {
        counter1[3] += 1;
      }
  }
   
  for (int i = 0; i < strlen(s2); i++) {
      if(s2[i] == 'a') {
        counter2[0] += 1;
      }
      if(s2[i] == 'b') {
        counter2[1] += 1;
      }
      if(s2[i] == 'c') {
        counter2[2] += 1;
      }
      if(s2[i] == 'd') {
        counter2[3] += 1;
      }
  }
  
   // match flag = 0
   // mismatch flag = 1
  int flag = 0;
  int counterLength = sizeof(counter1) / sizeof(int);
  for (int i = 0; i < counterLength; i++) {
      if (counter1[i] != counter2[i]) {
        flag = 1;
        break;
      }
  }

  if (flag == 0) {
    printf("Anagram!");
  } else {
    printf("Not Anagram!");
  }
}