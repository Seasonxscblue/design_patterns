#ifndef SINGLETON_SUN_H_
#define SINGLETON_SUN_H_

namespace singleton {

class Sun {
 public:
  static Sun &GetInstance();

 private:
  Sun() = default;
  Sun(const Sun &o) = delete;
  Sun &operator=(const Sun &o) = delete;
};

}

#endif // SINGLETON_SUN_H_
