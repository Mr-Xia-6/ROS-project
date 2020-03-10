# ROS-project

##project1
----------

roslaunch learning_topic test.launch

该程序借助于turtlesim来实现两个结点之间的交互;

##project2
----------

roslaunch learning_topic Person.launch

该程序加入了秒级时间戳，频率为10HZ，用于实现姓名，年龄，性别等信息传输;

##project3
----------

roslaunch learning_topic image.launch

该程序频率为10HZ，用于实现两个结点之间的图像传递，结点a向结点b传递01.jpeg，结点b订阅后展示，并向结点a发布02.jpeg;
