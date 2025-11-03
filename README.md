# Armor Detect ROS2
ROS2 节点用于装甲板检测，基于 OpenCV 与自定义接口消息。

## 安装

git clone https://github.com/jy666317/armordetect.git
cd armordetect
colcon build --symlink-install
source install/setup.bash

## 使用

发布者节点：
ros2 run armor_detect publisher_node
订阅者节点：
ros2 run armor_detect subscriber_node

## 包
- armor_detect 
    识别装甲板并输出装甲板的位姿

- armor_interfaces
    自定义消息包，输出装甲板的位姿

- slam_toolbox
    slam算法源码包


