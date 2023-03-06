# 基于SPICE的电路仿真设计
(仍处于设计阶段，任何方案任何时候都有可能被推翻重写)
# 序章代码结构
```
code_root/
└── data/
    └── coco/
        ├── train2017/
        ├── val2017/
        └── annotations/
        	├── instances_train2017.json
        	└── instances_val2017.json
```

# 一、代码格式
1.所有路径统一采用”/”不要用”\\” 

2.
# 二、器件电路图文件格式
器件图描述语言	意义
| LINE	线段
| CIRCLE	圆形
| PIN	连接点，引脚
| PINATTR	连接点属性
| RECT	矩形
| ELEMENTTYPE	器件类型
| ELEMENTATTR	器件属性
| AERO	画图区域大小


三、一些基本概念

1、主界面与子窗口的交互
Ⅰ.主窗口MainWindow类
 	①函数:
public：
1)AddSubWindows（已完成）
        增加一个子窗口
2)AddDevice(2023.2.28开始编写)
函数原型：void MainWindow::AddDevice(GuiBase device)
函数功能：传入一个GuiBase类的device，并在选定的SubWindow中画出图形，图形首次出现鼠标光标所在位置并跟随鼠标光标移动，直到鼠标单击左键后确定位置，图形不在跟随光标移动。
private：
3)connections（随进度更新）
包含所有connect函数
4)delAllThread（随进度更新）
包含程序退出后所有线程的删除行为
5)
2、绘图基类GuiBase
这个类主要是读取器件文件信息。
Ⅰ.重要参数：
①.LineList 保存所有图形线段位置信息
②.RectList 保存所有图形矩形位置信息
③.CircleList 保存所有图形圆形位置信息
④.TextList 保存所有图形文本位置信息
⑤.PinList 保存所有图形Pin节点信息
⑥.nType 器件类型
⑦.n_isSelected 该图形是否被选中
⑧.CellList 如果加载的图形文件是电路图则保存所有CEll类型器件在此。


Ⅱ.重要方法：
①.AnalysisText 分析读取的数据文件（2023.2.28正在编写）
