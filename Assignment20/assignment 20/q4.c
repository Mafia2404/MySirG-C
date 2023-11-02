#include<stdio.h>
int main(){
    char c;
    printf("Enter a character:");
    scanf("%c",&c);
    switch(c){
            //checking vowels
        case 'a': case 'e': case 'i': case 'o': case 'u':
        case 'A': case 'E': case 'I': case 'O': case 'U':
        printf("Vowel");                              
          break;    


          // for consonant use range concept
          case 'b' ... 'd': case 'B' ... 'D':
          case 'f' ... 'h': case 'F' ... 'H':
          case 'j' ... 'n': case 'J' ... 'N':
          case 'p' ... 't': case 'P' ... 'T':
          case 'v' ... 'z': case 'V' ... 'Z':
          printf("Consonant") ;     
          break;                           
                                                     
                                                     

        default:
        printf("Special character");
    }
    return 0;
}