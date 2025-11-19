#include<stdio.h>
#include<string.h>
#include<malloc.h>

char* encode(char *s)
{
  //char s_encoded[20];
  char *s_encoded;
  
  s_encoded = (char*)malloc(20*sizeof(char));
  
  strcpy(s_encoded, s);
  
  s_encoded[0] = 'C';
  
  return s_encoded;
}


int main()
{
  char s[] = "Hello", *s_encoded;
  
  s_encoded = encode(s);
  
  printf("%s is encoded as %s\n", s, s_encoded);
  
  
  
  

}
