/* MAIN2.C */ 
#include <stdio.h> 
#include <wchar.h>
#include <wctype.h>
#include <locale.h>
#include "palindrome.h" 
/*************************************************/ 
int main() 
{ 
   setlocale(LC_ALL, "");
   wprintf(L"palindrome (\"cat\") = %d \n", palindrome("cat") ); 
   wprintf(L"palindrome (\"noon\") = %d \n", palindrome("noon") );
   return 0; 
}