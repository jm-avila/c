#include <stdio.h>
#include <string.h>

int main(void) {
  int month, day, year;

  // Standard date form
  printf("Enter date (mm/dd/yyyy): ");
  // Split the user input into 3 variables for the date
  // Don't worry about the `scanf()` below, you'll learn more about these later!
  scanf("%d /%d /%d", &month, &day, &year);

  char month_name[9];
  switch (month) {
    case 1:
      strncpy(month_name, "January", 9);
      break;
    case 2: 
      strncpy(month_name, "February", 9);
      break;
    case 3: 
      strncpy(month_name, "March", 9);
      break;
    case 4: 
      strncpy(month_name, "April", 9);
      break;
    case 5: 
      strncpy(month_name, "May", 9);
      break;
    case 6: 
      strncpy(month_name, "June", 9);
      break;
    case 7: 
      strncpy(month_name, "July", 9);
      break;
    case 8: 
      strncpy(month_name, "August", 9);
      break;
    case 9: 
      strncpy(month_name, "September", 9);
      break;
    case 10: 
      strncpy(month_name, "October", 9);
      break;
    case 11: 
      strncpy(month_name, "November", 9);
      break;
    case 12: 
      strncpy(month_name, "December", 9);
      break;
    default:
      strncpy(month_name, "Unkown", 9);
      break;
  }

  char day_suffix[3];
  switch (day) {
    case 1:  
    case 21:  
    case 31:  
      strncpy(day_suffix, "st", 3);
      break;
    case 2:  
    case 22:  
      strncpy(day_suffix, "nd", 3);
      break;
    case 3:  
      strncpy(day_suffix, "rd", 3);
      break;
    default: 
      strncpy(day_suffix, "th", 3);
      break;
  }  

  printf("%s %d%s, %d\n", month_name, day, day_suffix, year);
  
  
  return 0;
}