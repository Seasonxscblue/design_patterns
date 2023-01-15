//
// Created by Season on 2022/8/20.
//

// 单例
#ifndef SINGLETON_SUN_H
#define SINGLETON_SUN_H

class Sun {
public:
    static Sun &getInstance();

    Sun(const Sun &o) = delete;

    Sun &operator=(const Sun &o) = delete;

private:
    Sun() = default;
};

#endif//SINGLETON_SUN_H
