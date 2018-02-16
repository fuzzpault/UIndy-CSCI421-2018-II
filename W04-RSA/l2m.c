/*                                                                                                                     
  Name: Paul Talaga
  Date: Feb 2018
  Desc: Demo of converting a long integer back to a string.
*/
#include <stdio.h>

int main(){
    char message[9]; // A long long is 8 bytes, plus a null terminator.
    printf("Enter your word (8 or fewer letters) to convert.\n");
    scanf("%s", message);
    
    unsigned long long* number = (unsigned long long*)message;
    printf("%s is %d\n", message, *number);
    
    return 0;
}