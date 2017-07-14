#include <windows.h>
#include <Rcpp.h>
using namespace Rcpp;

// [[Rcpp::export]]

double get_point_x()
{
  POINT cursorPos;
  GetCursorPos(&cursorPos);
  double cx = cursorPos.x;
  return cx;
}