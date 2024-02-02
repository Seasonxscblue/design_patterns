#include "singleton_sun.h"

singleton::Sun &singleton::Sun::GetInstance() {
  static auto sun{singleton::Sun{}};
  return sun;
}