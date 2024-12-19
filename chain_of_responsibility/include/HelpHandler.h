#pragma once

#include <memory>

class HelpHandler;

using HelpHandlerPtr = std::unique_ptr<HelpHandler>;

class HelpHandler {
public:
  HelpHandler(HelpHandlerPtr s) { successor_.reset(s.release()); }

  virtual void HandleHelp();

private:
  HelpHandlerPtr successor_;
};