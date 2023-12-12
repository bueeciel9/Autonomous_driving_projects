- Visual SLAM
:이미지 속 특징 또는 밝기 변화를 기반으로 위치 변화를 추정하고 지도를 생성
저렴 & 센서 성능 조정이 쉽다. 시야 가려지거나 어두운 곳에서 사용이 힘들다.
-- Monocular(저렴하지만 scale ambiguity. 3차원 공간을 실제 비율로 추정할 수 없음)
Algorithm: DSO(sparse depth, KFs only), LSD-SLAM(semi-dense depth, KFs only), ORB-SLAM(tracked keypoints)
-- Stereo/Multi(2대 이상의 카메라를 사용. 거리/깊이 추정. 정교한 카메라 설정 및 calibration이 필요함. 많은 연산이 필요함)
-- RGB-D(RGB이미지와 Depth이미지를 취득하는 카메라. 대부분의 depth camera거리는 10-15m. dense mapping을 하기 용이함)

- LiDAR SLAM
: LiDAR point cloud정보를 정합해 위치변화를 추정하고 지도를 생성하는 SLAM
센서 데이터 자체가 3D geometry를 포함. range ~300m. 정확, 밤에도 수행 가능. 비싸고 센서 속도가 느림. 10~20Hz
-- 2D LiDAR SLAM(로봇 자율주행에서 주로 사용. 자동차에서는 잘 사용하지 X. 2D Occupancy지도를 얻기 쉬움. 주어진 높이에 대한 2Dwㅣ도가 나옴.)
-- 3D LiDAR SLAM(넓은 3D 공간을 높은 정확도로 맵핑할 수 있음. 비싸고 속도가 느림. 10-20Hz)

