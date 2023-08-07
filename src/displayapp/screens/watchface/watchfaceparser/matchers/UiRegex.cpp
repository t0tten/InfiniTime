#include "displayapp/screens/watchface/watchfaceparser/matchers/UiRegex.h"

using namespace Pinetime::Applications::Screens::WatchFace;

UiRegex::UiRegex (const UiType::TYPE& type, char*& prefixRegex, char*& infixRegex,  char*& suffixRegex) {
    this->type = type;
    this->prefixRegex = prefixRegex;
    this->infixRegex = infixRegex;
    this->suffixRegex = suffixRegex;
}

UiRegex::~UiRegex() { }

UiType::TYPE UiRegex::getType() const {
    return this->type;
}

char* UiRegex::getPrefixRegex() const {
    return this->prefixRegex;
}

char* UiRegex::getInfixRegex() const {
    return this->infixRegex;
}

char* UiRegex::getSuffixRegex() const {
    return this->suffixRegex;
}

char* UiRegex::getCompleteRegex() const {
    CharManipulation* cm = new CharManipulation();
    char* retVal = cm->concat(cm->concat(this->prefixRegex, this->infixRegex), this->suffixRegex);
    delete cm;
    return retVal;
}