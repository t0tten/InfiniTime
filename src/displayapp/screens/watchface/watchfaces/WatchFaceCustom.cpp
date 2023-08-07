#include "displayapp/screens/watchface/watchfaces/WatchFaceCustom.h"

using namespace Pinetime::Applications::Screens::WatchFace;

WatchFaceCustom::WatchFaceCustom() {
  //const int MAX_WIDTH = 240;
  this->root = new ArithmeticUiComponent();

  /* GRAPHICS */
  ArrayList<std::string> values;
  values.append("0");
  values.append("50");
  values.append("50");
  values.append("50");
  this->root->addCodeBlockComponent(new RectangleUiComponent(values));

  std::string text = "test";
  IfArithmeticUiComponent* ifComp = new IfArithmeticUiComponent(text);
  this->root->addCodeBlockComponent(ifComp);

  ArrayList<std::string> values2;
  values2.append("50");
  values2.append("0");
  values2.append("50");
  values2.append("50");
  ifComp->addCodeBlockComponent(new RectangleUiComponent(values2));

  ArrayList<std::string> color3;
  color3.append("159");
  color3.append("150");
  color3.append("150");
  this->root->addCodeBlockComponent(new ColorUiComponent(color3));

  ArrayList<std::string> values3;
  values3.append("150");
  values3.append("150");
  values3.append("100");
  this->root->addCodeBlockComponent(new CircleUiComponent(values3));

  ArrayList<std::string> values4;
  values4.append("50");
  values4.append("100");
  values4.append("400");
  values4.append("{CLK} works");
  this->root->addCodeBlockComponent(new TextUiComponent(values4));

  ArrayList<std::string> values5;
  values5.append("20");
  values5.append("130");
  values5.append("210");
  values5.append("130");
  values5.append("2");
  this->root->addCodeBlockComponent(new LineUiComponent(values5));

  this->root->execute(true, nullptr, this->components);

  taskRefresh = lv_task_create(RefreshTaskCallback, LV_DISP_DEF_REFR_PERIOD, LV_TASK_PRIO_MID, this);
  Refresh();
}

WatchFaceCustom::~WatchFaceCustom() {
  for (unsigned int i = 0; i < this->components.size(); i++) {
    delete this->components.pop();
  }

  delete this->root;

  lv_task_del(taskRefresh);
  lv_obj_clean(lv_scr_act());
}

void WatchFaceCustom::Refresh() {
  this->root->update(true);
}
