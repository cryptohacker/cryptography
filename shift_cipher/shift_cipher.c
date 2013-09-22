#include <stdio.h>

char get_cipher(char, int);

int main()
{
  int shift_value, i;
  char plain_text[100], cipher_text[100];
  printf("Plain Text : ");
  scanf("%[^\n]s", plain_text);
  printf("Shift : ");
  scanf("%d", &shift_value);
  
  for(i = 0 ; plain_text[i] != '\0' ; i++)
    cipher_text[i] = get_cipher(plain_text[i], shift_value);

  cipher_text[i] = '\0';
  printf("%s", cipher_text);
  return 0;
}

char get_cipher(char plain_char, int shift_value)
{
  char cipher_char;
  if(plain_char >= 'a' && plain_char <= 'z')
    cipher_char = (((plain_char - 'a') + shift_value) % 26) + 'a';
  else if(plain_char >= 'A' && plain_char <= 'Z')
    cipher_char = (((plain_char - 'A') + shift_value) % 26) + 'A';
  else
    cipher_char = plain_char;
  return cipher_char;
}
