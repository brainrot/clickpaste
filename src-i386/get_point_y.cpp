#include <windows.h>
#include <Rcpp.h>
using namespace Rcpp;

// [[Rcpp::export]]

double get_point_y()
{
  POINT cursorPos;
  GetCursorPos(&cursorPos);
  double cy = cursorPos.y;
  return cy;
}