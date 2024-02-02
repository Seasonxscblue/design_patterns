#include "HelpHandler.h"

void HelpHandler::HandleHelp() {
  if (this->successor_ != nullptr) {
    this->successor_->HandleHelp();
  }
}