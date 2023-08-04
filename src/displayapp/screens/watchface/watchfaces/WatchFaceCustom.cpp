#include "displayapp/screens/watchface/watchfaces/WatchFaceCustom.h"

using namespace Pinetime::Applications::Screens::WatchFace;

WatchFaceCustom::WatchFaceCustom() {
  //const int MAX_WIDTH = 240;
  this->root = new ArithmeticUiComponent();

  /* GRAPHICS */
  std::vector<std::string> values;
  values.push_back("0");
  values.push_back("50");
  values.push_back("50");
  values.push_back("50");
  this->root->addCodeBlockComponent(new RectangleUiComponent(values));

  std::string text = "test";
  IfArithmeticUiComponent* ifComp = new IfArithmeticUiComponent(text);
  this->root->addCodeBlockComponent(ifComp);

  std::vector<std::string> values2;
  values2.push_back("50");
  values2.push_back("0");
  values2.push_back("50");
  values2.push_back("50");
  ifComp->addCodeBlockComponent(new RectangleUiComponent(values2));

  std::vector<std::string> color3;
  color3.push_back("159");
  color3.push_back("150");
  color3.push_back("150");
  this->root->addCodeBlockComponent(new ColorUiComponent(color3));

  std::vector<std::string> values3;
  values3.push_back("150");
  values3.push_back("150");
  values3.push_back("100");
  this->root->addCodeBlockComponent(new CircleUiComponent(values3));

  std::vector<std::string> values4;
  values4.push_back("50");
  values4.push_back("100");
  values4.push_back("400");
  values4.push_back("{CLK} works");
  this->root->addCodeBlockComponent(new TextUiComponent(values4));

  std::vector<std::string> values5;
  values5.push_back("20");
  values5.push_back("130");
  values5.push_back("210");
  values5.push_back("130");
  values5.push_back("2");
  this->root->addCodeBlockComponent(new LineUiComponent(values5));

  this->root->execute(true, nullptr, this->components);
  /*std::vector<std::string> values3;
  values3.push_back("150");
  values3.push_back("150");
  values3.push_back("100");
  this->component = new CircleUiComponent(values3);

  bool shouldDraw = true;
  ColorComponent* color = nullptr;

  this->component->execute(shouldDraw, color, this->components);*/

  taskRefresh = lv_task_create(RefreshTaskCallback, LV_DISP_DEF_REFR_PERIOD, LV_TASK_PRIO_MID, this);
  Refresh();
}

WatchFaceCustom::~WatchFaceCustom() {
  delete this->root;
  //delete this->component;

  lv_task_del(taskRefresh);
  lv_obj_clean(lv_scr_act());
}

void WatchFaceCustom::Refresh() {
  this->root->update(true);
  //this->component->update(true);
}
