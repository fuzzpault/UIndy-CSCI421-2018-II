/*                                                                                                                     
  Name: Paul Talaga
  Date: Feb 2018
  Desc: Demo of converting a string of length 8 to a long integer.
*/
#include <stdio.h>
#include <string.h>

int main(){
    char message[9] = ""; // 
    unsigned long long number;
    printf("Enter your number to convert.\n");
    scanf("%lld", &number);
    
    memcpy(message, &number, 8);
    printf("%lld is %s\n", number, message);
    
    return 0;
}