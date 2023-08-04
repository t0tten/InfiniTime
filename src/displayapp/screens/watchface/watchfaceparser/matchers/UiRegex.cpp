#include "displayapp/screens/watchface/watchfaceparser/matchers/UiRegex.h"

using namespace Pinetime::Applications::Screens::WatchFace;

UiRegex::UiRegex (const UiType::TYPE& type, std::string& prefixRegex, std::string& infixRegex,  std::string& suffixRegex) {
    this->type = type;
    this->prefixRegex = prefixRegex;
    this->infixRegex = infixRegex;
    this->suffixRegex = suffixRegex;
}

UiRegex::~UiRegex() { }

UiType::TYPE UiRegex::getType() const {
    return this->type;
}

std::string UiRegex::getPrefixRegex() const {
    return this->prefixRegex;
}

std::string UiRegex::getInfixRegex() const {
    return this->infixRegex;
}

std::string UiRegex::getSuffixRegex() const {
    return this->suffixRegex;
}

std::string UiRegex::getCompleteRegex() const {
    return this->prefixRegex + this->infixRegex + this->suffixRegex;
}