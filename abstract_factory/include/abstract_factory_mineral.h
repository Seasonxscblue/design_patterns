#ifndef ABSTARCTFACTORY_MINERAL_H_
#define ABSTARCTFACTORY_MINERAL_H_

#include <cstdint>
#include <memory>

namespace abstract_factory {

class Mineral {
 public:
  Mineral(uint32_t x = 0, uint32_t y = 0) : x_{x}, y_{y} {}
  virtual ~Mineral() = default;
  virtual void Display() = 0;

protected:
  uint32_t x_;
  uint32_t y_;
};

using MineralPtr = std::unique_ptr<Mineral>;

} // namespace abstract_factory

#endif // ABSTARCTFACTORY_MINERAL_H_