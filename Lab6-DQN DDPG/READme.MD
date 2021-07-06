# NCTU DLP Lab06 DQN DDPG

## Data description

| File NAME                                              | decription                  |
| -------------------------------------------------------|:---------------------------:|
| dqn-TA.py / ddpg-TA.py                                 | sample code provided by TA  |
| dqn.py    / ddpg.py                                    | Finished version            |


## Experiments Results
- Tensorboard plot shows episode rewards of at least 800 training episodes in LunarLander-v2 ：
![image](https://github.com/Shoawen0213/NCTU_IOC_Deep-Learning-and-Practice_Lab/blob/main/Lab6-DQN%20DDPG/img/tensorboard_01.JPG?raw=true)

- Tensorboard plot shows episode rewards of at least 800 training episodes in LunarLanderContinuous-v2 ：
![image](https://github.com/Shoawen0213/NCTU_IOC_Deep-Learning-and-Practice_Lab/blob/main/Lab6-DQN%20DDPG/img/tensorboard_02.JPG?raw=true)

- DNQ performance： 
![image](https://github.com/Shoawen0213/NCTU_IOC_Deep-Learning-and-Practice_Lab/blob/main/Lab6-DQN%20DDPG/img/DQN_230.JPG?raw=true)

- DDPG performance： 
![image](https://github.com/Shoawen0213/NCTU_IOC_Deep-Learning-and-Practice_Lab/blob/main/Lab6-DQN%20DDPG/img/DDPG_278.JPG?raw=true =100*100)

## Reference website
### DQN
|  Reference Name                                  | Link             |
| -------------------------------------------------|:-------------------------------------------------------------------------------------:|
|   [機器學習 ML NOTE] Reinforcement Learning 強化學習(DQN原理) |https://medium.com/%E9%9B%9E%E9%9B%9E%E8%88%87%E5%85%94%E5%85%94%E7%9A%84%E5%B7%A5%E7%A8%8B%E4%B8%96%E7%95%8C/%E6%A9%9F%E5%99%A8%E5%AD%B8%E7%BF%92-ml-note-reinforcement-learning-%E5%BC%B7%E5%8C%96%E5%AD%B8%E7%BF%92-dqn-%E5%AF%A6%E4%BD%9Catari-game-7f9185f833b0    |
|   强化学习(十)--DQN的理解                       |https://zhuanlan.zhihu.com/p/46852675                  |
|   Deep Q-learning (DQN) 原理說明：     | https://darren1231.pixnet.net/blog/post/349354942-deep-q-learning-%28dqn%29-%E5%8E%9F%E7%90%86%E8%AA%AA%E6%98%8E   |
|   Reinforcement Learning 進階篇：Deep Q-Learning | https://medium.com/pyladies-taiwan/reinforcement-learning-%E9%80%B2%E9%9A%8E%E7%AF%87-deep-q-learning-26b10935a745                         |


### DDPG
|  Reference Name                                  | Link             |
| -------------------------------------------------|:-------------------------------------------------------------------------------------:|
|   Deep Deterministic Policy Gradient (DDPG) |https://www.wpgdadatong.com/tw/blog/detail?BID=B2541    |
|   Deep Deterministic Policy Gradient(DDPG) — an off-policy Reinforcement Learning algorithm                       |https://medium.com/intro-to-artificial-intelligence/deep-deterministic-policy-gradient-ddpg-an-off-policy-reinforcement-learning-algorithm-38ca8698131b                 |
|   Deep Reinforcement Learning - 1. DDPG原理和算法     | https://blog.csdn.net/kenneth_yu/article/details/78478356   |
|   深度强化学习笔记——DDPG原理及实现（pytorch） |https://blog.csdn.net/qq_41871826/article/details/108540108                         |

## TensorBoardX 

- [TensorBoardX 介紹 (在 PyTorch 中使用 Tensorboard）](https://zhuanlan.zhihu.com/p/37626738)
- [TensorBoard 可視化](http://eat.woshinlper.com/5-4%2CTensorBoard%E5%8F%AF%E8%A7%86%E5%8C%96/)
- [HOW TO USE TENSORBOARD WITH PYTORCH](https://pytorch.org/tutorials/recipes/recipes/tensorboard_with_pytorch.html)


### Note
	Adam(params, lr=1e-3, betas=(0.9, 0.999), eps=1e-8, weight_decay=0, amsgrad=False)
