#include <windows.h>
#include <Rcpp.h>
using namespace Rcpp;

// [[Rcpp::export]]
void SingleClick(int x, int y)
{
  const double XSCALEFACTOR = 65535 / (GetSystemMetrics(SM_CXSCREEN) - 1);
  const double YSCALEFACTOR = 65535 / (GetSystemMetrics(SM_CYSCREEN) - 1);
  
  POINT cursorPos;
  GetCursorPos(&cursorPos);
  
  double cx = cursorPos.x * XSCALEFACTOR;
  double cy = cursorPos.y * YSCALEFACTOR;
  
  double nx = x * XSCALEFACTOR;
  double ny = y * YSCALEFACTOR;
  
  INPUT Input={0};
  Input.type = INPUT_MOUSE;
  
  Input.mi.dx = (LONG)nx;
  Input.mi.dy = (LONG)ny;
  
  Input.mi.dwFlags = MOUSEEVENTF_MOVE | MOUSEEVENTF_ABSOLUTE | MOUSEEVENTF_LEFTDOWN | MOUSEEVENTF_LEFTUP;
  
  
  SendInput(1,&Input,sizeof(INPUT));
  
  
}