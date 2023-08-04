#include "displayapp/screens/watchface/uicomponents/arithmetics/ForArithmeticUiComponent.h"

using namespace Pinetime::Applications::Screens::WatchFace;

ForArithmeticUiComponent::ForArithmeticUiComponent(std::string& values): ArithmeticUiComponent(UiType::FOR) {
    this->start = 1;
    this->end = 10;
    this->increment = 1;
    this->indexName = values;
    this->index = -1;
}

ForArithmeticUiComponent::~ForArithmeticUiComponent() { }

/**
 * TODO:
 *  Should save each instance of a code block for each loop?
*/
bool ForArithmeticUiComponent::execute(const bool& shouldDraw, ColorComponent* color, std::vector<UiComponent*>& components) {
    if (shouldDraw) {
        components.push_back(this);
        if ((this->end - this->start) >= 0) {
            for (int i = this->start; i < this->end; i += increment) {
                this->index = i;
                this->executeCodeBlock(shouldDraw, color, components);
            }
        } else {
            for (int i = this->start; i > this->end; i -= increment) {
                this->index = i;
                this->executeCodeBlock(shouldDraw, color, components);
            }
        }
        components.erase(components.begin() + components.size());
    }
    return true;
}

int ForArithmeticUiComponent::getIndex() const {
    return this->index;
}

std::string ForArithmeticUiComponent::getIndexName() const {
    return this->indexName;
}