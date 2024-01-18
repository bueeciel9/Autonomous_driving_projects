Confidence Score: probability of an object being within the bounding box found in the image

Anchor box: predefined box with a specific size or ratio

NMS(Non-Maximum Suppression): Removing detected bounding boxes that are in similar locations or have a low probability of containing an object, and then identifying the most suitable box.

NMS Algorithm: 
- Remove detected bounding boxes with a confidence score lower than the confidence threshold.
- Sort the bounding boxes in descending order based on their confidence scores.
- Sequentially process each box: Remove any bounding box that belongs to the same class as the box with the highest confidence score and has an Intersection over Union (IoU) greater than or equal to the IoU threshold.
- Select the remaining bounding boxes.

Accuracy: the proportion of true results (both true positives and true negatives) in the total number of cases examined. It's a measure of how correctly a model classifies or predicts.

Recall, also known as sensitivity, measures the proportion of actual positives that are correctly identified as such. It's particularly important in cases where the cost of false negatives is high.

Precision: the proportion of positive identifications that are actually correct. It measures how many of the items identified as positive are actually positive. This is crucial in situations where false positives are a significant concern.



Object detectino dataset:
- Pascal2
- COCO
- Self-driving car engineering from udacity
- KITTI
- open images dataset from google
