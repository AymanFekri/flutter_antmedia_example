//
//  Generated file. Do not edit.
//

// clang-format off

#include "generated_plugin_registrant.h"

#include <ant_media_flutter/ant_media_flutter.h>
#include <flutter_webrtc/flutter_web_r_t_c_plugin.h>

void fl_register_plugins(FlPluginRegistry* registry) {
  g_autoptr(FlPluginRegistrar) ant_media_flutter_registrar =
      fl_plugin_registry_get_registrar_for_plugin(registry, "AntMediaFlutter");
  ant_media_flutter_register_with_registrar(ant_media_flutter_registrar);
  g_autoptr(FlPluginRegistrar) flutter_webrtc_registrar =
      fl_plugin_registry_get_registrar_for_plugin(registry, "FlutterWebRTCPlugin");
  flutter_web_r_t_c_plugin_register_with_registrar(flutter_webrtc_registrar);
}
