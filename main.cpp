#include <iostream>
#include <simgrid/msg.h>
#include <yaml-cpp/yaml.h>

XBT_LOG_NEW_DEFAULT_CATEGORY(msg_app_masterworker, "Messages specific for this msg example");

int main() {
    YAML::Node root;
    XBT_INFO("Hello, simgrid");
    return 0;
}