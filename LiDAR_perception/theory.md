Open 3D

# ROS LiDAR Object Tracking Tutorial

## Installation

1. Create a catkin workspace:
mkdir -p catkin_ws/src
cd catkin_ws/src


2. Clone the lidar tracking code into the `src` folder:
git clone [GitHub repository URL]


3. Build the workspace:
cd ..
catkin_make
source devel/setup.bash
## Execution

- Run the `kf_tracker` node:
rosrun multi_object_tracking_lidar kf_tracker


- Use a rosbag file for input:

## References

- [ROS Wiki on multi_object_tracking_lidar](wiki.ros.org link)
https://github.com/praveen-palanisamy/multiple-object-tracking-lidar/wiki/velodyne_vlp16