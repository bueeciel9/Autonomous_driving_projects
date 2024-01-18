#NMS Algorithm example:

boxes = [classes, confidence_score, xmin, ymin, xmax, ymax]

nms_result = []

boxes = [box for box in boxes if box[1] > confidence_threshold]
boxes = sorted(boxes, key=lambda x: x[1], reverse=True)

while boxes:
    present_box = boxes.pop(0)
    boxes = [box for box in boxes if box[0] != present_box[0] or box[1] < iou_threshold]
    nms_result.append(present_box)

print(nms_result)
