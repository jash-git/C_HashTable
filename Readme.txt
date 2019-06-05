C語言-雜湊表（Hash table，也叫哈希表）-沒有資料庫又要快速搜尋的資料結構演算法

雜湊表（Hash table，也叫哈希表），是根據鍵（Key）而直接查詢在內存存儲位置的資料結構。也就是說，它通過計算一個關於鍵值的函數，將所需查詢的數據映射到表中一個位置來查詢記錄，這加快了查找速度。這個映射函數稱做雜湊函數，存放記錄的數組稱做雜湊表。
一個通俗的例子是，為了查找電話簿中某人的號碼，可以創建一個按照人名首字母順序排列的表（即建立人名 {\displaystyle x} x到首字母 {\displaystyle F(x)} F(x)的一個函數關係），在首字母為W的表中查找「王」姓的電話號碼，顯然比直接查找就要快得多。這裡使用人名作為關鍵字，「取首字母」是這個例子中雜湊函數的函數法則 {\displaystyle F()} F()，存放首字母的表對應雜湊表。關鍵字和函數法則理論上可以任意確定。

資料來源:https://zh.wikipedia.org/wiki/%E5%93%88%E5%B8%8C%E8%A1%A8
https://blog.csdn.net/smstong/article/details/51145786
https://mp.weixin.qq.com/s?__biz=MzI2NjA3NTc4Ng==&mid=2652081098&idx=1&sn=fbf7d3021ed17bedc8eb62bc997bedc3&chksm=f174802fc6030939686549d596d27a1d90fec683afdcf0fb59934f5ee3131f3cba92e39d12e1&scene=0&xtrack=1&key=a6e428af7bc20b4ec1d88814f483cd8573327a2a636d2d8ee0db8f4b4881aaba847e7f578053a0136c95477a6428492b832966015bcff77cd33b5b339c7fc803dbcebc8f549e536facfa6f80c55e7822&ascene=1&uin=MjIwODk2NDgxNw%3D%3D&devicetype=Windows+10&version=62060833&lang=zh_TW&pass_ticket=n%2BryKuocjshj%2FviC%2FQR8cPIy2PXfuyFlk35RNGNb3ZSMIZrIoRZKr7lcuiC9DOlK

GITHUB: https://github.com/jash-git/C_HashTable