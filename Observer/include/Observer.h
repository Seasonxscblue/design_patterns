#pragma once

#include <cstddef>
#include <memory>

class Observer
{
public:
	virtual ~Observer() = default;

	virtual std::byte Id() = 0;

	virtual void Update() = 0;
};

using ObserverPtr = std::shared_ptr<Observer>;
