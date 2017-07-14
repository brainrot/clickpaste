#include <windows.h>
#include <Rcpp.h>
using namespace Rcpp;

// [[Rcpp::export]]
int paste_1()
{
  // This structure will be used to create the keyboard
  // input event.
  INPUT input[4];
  
  //CTRL+V  
  memset(input, 0, sizeof(input));  
  input[0].type = input[1].type = input[2].type = input[3].type = INPUT_KEYBOARD;  
  input[0].ki.wVk = input[2].ki.wVk = VK_CONTROL;  
  input[1].ki.wVk = input[3].ki.wVk = 0x56;  
  input[2].ki.dwFlags = input[3].ki.dwFlags = KEYEVENTF_KEYUP;  
  SendInput(4, input, sizeof(INPUT));  
  
  //ALT+F4  
  memset(input, 0, sizeof(input));  
  // Exit normally
  return 0;
}