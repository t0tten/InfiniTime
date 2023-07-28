#include "displayapp/screens/watchface/watchfaces/WatchFaceCustom.h"

using namespace Pinetime::Applications::Screens::WatchFace;

WatchFaceCustom::WatchFaceCustom() {
  std::vector<std::string> values;
  this->root = TextUiComponent::parseValues(values);

  taskRefresh = lv_task_create(RefreshTaskCallback, LV_DISP_DEF_REFR_PERIOD, LV_TASK_PRIO_MID, this);
  Refresh();
}

WatchFaceCustom::~WatchFaceCustom() {
  lv_task_del(taskRefresh);
  lv_obj_clean(lv_scr_act());
  
  delete this->root;
}

void WatchFaceCustom::Refresh() {
  this->root->execute(nullptr);
}
