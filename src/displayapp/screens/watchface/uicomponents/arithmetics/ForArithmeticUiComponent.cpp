#include "displayapp/screens/watchface/uicomponents/arithmetics/ForArithmeticUiComponent.h"

using namespace Pinetime::Applications::Screens::WatchFace;

ForArithmeticUiComponent::ForArithmeticUiComponent(const char*& values): ArithmeticUiComponent(UiType::FOR) {
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
bool ForArithmeticUiComponent::execute(const bool& shouldDraw, ColorComponent* color, ArrayList<UiComponent*>& components) {
    if (shouldDraw) {
        components.append(this);
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
        delete components.pop();
    }
    return true;
}

int ForArithmeticUiComponent::getIndex() const {
    return this->index;
}

const char* ForArithmeticUiComponent::getIndexName() const {
    return this->indexName;
}