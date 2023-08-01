#include "displayapp/screens/watchface/watchfaces/WatchFaceCustom.h"

using namespace Pinetime::Applications::Screens::WatchFace;

WatchFaceCustom::WatchFaceCustom() {
  //const int MAX_WIDTH = 250;
  this->root = ArithmeticUiComponent::empty();

  /* GRAPHICS */
  std::vector<std::string> values;
  values.push_back("0");
  values.push_back("50");
  values.push_back("50");
  values.push_back("50");
  this->root->addCodeBlockComponent(RectangleUiComponent::parseValues(values));

  IfArithmeticUiComponent* ifComp = IfArithmeticUiComponent::parseValues("");
  this->root->addCodeBlockComponent(ifComp);

  std::vector<std::string> values2;
  values2.push_back("50");
  values2.push_back("0");
  values2.push_back("50");
  values2.push_back("50");
  ifComp->addCodeBlockComponent(RectangleUiComponent::parseValues(values2));

  std::vector<std::string> color3;
  color3.push_back("159");
  color3.push_back("150");
  color3.push_back("150");
  this->root->addCodeBlockComponent(ColorUiComponent::parseValues(color3));

  std::vector<std::string> values3;
  values3.push_back("150");
  values3.push_back("150");
  values3.push_back("100");
  this->root->addCodeBlockComponent(CircleUiComponent::parseValues(values3));

  std::vector<std::string> values4;
  values4.push_back("50");
  values4.push_back("100");
  values4.push_back("400");
  values4.push_back("!!!!{CLK}");
  this->root->addCodeBlockComponent(TextUiComponent::parseValues(values4));

  std::vector<std::string> values5;
  values5.push_back("20");
  values5.push_back("130");
  values5.push_back("210");
  values5.push_back("130");
  values5.push_back("2");
  this->root->addCodeBlockComponent(LineUiComponent::parseValues(values5));

  this->root->execute(true, nullptr, this->components);

  taskRefresh = lv_task_create(RefreshTaskCallback, LV_DISP_DEF_REFR_PERIOD, LV_TASK_PRIO_MID, this);
  Refresh();
}

WatchFaceCustom::~WatchFaceCustom() {
  delete this->root;

  lv_task_del(taskRefresh);
  lv_obj_clean(lv_scr_act());
}

void WatchFaceCustom::Refresh() {
  this->root->update(true);
}
