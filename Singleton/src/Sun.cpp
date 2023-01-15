//
// Created by Season on 2022/8/20.
//
#include "Sun.h"

Sun &Sun::getInstance() {
    static Sun sun;
    return sun;
}