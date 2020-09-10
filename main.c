// Author: Shubhang Srikoti svs6959@psu.edu
// Collaborator: Aditya Majumdar apm6483@psu.edu
// Collaborator: Manav Shah mvs6909@psu.edu
// Collaborator: Weijun Fan wmf5111@psu.edu
// Section: 4
// Breakout Room: 16

#include <stdio.h>
#include <readline/readline.h>
#include <stdlib.h>

int main(void) {
  char *grade = readline("Enter your CMPSC 131 grade: ");
  double G = atof(grade);
  if (G >= 93.00){
    printf("your letter grade for CMPSC 131 is A.\n");
  }
  else if(G >= 90.00) {
    printf("Your letter grade for CMPSC 131 is A-.\n");
  }
  else if(G >= 87.00) {
    printf("Your letter grade for CMPSC 131 is B+.\n");
  }
  else if(G >= 83.00) {
    printf("Your letter grade for CMPSC 131 is B.\n");
  }
  else if(G >= 80.00) {
    printf("Your letter grade for CMPSC 131 is B-.\n");
  }
  else if(G >= 77.00) {
    printf("Your letter grade for CMPSC 131 is C+.\n");
  }
  else if(G >= 70.00) {
    printf("Your letter grade for CMPSC 131 is C.\n");
  }
  else if(G >= 60.00) {
    printf("Your letter grade for CMPSC 131 is D.\n");
  }
  else if(G < 60.00) {
    printf("Your letter grade for CMPSC 131 is F.\n");
  }
  return 0;
}