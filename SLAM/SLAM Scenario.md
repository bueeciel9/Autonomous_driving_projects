1. Driving Scenario
- Highway driving (대부분 경우 직진, 차선변경 잦지 않음. 차들간 넓은 안전거리 유지 필요. 고속 이동)
- Urban driving (저속 ~ 적당한 속도. 차선 벼경이 잦음. 좌/우회전 잦음. 보행자/오토바이/자전거)
- Urban parking (비어있는 공간을 찾아 주차해야함.)

Driving에 필요한 인지 기술:
Detection(vehicle, lane, human), Segmentation(ground, free space), Depth. 

2. Parking Scenario
- Parking assist: surround view perception 기반 주차 보조. SLAM불필요.(Bosch에서 한다!!)
- Home zone parking: 운전자가 직접 운전하면서 주차 공간 지도 작성(SLAM). 이후 주차공간 지도를 기반으로 자율주행.
- Auto valet parking (AVP): 운전자가 사전 지정된 위치에 주차. 
방법 1: 클라우드를 통해 주차장 지도를 입수. 지도기반 자율주행을 통해 자동차 주차.
방법 2: 자율주행을 통해 주차장을 돌아다니며, 빈곳을 찾아 주차. 이 때, 주차장에 대한 지도 생성.
운전자가 자동차를 호출하면, 사전 지정된 위치로 복귀.
AVP를 위한 기술: Surround view 인지 기술 & VSLAM(위치 추정/지도 작성)

HD-Map
- Map을 이용한 cm오차의 localization(정확한 차선 단위의 ㅣocalization) 신호등, 횡단보도, 속도제한 등.
