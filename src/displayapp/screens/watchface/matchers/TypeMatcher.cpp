#include "displayapp/screens/watchface/matchers/TypeMatcher.h"

using namespace Pinetime::Applications::Screens::WatchFace;

TypeMatcher::~TypeMatcher() {}

bool TypeMatcher::validateInput(std::string value, std::string regularExpression) {
    const std::regex type_reg(regularExpression);
    return std::regex_match(value, type_reg);
}