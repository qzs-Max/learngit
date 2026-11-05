1. yolo中detection和pose estimation有什么区别？
det only finds the location and the class.Pose not only can do what det can do,but also can collect the key points to comfirm the post of the target objects.But it means that pose will cost more source and face the risk of inaccurate small object detection.  
2. 为什么需要划分训练集、验证集和测试集？
This is to ensure that the model's recognition ability is not limited to the same sampies.
3. Precision、Recall、IoU 和 mAP 分别有什么作用？mAP50 与 mAP50-95 有什么区别？
Precision represents false detections.
Recall represents missed detections.
IoU refiects the credibility of a prediction box.
mAP represents comprehensive capabilities.
mAP50 values recall capability ,while mAP50-95 emphasizes positioning accuracy.
4. 什么是过拟合？如果模型训练效果很好，但实际比赛中漏检严重，应该从哪些方面排查和改进？
Relying toomuch on the training set,no generalizable rules werelearned.
Check whether the val set is leaked to the train set,which may cause over-match.