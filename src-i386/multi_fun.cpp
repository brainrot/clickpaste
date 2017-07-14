#include <windows.h>
#include <Rcpp.h>
using namespace Rcpp;

// [[Rcpp::export]]
int shift()
{
  // This structure will be used to create the keyboard
  // input event.
  INPUT ip;

  // Set up a generic keyboard event.
  ip.type = INPUT_KEYBOARD;
  ip.ki.wScan = 0; // hardware scan code for key
  ip.ki.time = 0;
  ip.ki.dwExtraInfo = 0;

  // Press the "shift" key
  ip.ki.wVk = 0x10; // virtual-key code for the "shift" key
  ip.ki.dwFlags = 0; // 0 for key press
  SendInput(1, &ip, sizeof(INPUT));

  // Release the "shift" key
  ip.ki.dwFlags = KEYEVENTF_KEYUP; // KEYEVENTF_KEYUP for key release
  SendInput(1, &ip, sizeof(INPUT));

  // Exit normally
  return 0;
}

// [[Rcpp::export]]
int a_1()
{
  // This structure will be used to create the keyboard
  // input event.
  INPUT ip;

  // Set up a generic keyboard event.
  ip.type = INPUT_KEYBOARD;
  ip.ki.wScan = 0; // hardware scan code for key
  ip.ki.time = 0;
  ip.ki.dwExtraInfo = 0;

  // Press the "A" key
  ip.ki.wVk = 0x41; // virtual-key code for the "shift" key
  ip.ki.dwFlags = 0; // 0 for key press
  SendInput(1, &ip, sizeof(INPUT));

  // Release the "A" key
  ip.ki.dwFlags = KEYEVENTF_KEYUP; // KEYEVENTF_KEYUP for key release
  SendInput(1, &ip, sizeof(INPUT));

  // Exit normally
  return 0;
}

// [[Rcpp::export]]
int b_1()
{
  // This structure will be used to create the keyboard
  // input event.
  INPUT ip;

  // Set up a generic keyboard event.
  ip.type = INPUT_KEYBOARD;
  ip.ki.wScan = 0; // hardware scan code for key
  ip.ki.time = 0;
  ip.ki.dwExtraInfo = 0;

  // Press the "B" key
  ip.ki.wVk = 0x42; // virtual-key code for the "shift" key
  ip.ki.dwFlags = 0; // 0 for key press
  SendInput(1, &ip, sizeof(INPUT));

  // Release the "B" key
  ip.ki.dwFlags = KEYEVENTF_KEYUP; // KEYEVENTF_KEYUP for key release
  SendInput(1, &ip, sizeof(INPUT));

  // Exit normally
  return 0;
}

// [[Rcpp::export]]
int c_1()
{
  // This structure will be used to create the keyboard
  // input event.
  INPUT ip;

  // Set up a generic keyboard event.
  ip.type = INPUT_KEYBOARD;
  ip.ki.wScan = 0; // hardware scan code for key
  ip.ki.time = 0;
  ip.ki.dwExtraInfo = 0;

  // Press the "C" key
  ip.ki.wVk = 0x43; // virtual-key code for the "shift" key
  ip.ki.dwFlags = 0; // 0 for key press
  SendInput(1, &ip, sizeof(INPUT));

  // Release the "C" key
  ip.ki.dwFlags = KEYEVENTF_KEYUP; // KEYEVENTF_KEYUP for key release
  SendInput(1, &ip, sizeof(INPUT));

  // Exit normally
  return 0;
}

// [[Rcpp::export]]
int d_1()
{
  // This structure will be used to create the keyboard
  // input event.
  INPUT ip;

  // Set up a generic keyboard event.
  ip.type = INPUT_KEYBOARD;
  ip.ki.wScan = 0; // hardware scan code for key
  ip.ki.time = 0;
  ip.ki.dwExtraInfo = 0;

  // Press the "D" key
  ip.ki.wVk = 0x44; // virtual-key code for the "shift" key
  ip.ki.dwFlags = 0; // 0 for key press
  SendInput(1, &ip, sizeof(INPUT));

  // Release the "D" key
  ip.ki.dwFlags = KEYEVENTF_KEYUP; // KEYEVENTF_KEYUP for key release
  SendInput(1, &ip, sizeof(INPUT));

  // Exit normally
  return 0;
}

// [[Rcpp::export]]
int e_1()
{
  // This structure will be used to create the keyboard
  // input event.
  INPUT ip;

  // Set up a generic keyboard event.
  ip.type = INPUT_KEYBOARD;
  ip.ki.wScan = 0; // hardware scan code for key
  ip.ki.time = 0;
  ip.ki.dwExtraInfo = 0;

  // Press the "E" key
  ip.ki.wVk = 0x45; // virtual-key code for the "shift" key
  ip.ki.dwFlags = 0; // 0 for key press
  SendInput(1, &ip, sizeof(INPUT));

  // Release the "E" key
  ip.ki.dwFlags = KEYEVENTF_KEYUP; // KEYEVENTF_KEYUP for key release
  SendInput(1, &ip, sizeof(INPUT));

  // Exit normally
  return 0;
}

// [[Rcpp::export]]
int f_1()
{
  // This structure will be used to create the keyboard
  // input event.
  INPUT ip;

  // Set up a generic keyboard event.
  ip.type = INPUT_KEYBOARD;
  ip.ki.wScan = 0; // hardware scan code for key
  ip.ki.time = 0;
  ip.ki.dwExtraInfo = 0;

  // Press the "F" key
  ip.ki.wVk = 0x46; // virtual-key code for the "shift" key
  ip.ki.dwFlags = 0; // 0 for key press
  SendInput(1, &ip, sizeof(INPUT));

  // Release the "F" key
  ip.ki.dwFlags = KEYEVENTF_KEYUP; // KEYEVENTF_KEYUP for key release
  SendInput(1, &ip, sizeof(INPUT));

  // Exit normally
  return 0;
}


// [[Rcpp::export]]
int g_1()
{
  // This structure will be used to create the keyboard
  // input event.
  INPUT ip;

  // Set up a generic keyboard event.
  ip.type = INPUT_KEYBOARD;
  ip.ki.wScan = 0; // hardware scan code for key
  ip.ki.time = 0;
  ip.ki.dwExtraInfo = 0;

  // Press the "G" key
  ip.ki.wVk = 0x47; // virtual-key code for the "shift" key
  ip.ki.dwFlags = 0; // 0 for key press
  SendInput(1, &ip, sizeof(INPUT));

  // Release the "G" key
  ip.ki.dwFlags = KEYEVENTF_KEYUP; // KEYEVENTF_KEYUP for key release
  SendInput(1, &ip, sizeof(INPUT));

  // Exit normally
  return 0;
}

// [[Rcpp::export]]
int h_1()
{
  // This structure will be used to create the keyboard
  // input event.
  INPUT ip;

  // Set up a generic keyboard event.
  ip.type = INPUT_KEYBOARD;
  ip.ki.wScan = 0; // hardware scan code for key
  ip.ki.time = 0;
  ip.ki.dwExtraInfo = 0;

  // Press the "H" key
  ip.ki.wVk = 0x48; // virtual-key code for the "shift" key
  ip.ki.dwFlags = 0; // 0 for key press
  SendInput(1, &ip, sizeof(INPUT));

  // Release the "H" key
  ip.ki.dwFlags = KEYEVENTF_KEYUP; // KEYEVENTF_KEYUP for key release
  SendInput(1, &ip, sizeof(INPUT));

  // Exit normally
  return 0;
}

// [[Rcpp::export]]
int i_1()
{
  // This structure will be used to create the keyboard
  // input event.
  INPUT ip;

  // Set up a generic keyboard event.
  ip.type = INPUT_KEYBOARD;
  ip.ki.wScan = 0; // hardware scan code for key
  ip.ki.time = 0;
  ip.ki.dwExtraInfo = 0;

  // Press the "I" key
  ip.ki.wVk = 0x49; // virtual-key code for the "shift" key
  ip.ki.dwFlags = 0; // 0 for key press
  SendInput(1, &ip, sizeof(INPUT));

  // Release the "I" key
  ip.ki.dwFlags = KEYEVENTF_KEYUP; // KEYEVENTF_KEYUP for key release
  SendInput(1, &ip, sizeof(INPUT));

  // Exit normally
  return 0;
}

// [[Rcpp::export]]
int j_1()
{
  // This structure will be used to create the keyboard
  // input event.
  INPUT ip;

  // Set up a generic keyboard event.
  ip.type = INPUT_KEYBOARD;
  ip.ki.wScan = 0; // hardware scan code for key
  ip.ki.time = 0;
  ip.ki.dwExtraInfo = 0;

  // Press the "J" key
  ip.ki.wVk = 0x4A; // virtual-key code for the "shift" key
  ip.ki.dwFlags = 0; // 0 for key press
  SendInput(1, &ip, sizeof(INPUT));

  // Release the "J" key
  ip.ki.dwFlags = KEYEVENTF_KEYUP; // KEYEVENTF_KEYUP for key release
  SendInput(1, &ip, sizeof(INPUT));

  // Exit normally
  return 0;
}

// [[Rcpp::export]]
int k_1()
{
  // This structure will be used to create the keyboard
  // input event.
  INPUT ip;

  // Set up a generic keyboard event.
  ip.type = INPUT_KEYBOARD;
  ip.ki.wScan = 0; // hardware scan code for key
  ip.ki.time = 0;
  ip.ki.dwExtraInfo = 0;

  // Press the "K" key
  ip.ki.wVk = 0x4B; // virtual-key code for the "shift" key
  ip.ki.dwFlags = 0; // 0 for key press
  SendInput(1, &ip, sizeof(INPUT));

  // Release the "K" key
  ip.ki.dwFlags = KEYEVENTF_KEYUP; // KEYEVENTF_KEYUP for key release
  SendInput(1, &ip, sizeof(INPUT));

  // Exit normally
  return 0;
}

// [[Rcpp::export]]
int l_1()
{
  // This structure will be used to create the keyboard
  // input event.
  INPUT ip;

  // Set up a generic keyboard event.
  ip.type = INPUT_KEYBOARD;
  ip.ki.wScan = 0; // hardware scan code for key
  ip.ki.time = 0;
  ip.ki.dwExtraInfo = 0;

  // Press the "L" key
  ip.ki.wVk = 0x4C; // virtual-key code for the "shift" key
  ip.ki.dwFlags = 0; // 0 for key press
  SendInput(1, &ip, sizeof(INPUT));

  // Release the "L" key
  ip.ki.dwFlags = KEYEVENTF_KEYUP; // KEYEVENTF_KEYUP for key release
  SendInput(1, &ip, sizeof(INPUT));

  // Exit normally
  return 0;
}

// [[Rcpp::export]]
int m_1()
{
  // This structure will be used to create the keyboard
  // input event.
  INPUT ip;

  // Set up a generic keyboard event.
  ip.type = INPUT_KEYBOARD;
  ip.ki.wScan = 0; // hardware scan code for key
  ip.ki.time = 0;
  ip.ki.dwExtraInfo = 0;

  // Press the "M" key
  ip.ki.wVk = 0x4D; // virtual-key code for the "shift" key
  ip.ki.dwFlags = 0; // 0 for key press
  SendInput(1, &ip, sizeof(INPUT));

  // Release the "M" key
  ip.ki.dwFlags = KEYEVENTF_KEYUP; // KEYEVENTF_KEYUP for key release
  SendInput(1, &ip, sizeof(INPUT));

  // Exit normally
  return 0;
}

// [[Rcpp::export]]
int n_1()
{
  // This structure will be used to create the keyboard
  // input event.
  INPUT ip;

  // Set up a generic keyboard event.
  ip.type = INPUT_KEYBOARD;
  ip.ki.wScan = 0; // hardware scan code for key
  ip.ki.time = 0;
  ip.ki.dwExtraInfo = 0;

  // Press the "n" key
  ip.ki.wVk = 0x4E; // virtual-key code for the "shift" key
  ip.ki.dwFlags = 0; // 0 for key press
  SendInput(1, &ip, sizeof(INPUT));

  // Release the "n" key
  ip.ki.dwFlags = KEYEVENTF_KEYUP; // KEYEVENTF_KEYUP for key release
  SendInput(1, &ip, sizeof(INPUT));

  // Exit normally
  return 0;
}

// [[Rcpp::export]]
int o_1()
{
  // This structure will be used to create the keyboard
  // input event.
  INPUT ip;

  // Set up a generic keyboard event.
  ip.type = INPUT_KEYBOARD;
  ip.ki.wScan = 0; // hardware scan code for key
  ip.ki.time = 0;
  ip.ki.dwExtraInfo = 0;

  // Press the "o" key
  ip.ki.wVk = 0x4F; // virtual-key code for the "shift" key
  ip.ki.dwFlags = 0; // 0 for key press
  SendInput(1, &ip, sizeof(INPUT));

  // Release the "o" key
  ip.ki.dwFlags = KEYEVENTF_KEYUP; // KEYEVENTF_KEYUP for key release
  SendInput(1, &ip, sizeof(INPUT));

  // Exit normally
  return 0;
}

// [[Rcpp::export]]
int p_1()
{
  // This structure will be used to create the keyboard
  // input event.
  INPUT ip;

  // Set up a generic keyboard event.
  ip.type = INPUT_KEYBOARD;
  ip.ki.wScan = 0; // hardware scan code for key
  ip.ki.time = 0;
  ip.ki.dwExtraInfo = 0;

  // Press the "p" key
  ip.ki.wVk = 0x50; // virtual-key code for the "shift" key
  ip.ki.dwFlags = 0; // 0 for key press
  SendInput(1, &ip, sizeof(INPUT));

  // Release the "p" key
  ip.ki.dwFlags = KEYEVENTF_KEYUP; // KEYEVENTF_KEYUP for key release
  SendInput(1, &ip, sizeof(INPUT));

  // Exit normally
  return 0;
}

// [[Rcpp::export]]
int q_1()
{
  // This structure will be used to create the keyboard
  // input event.
  INPUT ip;

  // Set up a generic keyboard event.
  ip.type = INPUT_KEYBOARD;
  ip.ki.wScan = 0; // hardware scan code for key
  ip.ki.time = 0;
  ip.ki.dwExtraInfo = 0;

  // Press the "q" key
  ip.ki.wVk = 0x51; // virtual-key code for the "shift" key
  ip.ki.dwFlags = 0; // 0 for key press
  SendInput(1, &ip, sizeof(INPUT));

  // Release the "q" key
  ip.ki.dwFlags = KEYEVENTF_KEYUP; // KEYEVENTF_KEYUP for key release
  SendInput(1, &ip, sizeof(INPUT));

  // Exit normally
  return 0;
}

// [[Rcpp::export]]
int r_1()
{
  // This structure will be used to create the keyboard
  // input event.
  INPUT ip;

  // Set up a generic keyboard event.
  ip.type = INPUT_KEYBOARD;
  ip.ki.wScan = 0; // hardware scan code for key
  ip.ki.time = 0;
  ip.ki.dwExtraInfo = 0;

  // Press the "r" key
  ip.ki.wVk = 0x52; // virtual-key code for the "shift" key
  ip.ki.dwFlags = 0; // 0 for key press
  SendInput(1, &ip, sizeof(INPUT));

  // Release the "r" key
  ip.ki.dwFlags = KEYEVENTF_KEYUP; // KEYEVENTF_KEYUP for key release
  SendInput(1, &ip, sizeof(INPUT));

  // Exit normally
  return 0;
}

// [[Rcpp::export]]
int s_1()
{
  // This structure will be used to create the keyboard
  // input event.
  INPUT ip;

  // Set up a generic keyboard event.
  ip.type = INPUT_KEYBOARD;
  ip.ki.wScan = 0; // hardware scan code for key
  ip.ki.time = 0;
  ip.ki.dwExtraInfo = 0;

  // Press the "s" key
  ip.ki.wVk = 0x53; // virtual-key code for the "shift" key
  ip.ki.dwFlags = 0; // 0 for key press
  SendInput(1, &ip, sizeof(INPUT));

  // Release the "s" key
  ip.ki.dwFlags = KEYEVENTF_KEYUP; // KEYEVENTF_KEYUP for key release
  SendInput(1, &ip, sizeof(INPUT));

  // Exit normally
  return 0;
}

// [[Rcpp::export]]
int t_1()
{
  // This structure will be used to create the keyboard
  // input event.
  INPUT ip;

  // Set up a generic keyboard event.
  ip.type = INPUT_KEYBOARD;
  ip.ki.wScan = 0; // hardware scan code for key
  ip.ki.time = 0;
  ip.ki.dwExtraInfo = 0;

  // Press the "t" key
  ip.ki.wVk = 0x54; // virtual-key code for the "shift" key
  ip.ki.dwFlags = 0; // 0 for key press
  SendInput(1, &ip, sizeof(INPUT));

  // Release the "t" key
  ip.ki.dwFlags = KEYEVENTF_KEYUP; // KEYEVENTF_KEYUP for key release
  SendInput(1, &ip, sizeof(INPUT));

  // Exit normally
  return 0;
}

// [[Rcpp::export]]
int u_1()
{
  // This structure will be used to create the keyboard
  // input event.
  INPUT ip;

  // Set up a generic keyboard event.
  ip.type = INPUT_KEYBOARD;
  ip.ki.wScan = 0; // hardware scan code for key
  ip.ki.time = 0;
  ip.ki.dwExtraInfo = 0;

  // Press the "u" key
  ip.ki.wVk = 0x55; // virtual-key code for the "shift" key
  ip.ki.dwFlags = 0; // 0 for key press
  SendInput(1, &ip, sizeof(INPUT));

  // Release the "u" key
  ip.ki.dwFlags = KEYEVENTF_KEYUP; // KEYEVENTF_KEYUP for key release
  SendInput(1, &ip, sizeof(INPUT));

  // Exit normally
  return 0;
}

// [[Rcpp::export]]
int v_1()
{
  // This structure will be used to create the keyboard
  // input event.
  INPUT ip;

  // Set up a generic keyboard event.
  ip.type = INPUT_KEYBOARD;
  ip.ki.wScan = 0; // hardware scan code for key
  ip.ki.time = 0;
  ip.ki.dwExtraInfo = 0;

  // Press the "v" key
  ip.ki.wVk = 0x56; // virtual-key code for the "shift" key
  ip.ki.dwFlags = 0; // 0 for key press
  SendInput(1, &ip, sizeof(INPUT));

  // Release the "v" key
  ip.ki.dwFlags = KEYEVENTF_KEYUP; // KEYEVENTF_KEYUP for key release
  SendInput(1, &ip, sizeof(INPUT));

  // Exit normally
  return 0;
}

// [[Rcpp::export]]
int w_1()
{
  // This structure will be used to create the keyboard
  // input event.
  INPUT ip;

  // Set up a generic keyboard event.
  ip.type = INPUT_KEYBOARD;
  ip.ki.wScan = 0; // hardware scan code for key
  ip.ki.time = 0;
  ip.ki.dwExtraInfo = 0;

  // Press the "w" key
  ip.ki.wVk = 0x57; // virtual-key code for the "shift" key
  ip.ki.dwFlags = 0; // 0 for key press
  SendInput(1, &ip, sizeof(INPUT));

  // Release the "w" key
  ip.ki.dwFlags = KEYEVENTF_KEYUP; // KEYEVENTF_KEYUP for key release
  SendInput(1, &ip, sizeof(INPUT));

  // Exit normally
  return 0;
}

// [[Rcpp::export]]
int x_1()
{
  // This structure will be used to create the keyboard
  // input event.
  INPUT ip;

  // Set up a generic keyboard event.
  ip.type = INPUT_KEYBOARD;
  ip.ki.wScan = 0; // hardware scan code for key
  ip.ki.time = 0;
  ip.ki.dwExtraInfo = 0;

  // Press the "x" key
  ip.ki.wVk = 0x58; // virtual-key code for the "shift" key
  ip.ki.dwFlags = 0; // 0 for key press
  SendInput(1, &ip, sizeof(INPUT));

  // Release the "x" key
  ip.ki.dwFlags = KEYEVENTF_KEYUP; // KEYEVENTF_KEYUP for key release
  SendInput(1, &ip, sizeof(INPUT));

  // Exit normally
  return 0;
}

// [[Rcpp::export]]
int y_1()
{
  // This structure will be used to create the keyboard
  // input event.
  INPUT ip;

  // Set up a generic keyboard event.
  ip.type = INPUT_KEYBOARD;
  ip.ki.wScan = 0; // hardware scan code for key
  ip.ki.time = 0;
  ip.ki.dwExtraInfo = 0;

  // Press the "y" key
  ip.ki.wVk = 0x59; // virtual-key code for the "shift" key
  ip.ki.dwFlags = 0; // 0 for key press
  SendInput(1, &ip, sizeof(INPUT));

  // Release the "y" key
  ip.ki.dwFlags = KEYEVENTF_KEYUP; // KEYEVENTF_KEYUP for key release
  SendInput(1, &ip, sizeof(INPUT));

  // Exit normally
  return 0;
}

// [[Rcpp::export]]
int z_1()
{
  // This structure will be used to create the keyboard
  // input event.
  INPUT ip;

  // Set up a generic keyboard event.
  ip.type = INPUT_KEYBOARD;
  ip.ki.wScan = 0; // hardware scan code for key
  ip.ki.time = 0;
  ip.ki.dwExtraInfo = 0;

  // Press the "z" key
  ip.ki.wVk = 0x5A; // virtual-key code for the "shift" key
  ip.ki.dwFlags = 0; // 0 for key press
  SendInput(1, &ip, sizeof(INPUT));

  // Release the "z" key
  ip.ki.dwFlags = KEYEVENTF_KEYUP; // KEYEVENTF_KEYUP for key release
  SendInput(1, &ip, sizeof(INPUT));

  // Exit normally
  return 0;
}

// [[Rcpp::export]]
int zero_1()
{
  // This structure will be used to create the keyboard
  // input event.
  INPUT ip;

  // Set up a generic keyboard event.
  ip.type = INPUT_KEYBOARD;
  ip.ki.wScan = 0; // hardware scan code for key
  ip.ki.time = 0;
  ip.ki.dwExtraInfo = 0;

  // Press the "0" key
  ip.ki.wVk = 0x30; // virtual-key code for the "shift" key
  ip.ki.dwFlags = 0; // 0 for key press
  SendInput(1, &ip, sizeof(INPUT));

  // Release the "0" key
  ip.ki.dwFlags = KEYEVENTF_KEYUP; // KEYEVENTF_KEYUP for key release
  SendInput(1, &ip, sizeof(INPUT));

  // Exit normally
  return 0;
}

// [[Rcpp::export]]
int one_1()
{
  // This structure will be used to create the keyboard
  // input event.
  INPUT ip;

  // Set up a generic keyboard event.
  ip.type = INPUT_KEYBOARD;
  ip.ki.wScan = 0; // hardware scan code for key
  ip.ki.time = 0;
  ip.ki.dwExtraInfo = 0;

  // Press the "1" key
  ip.ki.wVk = 0x31; // virtual-key code for the "shift" key
  ip.ki.dwFlags = 0; // 0 for key press
  SendInput(1, &ip, sizeof(INPUT));

  // Release the "1" key
  ip.ki.dwFlags = KEYEVENTF_KEYUP; // KEYEVENTF_KEYUP for key release
  SendInput(1, &ip, sizeof(INPUT));

  // Exit normally
  return 0;
}

// [[Rcpp::export]]
int two_1()
{
  // This structure will be used to create the keyboard
  // input event.
  INPUT ip;

  // Set up a generic keyboard event.
  ip.type = INPUT_KEYBOARD;
  ip.ki.wScan = 0; // hardware scan code for key
  ip.ki.time = 0;
  ip.ki.dwExtraInfo = 0;

  // Press the "2" key
  ip.ki.wVk = 0x32; // virtual-key code for the "shift" key
  ip.ki.dwFlags = 0; // 0 for key press
  SendInput(1, &ip, sizeof(INPUT));

  // Release the "2" key
  ip.ki.dwFlags = KEYEVENTF_KEYUP; // KEYEVENTF_KEYUP for key release
  SendInput(1, &ip, sizeof(INPUT));

  // Exit normally
  return 0;
}

// [[Rcpp::export]]
int three_1()
{
  // This structure will be used to create the keyboard
  // input event.
  INPUT ip;

  // Set up a generic keyboard event.
  ip.type = INPUT_KEYBOARD;
  ip.ki.wScan = 0; // hardware scan code for key
  ip.ki.time = 0;
  ip.ki.dwExtraInfo = 0;

  // Press the "3" key
  ip.ki.wVk = 0x33; // virtual-key code for the "shift" key
  ip.ki.dwFlags = 0; // 0 for key press
  SendInput(1, &ip, sizeof(INPUT));

  // Release the "3" key
  ip.ki.dwFlags = KEYEVENTF_KEYUP; // KEYEVENTF_KEYUP for key release
  SendInput(1, &ip, sizeof(INPUT));

  // Exit normally
  return 0;
}

// [[Rcpp::export]]
int four_1()
{
  // This structure will be used to create the keyboard
  // input event.
  INPUT ip;

  // Set up a generic keyboard event.
  ip.type = INPUT_KEYBOARD;
  ip.ki.wScan = 0; // hardware scan code for key
  ip.ki.time = 0;
  ip.ki.dwExtraInfo = 0;

  // Press the "4" key
  ip.ki.wVk = 0x34; // virtual-key code for the "shift" key
  ip.ki.dwFlags = 0; // 0 for key press
  SendInput(1, &ip, sizeof(INPUT));

  // Release the "4" key
  ip.ki.dwFlags = KEYEVENTF_KEYUP; // KEYEVENTF_KEYUP for key release
  SendInput(1, &ip, sizeof(INPUT));

  // Exit normally
  return 0;
}

// [[Rcpp::export]]
int five_1()
{
  // This structure will be used to create the keyboard
  // input event.
  INPUT ip;

  // Set up a generic keyboard event.
  ip.type = INPUT_KEYBOARD;
  ip.ki.wScan = 0; // hardware scan code for key
  ip.ki.time = 0;
  ip.ki.dwExtraInfo = 0;

  // Press the "5" key
  ip.ki.wVk = 0x35; // virtual-key code for the "shift" key
  ip.ki.dwFlags = 0; // 0 for key press
  SendInput(1, &ip, sizeof(INPUT));

  // Release the "5" key
  ip.ki.dwFlags = KEYEVENTF_KEYUP; // KEYEVENTF_KEYUP for key release
  SendInput(1, &ip, sizeof(INPUT));

  // Exit normally
  return 0;
}

// [[Rcpp::export]]
int six_1()
{
  // This structure will be used to create the keyboard
  // input event.
  INPUT ip;

  // Set up a generic keyboard event.
  ip.type = INPUT_KEYBOARD;
  ip.ki.wScan = 0; // hardware scan code for key
  ip.ki.time = 0;
  ip.ki.dwExtraInfo = 0;

  // Press the "6" key
  ip.ki.wVk = 0x36; // virtual-key code for the "shift" key
  ip.ki.dwFlags = 0; // 0 for key press
  SendInput(1, &ip, sizeof(INPUT));

  // Release the "6" key
  ip.ki.dwFlags = KEYEVENTF_KEYUP; // KEYEVENTF_KEYUP for key release
  SendInput(1, &ip, sizeof(INPUT));

  // Exit normally
  return 0;
}

// [[Rcpp::export]]
int seven_1()
{
  // This structure will be used to create the keyboard
  // input event.
  INPUT ip;

  // Set up a generic keyboard event.
  ip.type = INPUT_KEYBOARD;
  ip.ki.wScan = 0; // hardware scan code for key
  ip.ki.time = 0;
  ip.ki.dwExtraInfo = 0;

  // Press the "7" key
  ip.ki.wVk = 0x37; // virtual-key code for the "shift" key
  ip.ki.dwFlags = 0; // 0 for key press
  SendInput(1, &ip, sizeof(INPUT));

  // Release the "7" key
  ip.ki.dwFlags = KEYEVENTF_KEYUP; // KEYEVENTF_KEYUP for key release
  SendInput(1, &ip, sizeof(INPUT));

  // Exit normally
  return 0;
}

// [[Rcpp::export]]
int eight_1()
{
  // This structure will be used to create the keyboard
  // input event.
  INPUT ip;

  // Set up a generic keyboard event.
  ip.type = INPUT_KEYBOARD;
  ip.ki.wScan = 0; // hardware scan code for key
  ip.ki.time = 0;
  ip.ki.dwExtraInfo = 0;

  // Press the "8" key
  ip.ki.wVk = 0x38; // virtual-key code for the "shift" key
  ip.ki.dwFlags = 0; // 0 for key press
  SendInput(1, &ip, sizeof(INPUT));

  // Release the "8" key
  ip.ki.dwFlags = KEYEVENTF_KEYUP; // KEYEVENTF_KEYUP for key release
  SendInput(1, &ip, sizeof(INPUT));

  // Exit normally
  return 0;
}

// [[Rcpp::export]]
int nine_1()
{
  // This structure will be used to create the keyboard
  // input event.
  INPUT ip;

  // Set up a generic keyboard event.
  ip.type = INPUT_KEYBOARD;
  ip.ki.wScan = 0; // hardware scan code for key
  ip.ki.time = 0;
  ip.ki.dwExtraInfo = 0;

  // Press the "9" key
  ip.ki.wVk = 0x39; // virtual-key code for the "shift" key
  ip.ki.dwFlags = 0; // 0 for key press
  SendInput(1, &ip, sizeof(INPUT));

  // Release the "9" key
  ip.ki.dwFlags = KEYEVENTF_KEYUP; // KEYEVENTF_KEYUP for key release
  SendInput(1, &ip, sizeof(INPUT));

  // Exit normally
  return 0;
}

// [[Rcpp::export]]
int funtion_1()
{
  // This structure will be used to create the keyboard
  // input event.
  INPUT ip;

  // Set up a generic keyboard event.
  ip.type = INPUT_KEYBOARD;
  ip.ki.wScan = 0; // hardware scan code for key
  ip.ki.time = 0;
  ip.ki.dwExtraInfo = 0;

  // Press the "f1" key
  ip.ki.wVk = 0x70; // virtual-key code for the "shift" key
  ip.ki.dwFlags = 0; // 0 for key press
  SendInput(1, &ip, sizeof(INPUT));

  // Release the "f1" key
  ip.ki.dwFlags = KEYEVENTF_KEYUP; // KEYEVENTF_KEYUP for key release
  SendInput(1, &ip, sizeof(INPUT));

  // Exit normally
  return 0;
}

// [[Rcpp::export]]
int funtion_2()
{
  // This structure will be used to create the keyboard
  // input event.
  INPUT ip;

  // Set up a generic keyboard event.
  ip.type = INPUT_KEYBOARD;
  ip.ki.wScan = 0; // hardware scan code for key
  ip.ki.time = 0;
  ip.ki.dwExtraInfo = 0;

  // Press the "f2" key
  ip.ki.wVk = 0x71; // virtual-key code for the "shift" key
  ip.ki.dwFlags = 0; // 0 for key press
  SendInput(1, &ip, sizeof(INPUT));

  // Release the "f2" key
  ip.ki.dwFlags = KEYEVENTF_KEYUP; // KEYEVENTF_KEYUP for key release
  SendInput(1, &ip, sizeof(INPUT));

  // Exit normally
  return 0;
}

// [[Rcpp::export]]
int funtion_3()
{
  // This structure will be used to create the keyboard
  // input event.
  INPUT ip;

  // Set up a generic keyboard event.
  ip.type = INPUT_KEYBOARD;
  ip.ki.wScan = 0; // hardware scan code for key
  ip.ki.time = 0;
  ip.ki.dwExtraInfo = 0;

  // Press the "f3" key
  ip.ki.wVk = 0x72; // virtual-key code for the "shift" key
  ip.ki.dwFlags = 0; // 0 for key press
  SendInput(1, &ip, sizeof(INPUT));

  // Release the "f3" key
  ip.ki.dwFlags = KEYEVENTF_KEYUP; // KEYEVENTF_KEYUP for key release
  SendInput(1, &ip, sizeof(INPUT));

  // Exit normally
  return 0;
}

// [[Rcpp::export]]
int funtion_4()
{
  // This structure will be used to create the keyboard
  // input event.
  INPUT ip;

  // Set up a generic keyboard event.
  ip.type = INPUT_KEYBOARD;
  ip.ki.wScan = 0; // hardware scan code for key
  ip.ki.time = 0;
  ip.ki.dwExtraInfo = 0;

  // Press the "f4" key
  ip.ki.wVk = 0x73; // virtual-key code for the "shift" key
  ip.ki.dwFlags = 0; // 0 for key press
  SendInput(1, &ip, sizeof(INPUT));

  // Release the "f4" key
  ip.ki.dwFlags = KEYEVENTF_KEYUP; // KEYEVENTF_KEYUP for key release
  SendInput(1, &ip, sizeof(INPUT));

  // Exit normally
  return 0;
}

// [[Rcpp::export]]
int funtion_5()
{
  // This structure will be used to create the keyboard
  // input event.
  INPUT ip;

  // Set up a generic keyboard event.
  ip.type = INPUT_KEYBOARD;
  ip.ki.wScan = 0; // hardware scan code for key
  ip.ki.time = 0;
  ip.ki.dwExtraInfo = 0;

  // Press the "f5" key
  ip.ki.wVk = 0x74; // virtual-key code for the "shift" key
  ip.ki.dwFlags = 0; // 0 for key press
  SendInput(1, &ip, sizeof(INPUT));

  // Release the "f5" key
  ip.ki.dwFlags = KEYEVENTF_KEYUP; // KEYEVENTF_KEYUP for key release
  SendInput(1, &ip, sizeof(INPUT));

  // Exit normally
  return 0;
}

// [[Rcpp::export]]
int funtion_6()
{
  // This structure will be used to create the keyboard
  // input event.
  INPUT ip;

  // Set up a generic keyboard event.
  ip.type = INPUT_KEYBOARD;
  ip.ki.wScan = 0; // hardware scan code for key
  ip.ki.time = 0;
  ip.ki.dwExtraInfo = 0;

  // Press the "f6" key
  ip.ki.wVk = 0x75; // virtual-key code for the "shift" key
  ip.ki.dwFlags = 0; // 0 for key press
  SendInput(1, &ip, sizeof(INPUT));

  // Release the "f6" key
  ip.ki.dwFlags = KEYEVENTF_KEYUP; // KEYEVENTF_KEYUP for key release
  SendInput(1, &ip, sizeof(INPUT));

  // Exit normally
  return 0;
}

// [[Rcpp::export]]
int funtion_7()
{
  // This structure will be used to create the keyboard
  // input event.
  INPUT ip;

  // Set up a generic keyboard event.
  ip.type = INPUT_KEYBOARD;
  ip.ki.wScan = 0; // hardware scan code for key
  ip.ki.time = 0;
  ip.ki.dwExtraInfo = 0;

  // Press the "f7" key
  ip.ki.wVk = 0x76; // virtual-key code for the "shift" key
  ip.ki.dwFlags = 0; // 0 for key press
  SendInput(1, &ip, sizeof(INPUT));

  // Release the "f7" key
  ip.ki.dwFlags = KEYEVENTF_KEYUP; // KEYEVENTF_KEYUP for key release
  SendInput(1, &ip, sizeof(INPUT));

  // Exit normally
  return 0;
}

// [[Rcpp::export]]
int funtion_8()
{
  // This structure will be used to create the keyboard
  // input event.
  INPUT ip;

  // Set up a generic keyboard event.
  ip.type = INPUT_KEYBOARD;
  ip.ki.wScan = 0; // hardware scan code for key
  ip.ki.time = 0;
  ip.ki.dwExtraInfo = 0;

  // Press the "f8" key
  ip.ki.wVk = 0x77; // virtual-key code for the "shift" key
  ip.ki.dwFlags = 0; // 0 for key press
  SendInput(1, &ip, sizeof(INPUT));

  // Release the "f8" key
  ip.ki.dwFlags = KEYEVENTF_KEYUP; // KEYEVENTF_KEYUP for key release
  SendInput(1, &ip, sizeof(INPUT));

  // Exit normally
  return 0;
}

// [[Rcpp::export]]
int funtion_9()
{
  // This structure will be used to create the keyboard
  // input event.
  INPUT ip;

  // Set up a generic keyboard event.
  ip.type = INPUT_KEYBOARD;
  ip.ki.wScan = 0; // hardware scan code for key
  ip.ki.time = 0;
  ip.ki.dwExtraInfo = 0;

  // Press the "f9" key
  ip.ki.wVk = 0x78; // virtual-key code for the "shift" key
  ip.ki.dwFlags = 0; // 0 for key press
  SendInput(1, &ip, sizeof(INPUT));

  // Release the "f9" key
  ip.ki.dwFlags = KEYEVENTF_KEYUP; // KEYEVENTF_KEYUP for key release
  SendInput(1, &ip, sizeof(INPUT));

  // Exit normally
  return 0;
}

// [[Rcpp::export]]
int funtion_10()
{
  // This structure will be used to create the keyboard
  // input event.
  INPUT ip;

  // Set up a generic keyboard event.
  ip.type = INPUT_KEYBOARD;
  ip.ki.wScan = 0; // hardware scan code for key
  ip.ki.time = 0;
  ip.ki.dwExtraInfo = 0;

  // Press the "f10" key
  ip.ki.wVk = 0x79; // virtual-key code for the "shift" key
  ip.ki.dwFlags = 0; // 0 for key press
  SendInput(1, &ip, sizeof(INPUT));

  // Release the "f10" key
  ip.ki.dwFlags = KEYEVENTF_KEYUP; // KEYEVENTF_KEYUP for key release
  SendInput(1, &ip, sizeof(INPUT));

  // Exit normally
  return 0;
}

// [[Rcpp::export]]
int funtion_11()
{
  // This structure will be used to create the keyboard
  // input event.
  INPUT ip;

  // Set up a generic keyboard event.
  ip.type = INPUT_KEYBOARD;
  ip.ki.wScan = 0; // hardware scan code for key
  ip.ki.time = 0;
  ip.ki.dwExtraInfo = 0;

  // Press the "f11" key
  ip.ki.wVk = 0x7A; // virtual-key code for the "shift" key
  ip.ki.dwFlags = 0; // 0 for key press
  SendInput(1, &ip, sizeof(INPUT));

  // Release the "f11" key
  ip.ki.dwFlags = KEYEVENTF_KEYUP; // KEYEVENTF_KEYUP for key release
  SendInput(1, &ip, sizeof(INPUT));

  // Exit normally
  return 0;
}

// [[Rcpp::export]]
int funtion_12()
{
  // This structure will be used to create the keyboard
  // input event.
  INPUT ip;

  // Set up a generic keyboard event.
  ip.type = INPUT_KEYBOARD;
  ip.ki.wScan = 0; // hardware scan code for key
  ip.ki.time = 0;
  ip.ki.dwExtraInfo = 0;

  // Press the "f12" key
  ip.ki.wVk = 0x7B; // virtual-key code for the "shift" key
  ip.ki.dwFlags = 0; // 0 for key press
  SendInput(1, &ip, sizeof(INPUT));

  // Release the "f12" key
  ip.ki.dwFlags = KEYEVENTF_KEYUP; // KEYEVENTF_KEYUP for key release
  SendInput(1, &ip, sizeof(INPUT));

  // Exit normally
  return 0;
}

// [[Rcpp::export]]
int enter_1()
{
  // This structure will be used to create the keyboard
  // input event.
  INPUT ip;

  // Set up a generic keyboard event.
  ip.type = INPUT_KEYBOARD;
  ip.ki.wScan = 0; // hardware scan code for key
  ip.ki.time = 0;
  ip.ki.dwExtraInfo = 0;

  // Press the "enter" key
  ip.ki.wVk = 0x0D; // virtual-key code for the "shift" key
  ip.ki.dwFlags = 0; // 0 for key press
  SendInput(1, &ip, sizeof(INPUT));

  // Release the "enter" key
  ip.ki.dwFlags = KEYEVENTF_KEYUP; // KEYEVENTF_KEYUP for key release
  SendInput(1, &ip, sizeof(INPUT));

  // Exit normally
  return 0;
}

// [[Rcpp::export]]
int backspace_1()
{
  // This structure will be used to create the keyboard
  // input event.
  INPUT ip;

  // Set up a generic keyboard event.
  ip.type = INPUT_KEYBOARD;
  ip.ki.wScan = 0; // hardware scan code for key
  ip.ki.time = 0;
  ip.ki.dwExtraInfo = 0;

  // Press the "backspace" key
  ip.ki.wVk = 0x08; // virtual-key code for the "shift" key
  ip.ki.dwFlags = 0; // 0 for key press
  SendInput(1, &ip, sizeof(INPUT));

  // Release the "backspace" key
  ip.ki.dwFlags = KEYEVENTF_KEYUP; // KEYEVENTF_KEYUP for key release
  SendInput(1, &ip, sizeof(INPUT));

  // Exit normally
  return 0;
}

// [[Rcpp::export]]
int delete_1()
{
  // This structure will be used to create the keyboard
  // input event.
  INPUT ip;

  // Set up a generic keyboard event.
  ip.type = INPUT_KEYBOARD;
  ip.ki.wScan = 0; // hardware scan code for key
  ip.ki.time = 0;
  ip.ki.dwExtraInfo = 0;

  // Press the "delete" key
  ip.ki.wVk = 0x2E; // virtual-key code for the "shift" key
  ip.ki.dwFlags = 0; // 0 for key press
  SendInput(1, &ip, sizeof(INPUT));

  // Release the "delete" key
  ip.ki.dwFlags = KEYEVENTF_KEYUP; // KEYEVENTF_KEYUP for key release
  SendInput(1, &ip, sizeof(INPUT));

  // Exit normally
  return 0;
}

// [[Rcpp::export]]
int control_a()
{
  // This structure will be used to create the keyboard
  // input event.
  INPUT ip;

  // Set up a generic keyboard event.
  ip.type = INPUT_KEYBOARD;
  ip.ki.wScan = 0; // hardware scan code for key
  ip.ki.time = 0;
  ip.ki.dwExtraInfo = 0;

  // Press the "control" key
  ip.ki.wVk = 0x11; // virtual-key code for the "shift" key
  ip.ki.dwFlags = 0; // 0 for key press
  SendInput(1, &ip, sizeof(INPUT));

  // Release the "control" key
  ip.ki.dwFlags = KEYEVENTF_KEYUP; // KEYEVENTF_KEYUP for key release
  SendInput(1, &ip, sizeof(INPUT));

  // Exit normally
  return 0;
}



// [[Rcpp::export]]
int alter_1()
{
  // This structure will be used to create the keyboard
  // input event.
  INPUT ip;

  // Set up a generic keyboard event.
  ip.type = INPUT_KEYBOARD;
  ip.ki.wScan = 0; // hardware scan code for key
  ip.ki.time = 0;
  ip.ki.dwExtraInfo = 0;

  // Press the "alter" key
  ip.ki.wVk = 0x12; // virtual-key code for the "shift" key
  ip.ki.dwFlags = 0; // 0 for key press
  SendInput(1, &ip, sizeof(INPUT));

  // Release the "alter" key
  ip.ki.dwFlags = KEYEVENTF_KEYUP; // KEYEVENTF_KEYUP for key release
  SendInput(1, &ip, sizeof(INPUT));

  // Exit normally
  return 0;
}

// [[Rcpp::export]]
int pageup_1()
{
  // This structure will be used to create the keyboard
  // input event.
  INPUT ip;

  // Set up a generic keyboard event.
  ip.type = INPUT_KEYBOARD;
  ip.ki.wScan = 0; // hardware scan code for key
  ip.ki.time = 0;
  ip.ki.dwExtraInfo = 0;

  // Press the "pgup" key
  ip.ki.wVk = 0x21; // virtual-key code for the "shift" key
  ip.ki.dwFlags = 0; // 0 for key press
  SendInput(1, &ip, sizeof(INPUT));

  // Release the "pgup" key
  ip.ki.dwFlags = KEYEVENTF_KEYUP; // KEYEVENTF_KEYUP for key release
  SendInput(1, &ip, sizeof(INPUT));

  // Exit normally
  return 0;
}

// [[Rcpp::export]]
int pagedown_1()
{
  // This structure will be used to create the keyboard
  // input event.
  INPUT ip;

  // Set up a generic keyboard event.
  ip.type = INPUT_KEYBOARD;
  ip.ki.wScan = 0; // hardware scan code for key
  ip.ki.time = 0;
  ip.ki.dwExtraInfo = 0;

  // Press the "pgdn" key
  ip.ki.wVk = 0x22; // virtual-key code for the "shift" key
  ip.ki.dwFlags = 0; // 0 for key press
  SendInput(1, &ip, sizeof(INPUT));

  // Release the "pgdn" key
  ip.ki.dwFlags = KEYEVENTF_KEYUP; // KEYEVENTF_KEYUP for key release
  SendInput(1, &ip, sizeof(INPUT));

  // Exit normally
  return 0;
}

// [[Rcpp::export]]
int escape_1()
{
  // This structure will be used to create the keyboard
  // input event.
  INPUT ip;

  // Set up a generic keyboard event.
  ip.type = INPUT_KEYBOARD;
  ip.ki.wScan = 0; // hardware scan code for key
  ip.ki.time = 0;
  ip.ki.dwExtraInfo = 0;

  // Press the "esc" key
  ip.ki.wVk = 0x1B; // virtual-key code for the "shift" key
  ip.ki.dwFlags = 0; // 0 for key press
  SendInput(1, &ip, sizeof(INPUT));

  // Release the "esc" key
  ip.ki.dwFlags = KEYEVENTF_KEYUP; // KEYEVENTF_KEYUP for key release
  SendInput(1, &ip, sizeof(INPUT));

  // Exit normally
  return 0;
}
