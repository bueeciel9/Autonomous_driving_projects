Sensors

- Exteroceptive sensor: camera, lidar
- Proprioceptive sensor: IMU, wheel encoder


Limitation:
If the sensor data is unstable, the whole system can be affected.

Solution:
Collect lots of sensor data, and get the mean?
-> Exteroceptive sensor works
-> Can't move when it collects the data

Proprioceptive sensor can collect one data per one movement

All the sensors follow the probability distribution.


Localization
- 정확한 Exteroceptive sensing이 있을 때(정확한 주변 환경 정보가 있을 때)
- 부정확한 Proprioceptive sensing을 개선하는 방법(최적의 위치를 찾기)
Mapping
- 정확한 Proprioceptive sensing이 있을 때(정확한 위치 정보가 있을 때)
- 부정확한 Exteroceptive sensing을 개선하는 방법(최적의 주변 환경 정보를 만들기)