#include <libInterpolate/Interpolators/_2D/LinearDelaunayTriangleInterpolator.hpp>

int main() {
  _2D::LinearDelaunayTriangleInterpolator<float> interp;

  std::vector<float> x{0, 0, 1, -1};
  std::vector<float> y{1, -1, 0, 0};
  std::vector<float> z{0, 0, 1, -1};

  interp.setData(x, y, z);
  printf("%f\n", interp(0.0, 0.0));
  printf("%f\n", interp(0.5, 0.5));
  printf("%f\n", interp(.49, 0.5));
  printf("%f\n", interp(.51, 0.5));
  printf("%f\n", interp(1.0, 1.0));
  printf("%f\n", interp(200, 200));
  return 0;
}