//Author: Miles Johnson mcj5246@psu.edu
//Collaborator: Ryan Morgan rkm5607@psu.edu
//Collaborator: Christopher Kurcz cjk6056@psu.edu
//Collaborator: Laurence Castillo llc5360@psu.edu
//Section: 7
//Breakout: 12

#include <stdio.h>
#include <readline/readline.h>
#include <stdlib.h>

int main(void) {
  char *grade = readline("Enter your CMPSC 131 grade: ");
  double numGrade = atof(grade);
  if(numGrade >=93.0){
    printf("Your letter grade for CMPSC 131 is A.\n");
  }
  else if(numGrade >= 90.0){
    printf("Your letter grade for CMPSC 131 is A-.\n");
  }
  else if(numGrade >= 87.0){
    printf("Your letter grade for CMPSC 131 is B+.\n");
  }
  else if(numGrade >= 83.0){
    printf("Your letter grade for CMPSC 131 is B.\n");
  }
   else if(numGrade >= 80.0){
    printf("Your letter grade for CMPSC 131 is B-.\n");
  }
  else if(numGrade >= 77.0){
    printf("Your letter grade for CMPSC 131 is C+.\n");
  }
  else if(numGrade >= 70.0){
    printf("Your letter grade for CMPSC 131 is C.\n");
  }
  else if(numGrade >= 60.0){
    printf("Your letter grade for CMPSC 131 is D.\n");
  }
  else{
    printf("Your letter grade for CMPSC 131 is F.\n");
  }
  return 0;
}
