#include <stdio.h>
#include <string.h>
//Charles Weng
//Systems Period 4
//HW4 - Demonstringing Code
//2017-9-25
int strchrDemo(){
  // strchr(str, chr) demonstration
  // returns a pointer to the first occurence of chr within str
  // returns null if not found
  // "\0" returns d?
  char str[] = "abcdefgabcdefg  ";
  char chr0 = 'g';
  char chr1 = 'z';
  char chr2 = '\0';
  printf("strchr() looks for %c in %s and returns %sCheck\n", chr0, str, strchr(str, chr0));
  printf("strchr() looks for %c in %s and returns %sCheck\n", chr1, str, strchr(str, chr1));
  printf("strchr() looks for %c in %s and returns %sCheck\n", chr2, str, strchr(str, chr2));
}

int strstrDemo(){
  // strstr(str0, str1) demonstration
  // returns a pointer to the first occurence of str1 in str0 ignoring the terminating 0 in str1
  // returns null if not found
  // gives segmentation fault if str1 is '\0' or 0, but "\0" works
  char str[] = "abcdefgabcdefg  ";
  char chr3[] = "abc";
  char chr4[] = "xyz";
  char chr5[] = "\0";
  printf("strchr() looks for %s in %s and returns %sCheck\n", chr3, str, strchr(str, *chr3));
  printf("strchr() looks for %s in %s and returns %sCheck\n", chr4, str, strchr(str, *chr4));
  printf("strchr() looks for %s in %s and returns %sCheck\n", chr5, str, strchr(str, *chr5));
}

int main(){
  printf("strchr:\n");
  strchrDemo();

  printf("\nstrstr:\n");
  strstrDemo();
}
