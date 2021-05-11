# NCTU DLP Lab04 Diabetic retinopathy detection

## Data description

| File NAME                                              | decription                  |
| -------------------------------------------------------|:---------------------------:|
| Lab4-Diabetic retinopathy detection_Submit.ipynb |          |
| Lab4-Diabetic retinopathy detection_Subemit_ver1_with_result.ipynb | 有跑結果圖，但有一個地方沒跑到，小改一下就好         |
| Lab4-Diabetic retinopathy detection_Submit_batch_siz32&10.ipynb | 有跑結果圖，ResNet batch_size=32, ResNet50 batch_size=10         |
| dataloader.py                                          |                             |
| img 檔                                                 |csv from TA                  |


## Reference website
|  Reference Name                                     | Link             |
| ----------------------------------------------------|:-------------------------------------------------------------------------------------:|
|   PyTorch ResNet 使用與原始碼解析                   | https://iter01.com/525623.html                                    |
|   Pytorch实现ResNet代码解析                         | https://blog.csdn.net/qq_31347869/article/details/100566719                          |
|   Pytorch ResNet implementation from Scratch        | https://www.youtube.com/watch?v=DkNIBBBvcPs&t=349s&ab_channel=AladdinPersson          |
|   [Python] *args 和 **kwargs 是什麼？一次搞懂它們！   | https://skylinelimit.blogspot.com/2018/04/python-args-kwargs.html  |
|   Source code for torchvision.models.resnet         | https://pytorch.org/docs/0.4.0/_modules/torchvision/models/resnet.html                |
|   TORCHVISION.MODELS                                | https://pytorch.org/vision/stable/models.html                |


##  Github Resource
|  Github Author                  | Link             |
| --------------------------------|:-------------------------------------------------------------------------------------:|
|   chiha8888                      | https://github.com/chiha8888/NCTU_DLP/tree/master/lab3                                |
|   PhoebeWangintw                   | https://github.com/PhoebeWangintw/NCTU_Deep_Learning_2019/tree/master/HW3            |
|   csielee                          | https://github.com/csielee/2019DL/tree/master/lab3        |

## TA Q&A
   Q1：解釋所修改的dataloader。
   Q2：為甚麼要做augmentation?
   Q3：解釋為甚麼cinfusion matrix某個class爛到爆? (data imbalance)
   Q4：為甚麼越深層網路效果不一定越好? 為甚麼ResNET50修正了該問題?
   Q5：Load pretrained model，在FC層做了size的轉換，這邊的weight要重train還是捨棄?
   
