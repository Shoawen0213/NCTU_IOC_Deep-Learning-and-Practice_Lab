# NCTU DLP Lab05 Conditional Sequence-to-Sequence VAE

## Data description

| File NAME                                              | decription                  |
| -------------------------------------------------------|:---------------------------:|
| sample.py                                              | Provide by TA               |
| readme.txt                                             | ReadMe provide by TA        |
| train.txt, test.txt                                    | provided by TA        |
| Lab5_Conditional Sequence-to-Sequence VAE_Fianl version.ipynb | final submit version with comment               |
| Lab05Conditional Sequence-to-Sequence VAE_TR&KL(sigmoid)_Final Demo Version.ipynb | demo version, higher performance |
| compare plot.ipynb | plot func using in "cycle"               |

## Experiments Results
![image](https://github.com/Shoawen0213/NCTU_IOC_Deep-Learning-and-Practice_Lab/blob/main/Lab05_Conditional%20Sequence-to-Sequence%20VAE/img/BLEU_score.JPG?raw=true)
![image](https://github.com/Shoawen0213/NCTU_IOC_Deep-Learning-and-Practice_Lab/blob/main/Lab05_Conditional%20Sequence-to-Sequence%20VAE/img/Gaussian%20score.JPG)
![image](https://github.com/Shoawen0213/NCTU_IOC_Deep-Learning-and-Practice_Lab/blob/main/Lab05_Conditional%20Sequence-to-Sequence%20VAE/img/CVAE%20with%20cycle%20_final_%E8%A8%AD%E8%A8%88%E7%9A%84Sigmoid%20KL%20weight.png)

## Reference website
|  Reference Name                                  | Link             |
| -------------------------------------------------|:-------------------------------------------------------------------------------------:|
|   机器视觉-13 生成模型VAE                        | https://www.youtube.com/watch?v=1aQtj8mTuF4&ab_channel=%E5%88%98%E5%85%88%E7%94%9F    |
|   Variational Autoencoders                       | https://www.youtube.com/watch?v=9zKuYvjFFS8&ab_channel=ArxivInsights                  |
|   DEPLOYING A SEQ2SEQ MODEL WITH TORCHSCRIPT     | https://pytorch.org/tutorials/beginner/deploy_seq2seq_hybrid_frontend_tutorial.html   |
|   LSTM PyTorch                                   | https://pytorch.org/docs/stable/generated/torch.nn.LSTM.html                          |
|   Variational Inference and VAE Notes            | https://bobondemon.github.io/2018/09/18/Variational-Inference-Notes/                  |
|   VAE loss function                              | https://github.com/pytorch/examples/issues/294                                        |
|   KL 散度 vanish                                 | https://zhuanlan.zhihu.com/p/64071467                                                 |
|   從零開始的 Sequence to Sequence                | http://zake7749.github.io/2017/09/28/Sequence-to-Sequence-tutorial/                   |


##  Github Resource
|  Github Author                  | Link             |
| --------------------------------|:---------------------------------------------------------:|
|   csielee                       | https://github.com/csielee/2019DL/tree/master/lab5        |

### Note
	官方API example:
		假如输入有3個句子，每個句子都由5個單詞组成，而每個單詞用10维的詞向量表示，則seq_len=5, batch=3, input_size=10
	
	#詞向量維數10, 隱藏元維度20, 2個LSTM層串聯
	rnn = nn.LSTM(10, 20, 2)
	
	#seq_len=5, batch_size=3, 詞向量維數=10
	input = torch.randn(5, 3, 10)
	
	#intitial 的hidden unit & memory unit ，維度通常一樣
	#兩個LSTM層，batch_size=3, hidden unit dimension ：20
	h0 = torch.randn(2, 3, 20)
	c0 = torch.randn(2, 3, 20)
	
	#output是最後一層lstm的每個詞向量對應的隱藏源輸出, 只和序列長度有關
	#hn, cn是所有層最後一個隐藏元和記憶元的輸出
	output, (hn, cn) = rnn(input, (h0, c0))
	
	print(output.size(), hn.size(), cn.size())
	torch.Size([5, 3, 20]) torch.Size([2, 3, 20]) torch.Size([2, 3, 20])

### TA Q&A
  Q1：VAE由那些LOSS組成?各代別什麼意思?用處?  
  Q2：Reparameraze trick 用處?  
  Q3：VAE跟AE差別?  
