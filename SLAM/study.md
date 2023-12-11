Sensors

- Exteroceptive sensor: camera, lidar, GNSS
*GNSS: 위성 기반의 위치 추정 센서(나라마다 다름. GPS는 미국) 종류는 SPS, DGPS, RTK-GPS(가장 정학홤. 대신 비쌈)
*LiDAR: 빛 반사되어 돌아오는 시간을 통해 거리 측정. FMCW lidar가 핫함.
*Camera: 빛 신호를 받아 RGB 이미지를 재구성

- Proprioceptive sensor: IMU, wheel encoder
*Wheel encoder: 이동량을 측정하는 센서. 이동량 = 바퀴의 회전량 * 바퀴의 둘레.
*IMU: 선형 가속도(linear accelarator) 와 각속도(angular gyroscope)를 측정하는 센서. 

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
- 정확한 HD-MAP을 기반으로 자동차의 위치를 추정하기
- '정확한' Map이 있어야 한다.

Mapping
- 정확한 Proprioceptive sensing이 있을 때(정확한 위치 정보가 있을 때)
- 부정확한 Exteroceptive sensing을 개선하는 방법(최적의 주변 환경 정보를 만들기)
- 정확한 위치 정보를 기반으로 HD-Map을 생성하기
- '정확한' 위치 정보가 있어야 한다.

SLAM (Simultaneous Localization and Mapping)