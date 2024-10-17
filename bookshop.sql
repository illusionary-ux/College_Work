/*
Navicat MySQL Data Transfer

Source Server         : localhost
Source Server Version : 80026
Source Host           : localhost:3306
Source Database       : bookshop

Target Server Type    : MYSQL
Target Server Version : 80026
File Encoding         : 65001

Date: 2021-09-27 13:58:19
*/
CREATE DATABASE bookdb;
USE bookdb;

SET FOREIGN_KEY_CHECKS=0;

-- ----------------------------
-- Table structure for books
-- ----------------------------
DROP TABLE IF EXISTS `books`;
CREATE TABLE `books` (
  `cBookID` char(10) NOT NULL,
  `vBookName` varchar(100) NOT NULL,
  `vPressHouse` varchar(100) DEFAULT NULL,
  `vAuthor` varchar(50) DEFAULT NULL,
  `vISBN` varchar(50) DEFAULT NULL,
  `mPrice` decimal(10,1) DEFAULT NULL,
  `mSalePrice` decimal(10,1) DEFAULT NULL,
  `dPublicationDate` date DEFAULT NULL,
  `siQuantity` smallint DEFAULT '1',
  `vIntroduction` varchar(1000) DEFAULT NULL,
  `vPictureUrl` varchar(1000) DEFAULT NULL,
  `cTypeID` char(5) NOT NULL,
  `cSaleStatus` char(1) CHARACTER SET utf8mb4 COLLATE utf8mb4_0900_ai_ci DEFAULT '1',
  PRIMARY KEY (`cBookID`),
  KEY `RefBooktype2` (`cTypeID`),
  CONSTRAINT `RefBooktype2` FOREIGN KEY (`cTypeID`) REFERENCES `booktype` (`cTypeID`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_0900_ai_ci;

-- ----------------------------
-- Records of books
-- ----------------------------
INSERT INTO `books` VALUES ('2109010001', '大数据分析：Python爬虫、数据清洗和数据可视化', '清华大学出版社', '黄源', '9787302530541', '59.8', '28.2', '2020-01-01', '1000', '在全书中介绍了大数据概述、爬虫与大数据相关技术、Scrapy 爬虫、数据库连接与查询、数据可视化、数据存储与清洗概述 、数据格式与编码技术介绍、数据抽取与采集、pandas 数据清洗。每个阶段都重点强化实训，实现了理论与实践的结合。教材中应用案例来展开知识点的讲解，对重要的、核心的知识点加大练习的比例，以达到熟练运用的目的。', '/pic/2109010001.jpg', '10001', '1');
INSERT INTO `books` VALUES ('2109010002', 'Python数据分析从入门到精通', '清华大学出版社', '明日科技', '9787302566182', '89.8', '44.9', '2021-06-01', '200', '《Python数据分析从入门到精通》全面介绍了使用Python进行数据分析所必需的各项知识。全书共分为14章，包括了解数据分析、搭建Python数据分析环境、Pandas统计分析、Matplotlib可视化数据分析图表、Seaborn可视化数据分析图表、第三方可视化数据分析图表Pyecharts、图解数组计算模块NumPy、数据统计分析案例、机器学习库Scikit-Learn、注册用户分析（MySQL版）、电商销售数据分析与预测、二手房房价分析与预测，以及客户价值分析。', '/pic/2109010002.jpg', '10001', '1');
INSERT INTO `books` VALUES ('2109010003', '新编数据结构习题与解析', '清华大学出版社', '李春葆、李筱驰', '9787302524267', '99.0', '49.5', '2019-12-01', '10', '本书内容包括概论、线性表、栈和队列、串、数组和稀疏矩阵、树和二叉树、图、查找和排序，附录中给出书中部分算法清单、全国计算机专业数据结构联考大纲、部分练习题的参考答案', '/pic/2109010003.jpg', '10001', '1');
INSERT INTO `books` VALUES ('2109010004', 'Java EE轻量级框架应用实战', '电子工业出版社', '石毅', '9787121391088', '75.0', '44.0', '2020-07-01', '20', '本书详细讲解Java EE中使用*多的Spring、Spring MVC和MyBatis（简称SSM）三大框架的基本知识和应用。随着互联网的迅猛发展，SSM框架被越来越多地应用于企业级开发之中，其发展势头已经超过大部分Java Web框架，稳居榜首。本书以实用性为原则，采用课堂实录的形式，以任务为驱动，理论与实践相结合，重点讲解SSM框架在企业开发中常用的核心技术，分别讲解MyBatis、Spring和Spring MVC三大框架的精髓内容。在内容上逐层深入，而非一次铺开。\"百货中心供应链管理系统”案例贯穿始终，利用各章所学技能对其功能进行实现或优化，让读者在学习技能的同时获取项目开发经验，加深读者对技术的理解和掌握程度。 本书提供完善的免费配套资源和支持服务，包括电子教案（PPT）、案例素材、源代码、各章上机练习与课后作业参考答案、教学设计、教学大纲等，希望带给读者全方位的学习体验，可登录电子工业出版社华信资源网（www.hxedu.com.cn）下载使用。 本书既可作为高等院校本、专科计算机相关专业的程序设计教材，也可作为Java技术的培训图书，适合广大编程爱好者阅读与使用。', '/pic/2109010004.jpg', '10001', '1');
INSERT INTO `books` VALUES ('2109010005', 'Spring Boot+Vue开发实战', '电子工业出版社', '朱建昕', '9787121413551', '186.0', '81.0', '2021-09-01', '10', '本书采用“项目贯穿式”的形式编写，从一个实战项目入手，将知识点融入其中，循序渐进地全面介绍Spring Boot和Vue的知识点，并分析源码、剖析原理，使读者能够快速地将知识转换成技能，顺利地进行项目开发实战。 软件开发技术日新月异、不胜枚举，常常让人置身其中，不知如何取舍。本书会对同类技术进行充分地对比，并厘清前后端技术三十年的发展脉络，使读者在工作中具备根据项目的规模、应用场景，做好恰当的架构设计和技术选型的能力。 本书适合Java软件开发从业人员对Java和Web前端不错知识的学习，以提升技术水平；还适合作为大学计算机、软件开发专业学生的参考用书。', '/pic/2109010005.jpg', '10001', '1');
INSERT INTO `books` VALUES ('2109010006', '计算机网络（第7版）', '电子工业出版社', '谢希仁', '9787121302954', '49.0', '47.0', '2017-01-01', '2000', '本书自1989年首次出版以来，曾于1994年、1999年、2003年、2008年和2013年分别出了修订版。在2006年本书通过了教育部的评审，被纳入普通高等教育“十一五”*规划教材；2008年出版的第5版获得了教育部2009年精品教材称号。2013年出版的第6版是“十二五”普通高等教育本科*规划教材。现在的第7版又在第6版的基础上进行了一些修订。 全书分为9章，比较全面系统地介绍了计算机网络的发展和原理体系结构、物理层、数据链路层（包括局域网）、网络层、运输层、应用层、网络安全、互联网上的音频/视频服务，以及无线网络和移动网络等内容。各章均附有习题（附录A给出了部分习题的答案和提示）。全书课件（PowerPoint文件）放在电子工业出版社悦学多媒体课程资源平台上(http://yx.51zhy.cn/mtrcsRes/phei_cnetwork.jsp)，供读者下载参考。 本书的特点是概念准确、论述严谨、内容新颖、图文并茂，突出基本原理和基本概念的阐述，同时力图反映计算机网络的一些*发展。本书可供电气信息类和计算机类专业的大学本科生和研究生使用，对从事计算机网络工作的工程技术人员也有参考价值。', '/pic/2109010006.jpg', '10001', '1');
INSERT INTO `books` VALUES ('2109010007', '计算机操作系统第四版', '西安电子科技大学出版社', '汤小丹、梁红兵、哲凤屏、汤子瀛 ', '9787560633503', '53.0', '52.0', '2021-09-01', '1000', '本教材对传统操作系统（OS）和现代操作系统均做了较为全面的介绍。', '/pic/2109010007.jpg', '10001', '1');
INSERT INTO `books` VALUES ('2109010008', '数据结构（C语言版）', '清华大学出版社', '严蔚敏', '9787302147510', '39.0', '39.0', '2007-03-01', '500', '《数据结构》（C语言版）是为“数据结构”课程编写的教材，也可作为学习数据结构及其算法的C程序设计的参数教材。\r\n本书的前半部分从抽象数据类型的角度讨论各种基本类型的数据结构及其应用；后半部分主要讨论查找和排序的各种实现方法及其综合分析比较。其内容和章节编排1992年4月出版的《数据结构》（第二版）基本一致，但在本书中更突出了抽象数据类型的概念。全书采用类C语言作为数据结构和算法的描述语言。\r\n　　本书概念表述严谨，逻辑推理严密，语言精炼，用词达意，并有配套出版的《数据结构题集》（C语言版），便于教学，又便于自学。\r\n　　本书后附有光盘。光盘内容可在DOS环境下运行的以类C语言描述的“数据结构算法动态模拟辅助教学软件，以及在Windows环境下运行的以类PASCAL或类C两种语言描述的“数据结构算法动态模拟辅助教学软件”。\r\n　　本书可作为计算机类专业或信息类相关专业的本科或专科教材，也可供从事计算机工程与应用工作的科技工作者参考。', '/pic/2109010008.jpg', '10001', '0');
INSERT INTO `books` VALUES ('2109020001', '21世纪资本论', '中信出版社', '皮凯蒂', '9787508647258', '98.0', '64.0', '2014-07-01', '5', '法国经济学家、巴黎经济学院教授托马斯·皮凯蒂对过去300年来欧美国家的财富收入做了详尽探究，通过大量的历史数据分析，旨在证明近几十年来，不平等现象已经扩大，很快会变得更加严重。', null, '10002', '1');
INSERT INTO `books` VALUES ('2109020002', '大国治理：发展与平衡的空间政治经济学', '上海人民出版社', '陆铭、陈钊 ', '9787208169609', '75.0', '37.0', '2021-06-01', '20', '大国治理，核心是城乡间和区域间关系，本质是资源的空间配置，在这个意义上，大国治理的终极目标是实现城乡间和区域间发展与平衡的共赢，这天然是一个空间政治经济学问题。在中国这样一个转型和发展中的大国，必须要将结合中国体制的政治经济学分析融入城乡和区域发展的研究中去，而城乡和区域的发展又是深刻理解中国经济的必需。《大国治理：发展与平衡的空间政治经济学》总结了陆铭、陈钊团队十余年来围绕着中国经济而做的空间政治经济学研究的为重要的成果。\r\n\r\n本书分为三个部分。个部分是一组综述性的文章，对于中国区域和城市发展走过的道路以及存在的理论问题进行了全面的评论和总结。第二部分是一组理论性文章，其核心是在空间政治经济学视角下探讨发展与平衡之间的关系，集中地体现了“在集聚中走向平衡”的观点，以及转移支付（利益分享机制）促进市场整合与经济增长。第三部分是一组经验研究，利用微观数据对于空间政治经济学为重要的几个问题进行了验证，而这几篇论文本身可以串起一个比较完整的有关中国区域经济发展的故事', '/pic/2109020002.jpg', '10002', '1');
INSERT INTO `books` VALUES ('2109020003', '政治经济学(第六版)', '高等教育出版社', '逄锦聚 洪银兴 林岗 刘伟', '9787040502527', '49.0', '48.0', '2018-08-01', '10', null, null, '10002', '1');
INSERT INTO `books` VALUES ('2109020004', '合伙人制度：以控制权为核心的顶层股权设计', '清华大学出版社', '郑指梁', '9787302541738', '98.0', '49.0', '2020-01-01', '100', '《合伙人制度：以控制权为核心的顶层股权设计》重新定义了合伙人的概念，即共识、共创、共担、共享的奋斗者和创业者。沿着这条主线，通过虚拟合伙及事业合伙的设计，让企业家们学会做机制，让员工当奋斗者；通过股东合伙的设计，让企业家们学会做大股东，让员工当创业者；通过生态链合伙的设计，让企业家们学做投资人，让员工当大股东！《合伙人制度：以控制权为核心的顶层股权设计》系统地总结了合伙落地的五维模型，即上接顶层设计、下接机制设计、横跨财税法律、打造合伙精神、对接资本规划，旨在解决合伙落地难的问题。\r\n      《合伙人制度：以控制权为核心的顶层股权设计》分享了大量的来自一线的咨询案例，提供了大量的拿来即用的文档。《合伙人制度：以控制权为核心的顶层股权设计》以合伙动态设计为纲，呼应了合伙人制度的定义，即关于合伙人的活的游戏规则。', '/pic/2109020004.jpg', '10002', '1');
INSERT INTO `books` VALUES ('2109020005', '管理学', '高等教育出版社', '周三多', '9787040493856', '45.0', '19.0', '2018-03-01', '100', '本书是教育部“面向21世纪教学内容和课程体系改革计划”以及高等教育出版社“高等教育百门精品课程教材建设计划”的研究成果，是“面向21世纪课程教材”和高等学校工商管理学类各专业核心课程教材。', '/pic/2109020005.jpg', '10002', '1');
INSERT INTO `books` VALUES ('2109080001', '大学英语长篇阅读与翻译', '高等教育出版社', '宋银秋', '9787040425338', '28.0', '28.0', '2015-07-01', '90', '《大学英语长篇阅读与翻译》系列教材共有4册，供非英语专业的本科生使用。《大学英语长篇阅读与翻译3》由两部分组成：*部分为“阅读理解及翻译技巧简介”；第二部分为“阅读理解及翻译实践”，内含10个不同主题的单元。本书将理论知识与练习实践相结合，是一套具有实时性、信息性及趣味性的教材，体现了新的教学理念与教学模式，旨在帮助学生进一步扩大词汇量，掌握有效、科学的阅读方法，增强阅读理解能力，提高阅读速度；通过翻译实践了解汉英两种语言的差异并掌握翻译技巧，能够更准确地将汉语翻译成英语，在传递信息的同时传承文化，进一步提高对两种语言的驾驭能力和对两种文化的理解能力。', '/pic/2109080001.jpg', '10003', '1');
INSERT INTO `books` VALUES ('2109080002', '英语泛读教程', '高等教育出版社', '刘乃银 虞苏美 黄源深', '9787040317503', '38.0', '33.0', '2021-06-01', '20', null, '/pic/2109080002.jpg', '10003', '1');
INSERT INTO `books` VALUES ('2109080003', '全新版大学英语视听说教程1', '上海外语教育出版社', '王敏华', '9787544656252', '69.0', '60.0', '2021-08-01', '10', null, '/pic/2109080003.jpg', '10003', '1');
INSERT INTO `books` VALUES ('2109080004', '大学英语阅读提升教程', '人民邮电出版社', '孙晓云 窦莹', '9787115566638', '56.0', '53.0', '2021-08-01', '10', '本阅读教材适用于大学英语的学生进行阅读扩展练习，通过主题阅读，学生可以通过本书掌握常用的阅读技巧，提高英语的阅读能力。\r\n\r\n本书包括九个单元，每个单元包括了四篇阅读材料，每篇阅读材料的长度大约在一千字左右。每一章节后面都设有相关的练习题，练习的题型既有四六级的阅读题型也有雅思的相关阅读题型，满足大学生不同的阅读需求。', '/pic/2109080004.jpg', '10003', '1');
INSERT INTO `books` VALUES ('2109080005', '机器学习基础', '人民邮电出版社', '肖睿', '9787115562814', '59.8', '46.6', '2021-07-01', '100', '近年来人工智能技术蓬勃发展，人工智能正在改变我们的生活。为了让读者在不需要掌握太多数学 和计算机科学知识的情况下，能够快速上手，使用 Python 语言实现常用的机器学习算法，并解决一些实际的问题，我们策划并出版本书。 本书共 14 章，内容涵盖基本的机器学习概念和环境搭建，目前各个领域中的热门算法，以及数据预处理、模型评估和文本数据分析等。希望本书可以让读者轻松入门，在动手实践的过程中找到乐趣。 本书可以作为各大院校人工智能相关专业的教材，也可以作为培训机构的教材，还适合人工智能技术爱好者自学使用。', '/pic/2109080005.jpg', '10001', '1');
INSERT INTO `books` VALUES ('2109080006', '数据库原理与技术——基于华为GaussDB', '人民邮电出版社', '华为技术有限公司', '9787115560162', '69.8', '54.4', '2021-06-01', '40', null, null, '10001', '1');
INSERT INTO `books` VALUES ('2109080007', '纪伯伦散文诗集', '人民邮电出版社', '纪伯伦', '9787115334121', '22.0', '22.0', '2021-03-01', '20', null, null, '10004', '1');
INSERT INTO `books` VALUES ('2109080008', '红星照耀中国', '人民文学出版社', '埃德加·斯诺 ', '9787020116133', '43.0', '20.0', '2017-06-01', '100', '《红星照耀中国》（曾译《西行漫记》）自1937年出版以来，畅销至今。董乐山译本是今天了解中国工农红军的经典读本。本书真实记录了斯诺自1936年6月至10月在中国西北革命根据地进行实地采访的所见所闻，向全世界报道了红色根据地的情况。           \r\n\r\n此次新版配有十余幅珍贵历史照片，是由人民文学出版社推出的经典版本。\r\n\r\n本书为教育部八年级（上）语文教科书名著导读指定书目。', '/pic/2109080008.jpg', '10004', '1');
INSERT INTO `books` VALUES ('2109080009', '莎士比亚十四行诗', '人民文学出版社', '莎士比亚', '9787020153848', '48.0', '24.0', '2020-01-01', '4', '就是用这体裁莎士比亚赐给我们一个温婉的音乐和鲜明的意象的宝库，在这里面他用主观的方式完成他在戏剧里用客观的方式所完成的，把镜子举给自然和人看，让德性和热情体认它们自己的面目：让时光照见他自己的形相和印痕；时光，他所带来的妩媚的荣光和衰败的惆怅……对着这样的诗，译者除了要频频辍笔兴叹外，还有甚么可说呢？', '/pic/2109080009.jpg', '10004', '1');
INSERT INTO `books` VALUES ('2109080010', '铁凝散文集', '高等教育出版社', '铁凝', '9787040445152', '29.6', '14.8', '2016-06-01', '8', null, null, '10004', '0');
INSERT INTO `books` VALUES ('2109080011', '十万个为什么第六版（普及版）', '少年儿童出版社', '韩启德', '9787558909498', '240.0', '120.0', '2021-03-01', '10', '鼻孔从哪里来？一张纸*多可以折几次？为什么同班同学中常有两人生日相同？时光能倒流吗？为什么毽子和羽毛球都要插上羽毛？为什么雷雨后空气格外清新？为什么暖宝宝会自己发热？一天到底有多长？人类能阻止小行星撞击地球吗？如何给珠穆朗玛峰测“身高”？地球为什么会自传？为什么海洋鱼类变傻了？为什么流行性感冒会牵连到太阳核聚变？除了男女，还有第三性别吗？为什么高兴时会又蹦又跳？故宫到底有多少栋房子？网络游戏是怎样把人吸引在网上的？机器人将来会取代人类掌控世界吗？\r\n《十万个为什么（普及版）》带你用科学的方法，以科学的思维，去探究各种各样的“为什么”，学习像科学家那样思考，像工程师那样解决问题……', '/pic/2109080011.jpg', '10005', '1');
INSERT INTO `books` VALUES ('2109080012', '草房子', '天天出版社有限责任公司', '曹文轩', '9787501614592', '49.0', '19.0', '2019-03-01', '20', '男孩桑桑在油麻地小学度过了六年刻骨铭心、终身难忘的校园生活，亲眼目睹或直接演绎了一个个看似寻常但又催人泪下、震撼人心的故事……这是一部富有品位、格调高雅的儿童长篇小说，叙述风格浅易而又深刻、谐趣而又庄重，自始至终洋溢着一种淳朴的美感，荡漾着一种悲悯的情怀。', '/pic/2109080012.jpg', '10005', '1');

-- ----------------------------
-- Table structure for booktype
-- ----------------------------
DROP TABLE IF EXISTS `booktype`;
CREATE TABLE `booktype` (
  `cTypeID` char(5) NOT NULL,
  `vTypeName` varchar(100) NOT NULL,
  PRIMARY KEY (`cTypeID`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_0900_ai_ci;

-- ----------------------------
-- Records of booktype
-- ----------------------------
INSERT INTO `booktype` VALUES ('10001', '科技');
INSERT INTO `booktype` VALUES ('10002', '经管');
INSERT INTO `booktype` VALUES ('10003', '外语');
INSERT INTO `booktype` VALUES ('10004', '文学');
INSERT INTO `booktype` VALUES ('10005', '童书');

-- ----------------------------
-- Table structure for customer
-- ----------------------------
DROP TABLE IF EXISTS `customer`;
CREATE TABLE `customer` (
  `cCustomerID` char(36) NOT NULL,
  `vNickName` varchar(50) DEFAULT NULL,
  `vPhone` varchar(20) NOT NULL,
  `vEmail` varchar(100) DEFAULT NULL,
  `vPassword` varchar(200) NOT NULL,
  `vCustomerName` varchar(100) NOT NULL,
  `vSex` varchar(10) DEFAULT NULL,
  `dBirthDay` date DEFAULT NULL,
  `vProvince` varchar(100) NOT NULL,
  `vCity` varchar(100) NOT NULL,
  `score` int DEFAULT NULL,
  `vAddress` varchar(200) NOT NULL,
  PRIMARY KEY (`cCustomerID`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_0900_ai_ci;

-- ----------------------------
-- Records of customer
-- ----------------------------
INSERT INTO `customer` VALUES ('b665a29c-136e-11ec-b124-5cc5d484c924', '小张', '13555112342', 'zhangsan@163.com', 'angels    ', '张三', '男', '1977-10-09', '四川', '成都', '100', '四川省成都市人民南路1号');
INSERT INTO `customer` VALUES ('b665f0be-136e-11ec-b124-5cc5d484c924', '李子', '13612357894', 'lisi@163.com', 'guide     ', '李四', '女', '1979-04-05', '四川', '成都', '200', '四川省成都市人民南路35号');
INSERT INTO `customer` VALUES ('b66617ce-136e-11ec-b124-5cc5d484c924', '明矾', '13366523412', 'wming@cuit.edu.cn', 'youbet    ', '王明', '男', '1986-12-04', '北京', '北京', '189', '北京市海淀区人民大学南路1号');
INSERT INTO `customer` VALUES ('b66617cf-136e-11ec-b124-5cc5d484c924', '桃子', '18615584775', 'zxh@shou.com', 'credit    ', '赵小红', '女', '1990-05-16', '北京', '北京', '96', '北京市海淀区人民大学南路50号');
INSERT INTO `customer` VALUES ('b66617d0-136e-11ec-b124-5cc5d484c924', '明镜', '13944685569', 'lmming@163.com', 'prepare   ', '李明明', '男', '1993-07-24', '陕西', '西安', '75', '陕西省西安市咸宁西路21号');
INSERT INTO `customer` VALUES ('b66617d1-136e-11ec-b124-5cc5d484c924', '梅子', '13766889979', '89665489@qq.com', 'Char      ', '张晓梅', '女', '1993-08-06', '四川', '成都', '305', '四川省成都市东大街1号');
INSERT INTO `customer` VALUES ('b66617ee-136e-11ec-b124-5cc5d484c924', '森林', '13880125568', 'zhangli@163.com', 'zhangling', '张林', '男', '2000-05-13', '湖南', '长沙', '145', '长沙市岳麓区桃子湖路18号');

-- ----------------------------
-- Table structure for evaluation
-- ----------------------------
DROP TABLE IF EXISTS `evaluation`;
CREATE TABLE `evaluation` (
  `cEvaluationID` char(36) NOT NULL,
  `iProductPoint` int DEFAULT NULL,
  `comment` varchar(2000) DEFAULT NULL,
  `vPictureUrl` varchar(1000) DEFAULT NULL,
  `iPackPoint` int DEFAULT NULL,
  `iLogisticsPoint` int DEFAULT NULL,
  `iCourierPoint` int DEFAULT NULL,
  `dEvaluationDate` datetime DEFAULT NULL,
  `cOrderNo` char(11) NOT NULL,
  `cBookID` char(10) NOT NULL,
  PRIMARY KEY (`cEvaluationID`),
  KEY `RefOrderDetail50` (`cOrderNo`,`cBookID`),
  CONSTRAINT `RefOrderDetail50` FOREIGN KEY (`cOrderNo`, `cBookID`) REFERENCES `orderdetail` (`cOrderNo`, `cBookID`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_0900_ai_ci;

-- ----------------------------
-- Records of evaluation
-- ----------------------------
INSERT INTO `evaluation` VALUES ('013cfaa4-1e8a-11ec-b01f-5cc5d484c924', '5', '很好', null, '5', '5', '5', '2020-12-10 13:29:34', '20120600001', '2109010003');
INSERT INTO `evaluation` VALUES ('03a2d9ab-1e8b-11ec-b01f-5cc5d484c924', '3', '一般', null, '4', '3', '3', '2021-09-17 09:51:16', '21091300001', '2109010006');
INSERT INTO `evaluation` VALUES ('054697f4-1e8d-11ec-b01f-5cc5d484c924', '5', '很好', null, '5', '5', '5', '2021-09-20 09:18:24', '21091300008', '2109080002');
INSERT INTO `evaluation` VALUES ('1090c606-1e8d-11ec-b01f-5cc5d484c924', '4', '好', null, '5', '4', '5', '2021-09-20 13:48:24', '21091300008', '2109080002');
INSERT INTO `evaluation` VALUES ('132cb05e-1e8d-11ec-b01f-5cc5d484c924', '4', '好', null, '5', '4', '5', '2021-09-20 16:48:24', '21091300008', '2109080002');
INSERT INTO `evaluation` VALUES ('15ba7016-1e8c-11ec-b01f-5cc5d484c924', '3', '一般', null, '3', '3', '3', '2021-09-15 19:22:23', '21091300007', '2109020005');
INSERT INTO `evaluation` VALUES ('18b2b2fe-1e8b-11ec-b01f-5cc5d484c924', '3', '一般', null, '4', '3', '3', '2021-09-17 20:16:12', '21091300002', '2109010007');
INSERT INTO `evaluation` VALUES ('1ce1030a-1e8b-11ec-b01f-5cc5d484c924', '3', '一般', null, '4', '3', '3', '2021-09-17 21:16:12', '21091300002', '2109010007');
INSERT INTO `evaluation` VALUES ('218086b8-1e8c-11ec-b01f-5cc5d484c924', '4', '好', null, '4', '4', '5', '2021-09-16 09:22:23', '21091300007', '2109020005');
INSERT INTO `evaluation` VALUES ('23aff209-1e8c-11ec-b01f-5cc5d484c924', '4', '好', null, '4', '4', '5', '2021-09-16 10:22:23', '21091300007', '2109020005');
INSERT INTO `evaluation` VALUES ('24279b30-1e8b-11ec-b01f-5cc5d484c924', '3', '一般', null, '4', '3', '3', '2021-09-18 14:16:12', '21091300002', '2109010007');
INSERT INTO `evaluation` VALUES ('2caec7f1-1e8c-11ec-b01f-5cc5d484c924', '5', '很好', null, '5', '5', '5', '2021-09-16 11:22:23', '21091300007', '2109020005');
INSERT INTO `evaluation` VALUES ('2fb5aaaa-1e8c-11ec-b01f-5cc5d484c924', '5', '很好', null, '5', '5', '5', '2021-09-16 12:22:23', '21091300007', '2109020005');
INSERT INTO `evaluation` VALUES ('3267bbcb-1e8b-11ec-b01f-5cc5d484c924', '5', '好', null, '4', '5', '5', '2021-09-18 14:16:12', '21091300002', '2109010007');
INSERT INTO `evaluation` VALUES ('3a9a3139-1e8d-11ec-b01f-5cc5d484c924', '4', '好', null, '5', '4', '5', '2021-09-19 09:18:24', '21091300008', '2109080003');
INSERT INTO `evaluation` VALUES ('3b305ea1-1e6b-11ec-8e67-5cc5d484c924', '4', '很好', null, '5', '4', '5', '2020-06-07 14:56:34', '20060500001', '2109010001');
INSERT INTO `evaluation` VALUES ('3c407a23-1e8b-11ec-b01f-5cc5d484c924', '5', '很好', null, '5', '5', '5', '2021-09-18 17:16:12', '21091300002', '2109010007');
INSERT INTO `evaluation` VALUES ('4308ec8c-1e89-11ec-b01f-5cc5d484c924', '5', '很好', null, '5', '5', '5', '2020-12-07 08:21:35', '20120600001', '2109010001');
INSERT INTO `evaluation` VALUES ('44f32458-1e8c-11ec-b01f-5cc5d484c924', '5', '很好', null, '5', '5', '5', '2021-09-19 09:18:24', '21091300008', '2109080001');
INSERT INTO `evaluation` VALUES ('45861e15-1e8b-11ec-b01f-5cc5d484c924', '5', '很好', null, '5', '5', '5', '2021-09-19 07:26:12', '21091300002', '2109010007');
INSERT INTO `evaluation` VALUES ('496dace4-1e89-11ec-b01f-5cc5d484c924', '5', '很好', null, '5', '5', '5', '2020-12-08 09:21:35', '20120600001', '2109010001');
INSERT INTO `evaluation` VALUES ('4992d57d-1e8c-11ec-b01f-5cc5d484c924', '5', '很好', null, '5', '5', '5', '2021-09-19 12:18:24', '21091300008', '2109080001');
INSERT INTO `evaluation` VALUES ('4d9c5e3f-1e6b-11ec-8e67-5cc5d484c924', '5', '好', null, '5', '4', '5', '2020-06-08 14:56:34', '20060500001', '2109010001');
INSERT INTO `evaluation` VALUES ('50731c65-1e89-11ec-b01f-5cc5d484c924', '4', '好', null, '4', '5', '5', '2020-12-08 09:22:35', '20120600001', '2109010001');
INSERT INTO `evaluation` VALUES ('52f06de8-1e6b-11ec-8e67-5cc5d484c924', '5', '好', null, '5', '4', '5', '2020-06-08 15:56:34', '20060500001', '2109010001');
INSERT INTO `evaluation` VALUES ('55a915e8-1e8a-11ec-b01f-5cc5d484c924', '5', '很好', null, '5', '5', '5', '2021-04-09 08:35:50', '21040500001', '2109010004');
INSERT INTO `evaluation` VALUES ('563c4a93-1e8c-11ec-b01f-5cc5d484c924', '4', '好', null, '5', '4', '5', '2021-09-20 09:28:24', '21091300008', '2109080001');
INSERT INTO `evaluation` VALUES ('5859c10d-1e8a-11ec-b01f-5cc5d484c924', '5', '很好', null, '5', '5', '5', '2021-04-09 09:35:50', '21040500001', '2109010004');
INSERT INTO `evaluation` VALUES ('5de58357-1e8a-11ec-b01f-5cc5d484c924', '5', '很好', null, '5', '5', '5', '2021-04-09 12:45:50', '21040500001', '2109010004');
INSERT INTO `evaluation` VALUES ('6055c2c5-1e8b-11ec-b01f-5cc5d484c924', '5', '很好', null, '5', '5', '5', '2021-09-18 08:06:12', '21091300002', '2109010008');
INSERT INTO `evaluation` VALUES ('6147fb4d-1e89-11ec-b01f-5cc5d484c924', '4', '好', null, '4', '4', '5', '2020-12-08 13:48:35', '20120600001', '2109010001');
INSERT INTO `evaluation` VALUES ('62737a94-1e8b-11ec-b01f-5cc5d484c924', '5', '很好', null, '5', '5', '5', '2021-09-18 09:06:12', '21091300002', '2109010008');
INSERT INTO `evaluation` VALUES ('6495a5a9-1e8a-11ec-b01f-5cc5d484c924', '5', '很好', null, '5', '5', '5', '2021-04-10 13:05:50', '21040500001', '2109010004');
INSERT INTO `evaluation` VALUES ('675b52f1-1e8c-11ec-b01f-5cc5d484c924', '5', '很好', null, '5', '5', '5', '2021-09-20 12:28:54', '21091300008', '2109080001');
INSERT INTO `evaluation` VALUES ('693437dd-1e6b-11ec-8e67-5cc5d484c924', '5', '非常好', null, '5', '4', '5', '2020-06-09 17:50:34', '20060500001', '2109010001');
INSERT INTO `evaluation` VALUES ('6a585741-1e8a-11ec-b01f-5cc5d484c924', '4', '好', null, '4', '4', '5', '2021-04-10 13:05:50', '21040500001', '2109010004');
INSERT INTO `evaluation` VALUES ('6c8af087-1e8b-11ec-b01f-5cc5d484c924', '4', '好', null, '5', '5', '5', '2021-09-18 13:09:12', '21091300002', '2109010008');
INSERT INTO `evaluation` VALUES ('76a188e4-1e89-11ec-b01f-5cc5d484c924', '3', '一般', null, '3', '4', '3', '2020-12-09 13:49:35', '20120600001', '2109010001');
INSERT INTO `evaluation` VALUES ('7736e6de-1e8a-11ec-b01f-5cc5d484c924', '1', '差', null, '4', '2', '5', '2021-04-10 17:05:50', '21040500001', '2109010004');
INSERT INTO `evaluation` VALUES ('7ba45d51-1e8b-11ec-b01f-5cc5d484c924', '1', '差', null, '2', '2', '2', '2021-09-18 14:09:12', '21091300002', '2109010008');
INSERT INTO `evaluation` VALUES ('7badcc3e-1e6b-11ec-8e67-5cc5d484c924', '3', '一般', null, '5', '4', '5', '2020-06-09 14:50:24', '20060500001', '2109010001');
INSERT INTO `evaluation` VALUES ('9140c7a9-1e8a-11ec-b01f-5cc5d484c924', '1', '差', null, '4', '2', '5', '2021-09-16 12:58:56', '21091300001', '2109010005');
INSERT INTO `evaluation` VALUES ('9cf432e9-1e6b-11ec-8e67-5cc5d484c924', '3', '一般', null, '5', '4', '5', '2020-06-09 14:50:24', '20060500001', '2109010002');
INSERT INTO `evaluation` VALUES ('a65bc4b5-1e8a-11ec-b01f-5cc5d484c924', '4', '好', null, '5', '5', '5', '2021-09-16 17:58:56', '21091300001', '2109010005');
INSERT INTO `evaluation` VALUES ('a8a0b427-1e8a-11ec-b01f-5cc5d484c924', '4', '好', null, '5', '5', '5', '2021-09-16 17:58:56', '21091300001', '2109010005');
INSERT INTO `evaluation` VALUES ('a8ff504a-1e8a-11ec-b01f-5cc5d484c924', '4', '好', null, '5', '5', '5', '2021-09-16 17:58:56', '21091300001', '2109010005');
INSERT INTO `evaluation` VALUES ('ab964b13-1e6b-11ec-8e67-5cc5d484c924', '5', '非常好', null, '5', '4', '5', '2020-06-10 09:50:24', '20060500001', '2109010002');
INSERT INTO `evaluation` VALUES ('b57d1360-1e6b-11ec-8e67-5cc5d484c924', '5', '非常好', null, '5', '5', '3', '2020-06-10 09:55:24', '20060500001', '2109010002');
INSERT INTO `evaluation` VALUES ('bf02a771-1e6b-11ec-8e67-5cc5d484c924', '5', '非常好', null, '5', '5', '5', '2020-06-11 09:25:14', '20060500001', '2109010002');
INSERT INTO `evaluation` VALUES ('c00beb70-1e8a-11ec-b01f-5cc5d484c924', '5', '很好', null, '5', '5', '5', '2021-09-17 11:08:06', '21091300001', '2109010005');
INSERT INTO `evaluation` VALUES ('c45a4714-1e8a-11ec-b01f-5cc5d484c924', '5', '很好', null, '5', '5', '5', '2021-09-17 11:09:26', '21091300001', '2109010005');
INSERT INTO `evaluation` VALUES ('cad0383f-1e6b-11ec-8e67-5cc5d484c924', '5', '非常好', null, '5', '5', '5', '2020-06-11 19:28:15', '20060500001', '2109010002');
INSERT INTO `evaluation` VALUES ('d4e948bc-1e89-11ec-b01f-5cc5d484c924', '3', '一般', null, '3', '4', '3', '2020-12-09 20:35:04', '20120600001', '2109010003');
INSERT INTO `evaluation` VALUES ('da3a8558-1e6b-11ec-8e67-5cc5d484c924', '2', '差', null, '2', '2', '2', '2020-06-11 16:18:05', '20060500001', '2109010002');
INSERT INTO `evaluation` VALUES ('e1b693a2-1e8a-11ec-b01f-5cc5d484c924', '5', '很好', null, '5', '5', '5', '2021-09-15 18:50:16', '21091300001', '2109010006');
INSERT INTO `evaluation` VALUES ('e3e3dc0b-1e8a-11ec-b01f-5cc5d484c924', '5', '很好', null, '5', '5', '5', '2021-09-15 19:50:16', '21091300001', '2109010006');
INSERT INTO `evaluation` VALUES ('e5417bc0-1e89-11ec-b01f-5cc5d484c924', '4', '一般', null, '3', '5', '3', '2020-12-10 07:35:04', '20120600001', '2109010003');
INSERT INTO `evaluation` VALUES ('e65cd490-1e8a-11ec-b01f-5cc5d484c924', '5', '很好', null, '5', '5', '5', '2021-09-15 20:50:16', '21091300001', '2109010006');
INSERT INTO `evaluation` VALUES ('eb574ad3-1e8b-11ec-b01f-5cc5d484c924', '1', '差', null, '2', '2', '2', '2021-09-15 20:05:06', '21091300005', '2109020003');
INSERT INTO `evaluation` VALUES ('ef28b2d9-1e8a-11ec-b01f-5cc5d484c924', '4', '好', null, '4', '5', '4', '2021-09-15 20:51:16', '21091300001', '2109010006');
INSERT INTO `evaluation` VALUES ('ef9ab69a-1e89-11ec-b01f-5cc5d484c924', '4', '一般', null, '4', '4', '4', '2020-12-10 10:39:04', '20120600001', '2109010003');
INSERT INTO `evaluation` VALUES ('f865cb2a-1e8a-11ec-b01f-5cc5d484c924', '4', '好', null, '4', '3', '4', '2021-09-16 12:51:16', '21091300001', '2109010006');
INSERT INTO `evaluation` VALUES ('fa9d2c3f-1e89-11ec-b01f-5cc5d484c924', '5', '很好', null, '5', '5', '5', '2020-12-10 12:39:04', '20120600001', '2109010003');
INSERT INTO `evaluation` VALUES ('fb5575a6-1e8b-11ec-b01f-5cc5d484c924', '3', '一般', null, '3', '3', '3', '2021-09-15 22:05:06', '21091300005', '2109020003');
INSERT INTO `evaluation` VALUES ('ffa37cc3-1e8c-11ec-b01f-5cc5d484c924', '5', '很好', null, '5', '5', '5', '2021-09-19 19:18:24', '21091300008', '2109080002');

-- ----------------------------
-- Table structure for evaluationreply
-- ----------------------------
DROP TABLE IF EXISTS `evaluationreply`;
CREATE TABLE `evaluationreply` (
  `cEvaluationReplyID` char(36) NOT NULL,
  `vReplyContent` varchar(1000) DEFAULT NULL,
  `dReplyTime` datetime DEFAULT NULL,
  `cEvaluationID` char(36) NOT NULL,
  PRIMARY KEY (`cEvaluationReplyID`),
  KEY `RefEvaluation52` (`cEvaluationID`),
  CONSTRAINT `RefEvaluation52` FOREIGN KEY (`cEvaluationID`) REFERENCES `evaluation` (`cEvaluationID`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_0900_ai_ci;

-- ----------------------------
-- Records of evaluationreply
-- ----------------------------
INSERT INTO `evaluationreply` VALUES ('cc0184ac-1e8e-11ec-b01f-5cc5d484c924', '感谢您的信赖和对我们的支持！1', '2021-09-26 13:58:39', '3b305ea1-1e6b-11ec-8e67-5cc5d484c924');
INSERT INTO `evaluationreply` VALUES ('cc0220ef-1e8e-11ec-b01f-5cc5d484c924', '感谢您的信赖和对我们的支持！2', '2021-09-26 13:58:39', '4d9c5e3f-1e6b-11ec-8e67-5cc5d484c924');
INSERT INTO `evaluationreply` VALUES ('cc0220f0-1e8e-11ec-b01f-5cc5d484c924', '感谢您的信赖和对我们的支持！3', '2021-09-26 13:58:39', '52f06de8-1e6b-11ec-8e67-5cc5d484c924');
INSERT INTO `evaluationreply` VALUES ('cc0220f1-1e8e-11ec-b01f-5cc5d484c924', '感谢您的信赖和对我们的支持！4', '2021-09-26 13:58:39', '693437dd-1e6b-11ec-8e67-5cc5d484c924');
INSERT INTO `evaluationreply` VALUES ('cc0247ff-1e8e-11ec-b01f-5cc5d484c924', '感谢您的信赖和对我们的支持！5', '2021-09-26 13:58:39', '7badcc3e-1e6b-11ec-8e67-5cc5d484c924');
INSERT INTO `evaluationreply` VALUES ('cc024800-1e8e-11ec-b01f-5cc5d484c924', '感谢您的信赖和对我们的支持！6', '2021-09-26 13:58:39', '9cf432e9-1e6b-11ec-8e67-5cc5d484c924');
INSERT INTO `evaluationreply` VALUES ('cc024801-1e8e-11ec-b01f-5cc5d484c924', '感谢您的信赖和对我们的支持！7', '2021-09-26 13:58:39', 'ab964b13-1e6b-11ec-8e67-5cc5d484c924');
INSERT INTO `evaluationreply` VALUES ('cc024802-1e8e-11ec-b01f-5cc5d484c924', '感谢您的信赖和对我们的支持！8', '2021-09-26 13:58:39', 'b57d1360-1e6b-11ec-8e67-5cc5d484c924');
INSERT INTO `evaluationreply` VALUES ('cc024803-1e8e-11ec-b01f-5cc5d484c924', '感谢您的信赖和对我们的支持！9', '2021-09-26 13:58:39', 'bf02a771-1e6b-11ec-8e67-5cc5d484c924');
INSERT INTO `evaluationreply` VALUES ('cc024804-1e8e-11ec-b01f-5cc5d484c924', '感谢您的信赖和对我们的支持！10', '2021-09-26 13:58:39', 'cad0383f-1e6b-11ec-8e67-5cc5d484c924');
INSERT INTO `evaluationreply` VALUES ('cc024805-1e8e-11ec-b01f-5cc5d484c924', '很抱歉给您带来不好体验，我们会研究改进,祝您生活愉快 11', '2021-09-26 13:58:39', 'da3a8558-1e6b-11ec-8e67-5cc5d484c924');
INSERT INTO `evaluationreply` VALUES ('cc024806-1e8e-11ec-b01f-5cc5d484c924', '感谢您的信赖和对我们的支持！12', '2021-09-26 13:58:39', '4308ec8c-1e89-11ec-b01f-5cc5d484c924');
INSERT INTO `evaluationreply` VALUES ('cc024807-1e8e-11ec-b01f-5cc5d484c924', '感谢您的信赖和对我们的支持！13', '2021-09-26 13:58:39', '496dace4-1e89-11ec-b01f-5cc5d484c924');
INSERT INTO `evaluationreply` VALUES ('cc024808-1e8e-11ec-b01f-5cc5d484c924', '感谢您的信赖和对我们的支持！14', '2021-09-26 13:58:39', '50731c65-1e89-11ec-b01f-5cc5d484c924');
INSERT INTO `evaluationreply` VALUES ('cc024809-1e8e-11ec-b01f-5cc5d484c924', '感谢您的信赖和对我们的支持！15', '2021-09-26 13:58:39', '6147fb4d-1e89-11ec-b01f-5cc5d484c924');
INSERT INTO `evaluationreply` VALUES ('cc02480a-1e8e-11ec-b01f-5cc5d484c924', '感谢您的信赖和对我们的支持！16', '2021-09-26 13:58:39', '76a188e4-1e89-11ec-b01f-5cc5d484c924');
INSERT INTO `evaluationreply` VALUES ('cc02480b-1e8e-11ec-b01f-5cc5d484c924', '感谢您的信赖和对我们的支持！17', '2021-09-26 13:58:39', '013cfaa4-1e8a-11ec-b01f-5cc5d484c924');
INSERT INTO `evaluationreply` VALUES ('cc02480c-1e8e-11ec-b01f-5cc5d484c924', '感谢您的信赖和对我们的支持！18', '2021-09-26 13:58:39', 'd4e948bc-1e89-11ec-b01f-5cc5d484c924');
INSERT INTO `evaluationreply` VALUES ('cc02480d-1e8e-11ec-b01f-5cc5d484c924', '感谢您的信赖和对我们的支持！19', '2021-09-26 13:58:39', 'e5417bc0-1e89-11ec-b01f-5cc5d484c924');
INSERT INTO `evaluationreply` VALUES ('cc02480e-1e8e-11ec-b01f-5cc5d484c924', '感谢您的信赖和对我们的支持！20', '2021-09-26 13:58:39', 'ef9ab69a-1e89-11ec-b01f-5cc5d484c924');
INSERT INTO `evaluationreply` VALUES ('cc02480f-1e8e-11ec-b01f-5cc5d484c924', '感谢您的信赖和对我们的支持！21', '2021-09-26 13:58:39', 'fa9d2c3f-1e89-11ec-b01f-5cc5d484c924');
INSERT INTO `evaluationreply` VALUES ('cc024810-1e8e-11ec-b01f-5cc5d484c924', '感谢您的信赖和对我们的支持！22', '2021-09-26 13:58:39', '55a915e8-1e8a-11ec-b01f-5cc5d484c924');
INSERT INTO `evaluationreply` VALUES ('cc024811-1e8e-11ec-b01f-5cc5d484c924', '感谢您的信赖和对我们的支持！23', '2021-09-26 13:58:39', '5859c10d-1e8a-11ec-b01f-5cc5d484c924');
INSERT INTO `evaluationreply` VALUES ('cc024812-1e8e-11ec-b01f-5cc5d484c924', '感谢您的信赖和对我们的支持！24', '2021-09-26 13:58:39', '5de58357-1e8a-11ec-b01f-5cc5d484c924');
INSERT INTO `evaluationreply` VALUES ('cc024813-1e8e-11ec-b01f-5cc5d484c924', '感谢您的信赖和对我们的支持！25', '2021-09-26 13:58:39', '6495a5a9-1e8a-11ec-b01f-5cc5d484c924');
INSERT INTO `evaluationreply` VALUES ('cc024814-1e8e-11ec-b01f-5cc5d484c924', '感谢您的信赖和对我们的支持！26', '2021-09-26 13:58:39', '6a585741-1e8a-11ec-b01f-5cc5d484c924');
INSERT INTO `evaluationreply` VALUES ('cc024815-1e8e-11ec-b01f-5cc5d484c924', '很抱歉给您带来不好体验，我们会研究改进,祝您生活愉快 27', '2021-09-26 13:58:39', '7736e6de-1e8a-11ec-b01f-5cc5d484c924');
INSERT INTO `evaluationreply` VALUES ('cc024816-1e8e-11ec-b01f-5cc5d484c924', '很抱歉给您带来不好体验，我们会研究改进,祝您生活愉快 28', '2021-09-26 13:58:39', '9140c7a9-1e8a-11ec-b01f-5cc5d484c924');
INSERT INTO `evaluationreply` VALUES ('cc024817-1e8e-11ec-b01f-5cc5d484c924', '感谢您的信赖和对我们的支持！29', '2021-09-26 13:58:39', 'a65bc4b5-1e8a-11ec-b01f-5cc5d484c924');
INSERT INTO `evaluationreply` VALUES ('cc024818-1e8e-11ec-b01f-5cc5d484c924', '感谢您的信赖和对我们的支持！30', '2021-09-26 13:58:39', 'a8a0b427-1e8a-11ec-b01f-5cc5d484c924');
INSERT INTO `evaluationreply` VALUES ('cc024819-1e8e-11ec-b01f-5cc5d484c924', '感谢您的信赖和对我们的支持！31', '2021-09-26 13:58:39', 'a8ff504a-1e8a-11ec-b01f-5cc5d484c924');
INSERT INTO `evaluationreply` VALUES ('cc026f10-1e8e-11ec-b01f-5cc5d484c924', '感谢您的信赖和对我们的支持！32', '2021-09-26 13:58:39', 'c00beb70-1e8a-11ec-b01f-5cc5d484c924');
INSERT INTO `evaluationreply` VALUES ('cc026f11-1e8e-11ec-b01f-5cc5d484c924', '感谢您的信赖和对我们的支持！33', '2021-09-26 13:58:39', 'c45a4714-1e8a-11ec-b01f-5cc5d484c924');
INSERT INTO `evaluationreply` VALUES ('cc026f12-1e8e-11ec-b01f-5cc5d484c924', '感谢您的信赖和对我们的支持！34', '2021-09-26 13:58:39', '03a2d9ab-1e8b-11ec-b01f-5cc5d484c924');
INSERT INTO `evaluationreply` VALUES ('cc026f13-1e8e-11ec-b01f-5cc5d484c924', '感谢您的信赖和对我们的支持！35', '2021-09-26 13:58:39', 'e1b693a2-1e8a-11ec-b01f-5cc5d484c924');
INSERT INTO `evaluationreply` VALUES ('cc026f14-1e8e-11ec-b01f-5cc5d484c924', '感谢您的信赖和对我们的支持！36', '2021-09-26 13:58:39', 'e3e3dc0b-1e8a-11ec-b01f-5cc5d484c924');
INSERT INTO `evaluationreply` VALUES ('cc026f15-1e8e-11ec-b01f-5cc5d484c924', '感谢您的信赖和对我们的支持！37', '2021-09-26 13:58:39', 'e65cd490-1e8a-11ec-b01f-5cc5d484c924');
INSERT INTO `evaluationreply` VALUES ('cc026f16-1e8e-11ec-b01f-5cc5d484c924', '感谢您的信赖和对我们的支持！38', '2021-09-26 13:58:39', 'ef28b2d9-1e8a-11ec-b01f-5cc5d484c924');
INSERT INTO `evaluationreply` VALUES ('cc026f17-1e8e-11ec-b01f-5cc5d484c924', '感谢您的信赖和对我们的支持！39', '2021-09-26 13:58:39', 'f865cb2a-1e8a-11ec-b01f-5cc5d484c924');
INSERT INTO `evaluationreply` VALUES ('cc026f18-1e8e-11ec-b01f-5cc5d484c924', '感谢您的信赖和对我们的支持！40', '2021-09-26 13:58:39', '18b2b2fe-1e8b-11ec-b01f-5cc5d484c924');
INSERT INTO `evaluationreply` VALUES ('cc026f19-1e8e-11ec-b01f-5cc5d484c924', '感谢您的信赖和对我们的支持！41', '2021-09-26 13:58:39', '1ce1030a-1e8b-11ec-b01f-5cc5d484c924');
INSERT INTO `evaluationreply` VALUES ('cc026f1a-1e8e-11ec-b01f-5cc5d484c924', '感谢您的信赖和对我们的支持！42', '2021-09-26 13:58:39', '24279b30-1e8b-11ec-b01f-5cc5d484c924');
INSERT INTO `evaluationreply` VALUES ('cc026f1b-1e8e-11ec-b01f-5cc5d484c924', '感谢您的信赖和对我们的支持！43', '2021-09-26 13:58:39', '3267bbcb-1e8b-11ec-b01f-5cc5d484c924');
INSERT INTO `evaluationreply` VALUES ('cc026f1c-1e8e-11ec-b01f-5cc5d484c924', '感谢您的信赖和对我们的支持！44', '2021-09-26 13:58:39', '3c407a23-1e8b-11ec-b01f-5cc5d484c924');
INSERT INTO `evaluationreply` VALUES ('cc026f1d-1e8e-11ec-b01f-5cc5d484c924', '感谢您的信赖和对我们的支持！45', '2021-09-26 13:58:39', '45861e15-1e8b-11ec-b01f-5cc5d484c924');
INSERT INTO `evaluationreply` VALUES ('cc026f1e-1e8e-11ec-b01f-5cc5d484c924', '感谢您的信赖和对我们的支持！46', '2021-09-26 13:58:39', '6055c2c5-1e8b-11ec-b01f-5cc5d484c924');
INSERT INTO `evaluationreply` VALUES ('cc026f1f-1e8e-11ec-b01f-5cc5d484c924', '感谢您的信赖和对我们的支持！47', '2021-09-26 13:58:39', '62737a94-1e8b-11ec-b01f-5cc5d484c924');
INSERT INTO `evaluationreply` VALUES ('cc026f20-1e8e-11ec-b01f-5cc5d484c924', '感谢您的信赖和对我们的支持！48', '2021-09-26 13:58:39', '6c8af087-1e8b-11ec-b01f-5cc5d484c924');
INSERT INTO `evaluationreply` VALUES ('cc026f21-1e8e-11ec-b01f-5cc5d484c924', '很抱歉给您带来不好体验，我们会研究改进,祝您生活愉快 49', '2021-09-26 13:58:39', '7ba45d51-1e8b-11ec-b01f-5cc5d484c924');
INSERT INTO `evaluationreply` VALUES ('cc026f22-1e8e-11ec-b01f-5cc5d484c924', '很抱歉给您带来不好体验，我们会研究改进,祝您生活愉快 50', '2021-09-26 13:58:39', 'eb574ad3-1e8b-11ec-b01f-5cc5d484c924');
INSERT INTO `evaluationreply` VALUES ('cc026f23-1e8e-11ec-b01f-5cc5d484c924', '感谢您的信赖和对我们的支持！51', '2021-09-26 13:58:39', 'fb5575a6-1e8b-11ec-b01f-5cc5d484c924');
INSERT INTO `evaluationreply` VALUES ('cc026f24-1e8e-11ec-b01f-5cc5d484c924', '感谢您的信赖和对我们的支持！52', '2021-09-26 13:58:39', '15ba7016-1e8c-11ec-b01f-5cc5d484c924');
INSERT INTO `evaluationreply` VALUES ('cc026f25-1e8e-11ec-b01f-5cc5d484c924', '感谢您的信赖和对我们的支持！53', '2021-09-26 13:58:39', '218086b8-1e8c-11ec-b01f-5cc5d484c924');
INSERT INTO `evaluationreply` VALUES ('cc026f26-1e8e-11ec-b01f-5cc5d484c924', '感谢您的信赖和对我们的支持！54', '2021-09-26 13:58:39', '23aff209-1e8c-11ec-b01f-5cc5d484c924');
INSERT INTO `evaluationreply` VALUES ('cc026f27-1e8e-11ec-b01f-5cc5d484c924', '感谢您的信赖和对我们的支持！55', '2021-09-26 13:58:39', '2caec7f1-1e8c-11ec-b01f-5cc5d484c924');
INSERT INTO `evaluationreply` VALUES ('cc026f28-1e8e-11ec-b01f-5cc5d484c924', '感谢您的信赖和对我们的支持！56', '2021-09-26 13:58:39', '2fb5aaaa-1e8c-11ec-b01f-5cc5d484c924');
INSERT INTO `evaluationreply` VALUES ('cc026f29-1e8e-11ec-b01f-5cc5d484c924', '感谢您的信赖和对我们的支持！57', '2021-09-26 13:58:39', '44f32458-1e8c-11ec-b01f-5cc5d484c924');
INSERT INTO `evaluationreply` VALUES ('cc026f2a-1e8e-11ec-b01f-5cc5d484c924', '感谢您的信赖和对我们的支持！58', '2021-09-26 13:58:39', '4992d57d-1e8c-11ec-b01f-5cc5d484c924');
INSERT INTO `evaluationreply` VALUES ('cc026f2b-1e8e-11ec-b01f-5cc5d484c924', '感谢您的信赖和对我们的支持！59', '2021-09-26 13:58:39', '563c4a93-1e8c-11ec-b01f-5cc5d484c924');
INSERT INTO `evaluationreply` VALUES ('cc026f2c-1e8e-11ec-b01f-5cc5d484c924', '感谢您的信赖和对我们的支持！60', '2021-09-26 13:58:39', '675b52f1-1e8c-11ec-b01f-5cc5d484c924');
INSERT INTO `evaluationreply` VALUES ('cc026f2d-1e8e-11ec-b01f-5cc5d484c924', '感谢您的信赖和对我们的支持！61', '2021-09-26 13:58:39', '054697f4-1e8d-11ec-b01f-5cc5d484c924');
INSERT INTO `evaluationreply` VALUES ('cc026f2e-1e8e-11ec-b01f-5cc5d484c924', '感谢您的信赖和对我们的支持！62', '2021-09-26 13:58:39', '1090c606-1e8d-11ec-b01f-5cc5d484c924');
INSERT INTO `evaluationreply` VALUES ('cc026f2f-1e8e-11ec-b01f-5cc5d484c924', '感谢您的信赖和对我们的支持！63', '2021-09-26 13:58:39', '132cb05e-1e8d-11ec-b01f-5cc5d484c924');
INSERT INTO `evaluationreply` VALUES ('cc026f30-1e8e-11ec-b01f-5cc5d484c924', '感谢您的信赖和对我们的支持！64', '2021-09-26 13:58:39', 'ffa37cc3-1e8c-11ec-b01f-5cc5d484c924');
INSERT INTO `evaluationreply` VALUES ('cc026f31-1e8e-11ec-b01f-5cc5d484c924', '感谢您的信赖和对我们的支持！65', '2021-09-26 13:58:39', '3a9a3139-1e8d-11ec-b01f-5cc5d484c924');

-- ----------------------------
-- Table structure for orderdetail
-- ----------------------------
DROP TABLE IF EXISTS `orderdetail`;
CREATE TABLE `orderdetail` (
  `cOrderNo` char(11) NOT NULL,
  `cBookID` char(10) NOT NULL,
  `mSalePrice` decimal(10,1) DEFAULT NULL,
  `siQty` smallint NOT NULL DEFAULT '1',
  `mBookCost` decimal(10,1) DEFAULT NULL,
  PRIMARY KEY (`cOrderNo`,`cBookID`),
  KEY `RefBooks33` (`cBookID`),
  CONSTRAINT `RefBooks33` FOREIGN KEY (`cBookID`) REFERENCES `books` (`cBookID`),
  CONSTRAINT `RefOrders34` FOREIGN KEY (`cOrderNo`) REFERENCES `orders` (`cOrderNo`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_0900_ai_ci;

-- ----------------------------
-- Records of orderdetail
-- ----------------------------
INSERT INTO `orderdetail` VALUES ('20060500001', '2109010001', '28.2', '2', '56.4');
INSERT INTO `orderdetail` VALUES ('20060500001', '2109010002', '44.9', '1', '44.9');
INSERT INTO `orderdetail` VALUES ('20120600001', '2109010001', '28.2', '2', '56.4');
INSERT INTO `orderdetail` VALUES ('20120600001', '2109010003', '49.5', '1', '49.5');
INSERT INTO `orderdetail` VALUES ('21040500001', '2109010004', '44.0', '1', '44.0');
INSERT INTO `orderdetail` VALUES ('21091300001', '2109010005', '81.0', '2', '162.0');
INSERT INTO `orderdetail` VALUES ('21091300001', '2109010006', '47.0', '100', '4700.0');
INSERT INTO `orderdetail` VALUES ('21091300002', '2109010007', '52.0', '1', '52.0');
INSERT INTO `orderdetail` VALUES ('21091300002', '2109010008', '39.0', '50', '1950.0');
INSERT INTO `orderdetail` VALUES ('21091300003', '2109010008', '39.0', '1', '39.0');
INSERT INTO `orderdetail` VALUES ('21091300003', '2109020001', '64.0', '1', '64.0');
INSERT INTO `orderdetail` VALUES ('21091300004', '2109020002', '37.0', '2', '74.0');
INSERT INTO `orderdetail` VALUES ('21091300004', '2109020003', '48.0', '1', '48.0');
INSERT INTO `orderdetail` VALUES ('21091300005', '2109020003', '48.0', '3', '144.0');
INSERT INTO `orderdetail` VALUES ('21091300006', '2109020004', '49.0', '2', '98.0');
INSERT INTO `orderdetail` VALUES ('21091300007', '2109020005', '28.0', '2', '56.0');
INSERT INTO `orderdetail` VALUES ('21091300008', '2109080001', '28.0', '2', '56.0');
INSERT INTO `orderdetail` VALUES ('21091300008', '2109080002', '33.0', '1', '33.0');
INSERT INTO `orderdetail` VALUES ('21091300008', '2109080003', '60.0', '2', '120.0');
INSERT INTO `orderdetail` VALUES ('21091300009', '2109080005', '59.8', '1', '59.8');
INSERT INTO `orderdetail` VALUES ('21091300010', '2109080006', '54.4', '1', '54.4');
INSERT INTO `orderdetail` VALUES ('21110500001', '2109080008', '20.0', '2', '40.0');

-- ----------------------------
-- Table structure for orderlog
-- ----------------------------
DROP TABLE IF EXISTS `orderlog`;
CREATE TABLE `orderlog` (
  `cOrderLogID` char(36) NOT NULL,
  `dTime` datetime DEFAULT NULL,
  `vEventName` varchar(500) DEFAULT NULL,
  `cOrderNo` char(11) NOT NULL,
  PRIMARY KEY (`cOrderLogID`),
  KEY `RefOrders42` (`cOrderNo`),
  CONSTRAINT `RefOrders42` FOREIGN KEY (`cOrderNo`) REFERENCES `orders` (`cOrderNo`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_0900_ai_ci;

-- ----------------------------
-- Records of orderlog
-- ----------------------------
INSERT INTO `orderlog` VALUES ('3d4cce6a-1f3f-11ec-8ce9-5cc5d484c924', '2021-09-13 12:56:12', '提交订单', '21091300002');
INSERT INTO `orderlog` VALUES ('3d4ef152-1f3f-11ec-8ce9-5cc5d484c924', '2021-09-13 13:06:12', '付款成功', '21091300002');
INSERT INTO `orderlog` VALUES ('3d50c619-1f3f-11ec-8ce9-5cc5d484c924', '2021-09-13 14:08:22', '已下单', '21091300002');
INSERT INTO `orderlog` VALUES ('3d531012-1f3f-11ec-8ce9-5cc5d484c924', '2021-09-13 15:15:48', '订单分配至成都仓', '21091300002');
INSERT INTO `orderlog` VALUES ('3d550be9-1f3f-11ec-8ce9-5cc5d484c924', '2021-09-14 13:06:12', '已出库', '21091300002');
INSERT INTO `orderlog` VALUES ('3d56e0b0-1f3f-11ec-8ce9-5cc5d484c924', '2021-09-14 18:17:19', '邮件投递到四川省成都市人民南路2号快递箱', '21091300002');
INSERT INTO `orderlog` VALUES ('3d58dc87-1f3f-11ec-8ce9-5cc5d484c924', '2021-09-17 18:06:12', '已签收', '21091300002');
INSERT INTO `orderlog` VALUES ('3f847da0-1f3e-11ec-8ce9-5cc5d484c924', '2021-04-05 09:23:56', '提交订单', '21040500001');
INSERT INTO `orderlog` VALUES ('3f86a088-1f3e-11ec-8ce9-5cc5d484c924', '2021-04-05 09:33:50', '付款成功', '21040500001');
INSERT INTO `orderlog` VALUES ('3f88c370-1f3e-11ec-8ce9-5cc5d484c924', '2021-04-05 12:13:44', '已下单', '21040500001');
INSERT INTO `orderlog` VALUES ('3f8b0d69-1f3e-11ec-8ce9-5cc5d484c924', '2021-04-05 16:56:30', '订单分配至西安仓', '21040500001');
INSERT INTO `orderlog` VALUES ('3f8d3051-1f3e-11ec-8ce9-5cc5d484c924', '2021-04-06 09:33:50', '已出库', '21040500001');
INSERT INTO `orderlog` VALUES ('3f8f7a49-1f3e-11ec-8ce9-5cc5d484c924', '2021-04-07 08:53:17', '邮件投递到陕西省西安市咸宁西路21号快递箱', '21040500001');
INSERT INTO `orderlog` VALUES ('3f91c442-1f3e-11ec-8ce9-5cc5d484c924', '2021-04-08 09:33:50', '已签收', '21040500001');
INSERT INTO `orderlog` VALUES ('425b304f-1f4f-11ec-8ce9-5cc5d484c924', '2021-11-05 22:34:45', '提交订单', '21110500001');
INSERT INTO `orderlog` VALUES ('425d7a48-1f4f-11ec-8ce9-5cc5d484c924', '2021-11-05 22:38:45', '付款成功', '21110500001');
INSERT INTO `orderlog` VALUES ('425f761f-1f4f-11ec-8ce9-5cc5d484c924', '2021-11-05 22:55:19', '已下单', '21110500001');
INSERT INTO `orderlog` VALUES ('426171f7-1f4f-11ec-8ce9-5cc5d484c924', '2021-11-05 23:15:26', '订单分配至长沙仓', '21110500001');
INSERT INTO `orderlog` VALUES ('5982fa08-1f42-11ec-8ce9-5cc5d484c924', '2021-09-13 16:23:24', '提交订单', '21091300008');
INSERT INTO `orderlog` VALUES ('5984cecf-1f42-11ec-8ce9-5cc5d484c924', '2021-09-13 16:28:24', '付款成功', '21091300008');
INSERT INTO `orderlog` VALUES ('59862e64-1f42-11ec-8ce9-5cc5d484c924', '2021-09-13 17:13:19', '已下单', '21091300008');
INSERT INTO `orderlog` VALUES ('5987dc1b-1f42-11ec-8ce9-5cc5d484c924', '2021-09-13 18:15:26', '订单分配至北京仓', '21091300008');
INSERT INTO `orderlog` VALUES ('5989ff03-1f42-11ec-8ce9-5cc5d484c924', '2021-09-17 16:28:24', '已出库', '21091300008');
INSERT INTO `orderlog` VALUES ('598c48fb-1f42-11ec-8ce9-5cc5d484c924', '2021-09-18 10:15:48', '邮件投递到北京市海淀区人民大学南路1号快递箱', '21091300008');
INSERT INTO `orderlog` VALUES ('598e6be3-1f42-11ec-8ce9-5cc5d484c924', '2021-09-19 09:18:24', '已签收', '21091300008');
INSERT INTO `orderlog` VALUES ('61236c3c-1f3d-11ec-8ce9-5cc5d484c924', '2020-06-05 13:56:34', '提交订单', '20060500001');
INSERT INTO `orderlog` VALUES ('6125dd46-1f3d-11ec-8ce9-5cc5d484c924', '2020-06-05 14:56:34', '付款成功', '20060500001');
INSERT INTO `orderlog` VALUES ('61273cdb-1f3d-11ec-8ce9-5cc5d484c924', '2020-06-05 15:16:18', '已下单', '20060500001');
INSERT INTO `orderlog` VALUES ('612a2316-1f3d-11ec-8ce9-5cc5d484c924', '2020-06-05 15:20:18', '订单分配至成都仓', '20060500001');
INSERT INTO `orderlog` VALUES ('612bd0cc-1f3d-11ec-8ce9-5cc5d484c924', '2020-06-05 16:56:34', '已出库', '20060500001');
INSERT INTO `orderlog` VALUES ('612da593-1f3d-11ec-8ce9-5cc5d484c924', '2020-06-06 12:51:14', '邮件投递到四川省成都市东大街1号收件箱', '20060500001');
INSERT INTO `orderlog` VALUES ('612fa16a-1f3d-11ec-8ce9-5cc5d484c924', '2020-06-07 14:56:34', '已签收', '20060500001');
INSERT INTO `orderlog` VALUES ('7560c419-1f40-11ec-8ce9-5cc5d484c924', '2021-09-13 13:45:45', '提交订单', '21091300003');
INSERT INTO `orderlog` VALUES ('756271cf-1f40-11ec-8ce9-5cc5d484c924', '2021-09-13 13:55:45', '付款成功', '21091300003');
INSERT INTO `orderlog` VALUES ('75646da6-1f40-11ec-8ce9-5cc5d484c924', '2021-09-13 15:15:23', '已下单', '21091300003');
INSERT INTO `orderlog` VALUES ('7566697e-1f40-11ec-8ce9-5cc5d484c924', '2021-09-13 16:51:37', '订单分配至成都仓', '21091300003');
INSERT INTO `orderlog` VALUES ('75681734-1f40-11ec-8ce9-5cc5d484c924', '2021-09-14 13:55:45', '已出库', '21091300003');
INSERT INTO `orderlog` VALUES ('7569c4ea-1f40-11ec-8ce9-5cc5d484c924', '2021-09-14 18:17:19', '邮件投递到四川省成都市人民南路1号快递箱', '21091300003');
INSERT INTO `orderlog` VALUES ('8e6c64a4-1f41-11ec-8ce9-5cc5d484c924', '2021-09-13 15:23:45', '提交订单', '21091300006');
INSERT INTO `orderlog` VALUES ('8e6e878c-1f41-11ec-8ce9-5cc5d484c924', '2021-09-13 15:40:15', '付款成功', '21091300006');
INSERT INTO `orderlog` VALUES ('8e703543-1f41-11ec-8ce9-5cc5d484c924', '2021-09-13 16:23:36', '已下单', '21091300006');
INSERT INTO `orderlog` VALUES ('8e720a0a-1f41-11ec-8ce9-5cc5d484c924', '2021-09-14 09:55:28', '订单分配至成都仓', '21091300006');
INSERT INTO `orderlog` VALUES ('8e7405e1-1f41-11ec-8ce9-5cc5d484c924', '2021-09-16 15:40:15', '已出库', '21091300006');
INSERT INTO `orderlog` VALUES ('8e764fda-1f41-11ec-8ce9-5cc5d484c924', '2021-09-17 15:40:15', '邮件投递到四川省成都市人民南路35号快递箱', '21091300006');
INSERT INTO `orderlog` VALUES ('9a51f102-1f40-11ec-8ce9-5cc5d484c924', '2021-09-13 14:12:56', '提交订单', '21091300004');
INSERT INTO `orderlog` VALUES ('b6387c95-1f4e-11ec-8ce9-5cc5d484c924', '2021-09-13 16:55:56', '提交订单', '21091300009');
INSERT INTO `orderlog` VALUES ('b63aed9e-1f4e-11ec-8ce9-5cc5d484c924', '2021-09-13 16:59:56', '付款成功', '21091300009');
INSERT INTO `orderlog` VALUES ('b63d85b8-1f4e-11ec-8ce9-5cc5d484c924', '2021-09-13 17:13:19', '已下单', '21091300009');
INSERT INTO `orderlog` VALUES ('b63f818f-1f4e-11ec-8ce9-5cc5d484c924', '2021-09-13 18:15:26', '订单分配至长沙仓', '21091300009');
INSERT INTO `orderlog` VALUES ('bb60b1d8-1f3e-11ec-8ce9-5cc5d484c924', '2021-09-13 12:48:56', '提交订单', '21091300001');
INSERT INTO `orderlog` VALUES ('bb62adb0-1f3e-11ec-8ce9-5cc5d484c924', '2021-09-13 12:55:51', '付款成功', '21091300001');
INSERT INTO `orderlog` VALUES ('bb648277-1f3e-11ec-8ce9-5cc5d484c924', '2021-09-13 17:34:16', '已下单', '21091300001');
INSERT INTO `orderlog` VALUES ('bb667e4e-1f3e-11ec-8ce9-5cc5d484c924', '2021-09-13 18:15:25', '订单分配至成都仓', '21091300001');
INSERT INTO `orderlog` VALUES ('bb696489-1f3e-11ec-8ce9-5cc5d484c924', '2021-09-14 12:55:56', '已出库', '21091300001');
INSERT INTO `orderlog` VALUES ('bb6bae82-1f3e-11ec-8ce9-5cc5d484c924', '2021-09-14 18:45:38', '邮件投递到四川省成都市人民南路1号快递箱', '21091300001');
INSERT INTO `orderlog` VALUES ('bb6daa59-1f3e-11ec-8ce9-5cc5d484c924', '2021-09-15 12:55:56', '已签收', '21091300001');
INSERT INTO `orderlog` VALUES ('d460808f-1f4e-11ec-8ce9-5cc5d484c924', '2021-09-13 17:25:22', '提交订单', '21091300010');
INSERT INTO `orderlog` VALUES ('d6fcb09c-1f3d-11ec-8ce9-5cc5d484c924', '2020-12-06 08:20:45', '提交订单', '20120600001');
INSERT INTO `orderlog` VALUES ('d6fe8563-1f3d-11ec-8ce9-5cc5d484c924', '2020-12-06 08:30:04', '付款成功', '20120600001');
INSERT INTO `orderlog` VALUES ('d7005a2a-1f3d-11ec-8ce9-5cc5d484c924', '2020-12-06 09:16:18', '已下单', '20120600001');
INSERT INTO `orderlog` VALUES ('d702a423-1f3d-11ec-8ce9-5cc5d484c924', '2020-12-06 12:20:18', '订单分配至成都仓', '20120600001');
INSERT INTO `orderlog` VALUES ('d7049ffa-1f3d-11ec-8ce9-5cc5d484c924', '2020-12-07 08:30:04', '已出库', '20060500001');
INSERT INTO `orderlog` VALUES ('d7069bd2-1f3d-11ec-8ce9-5cc5d484c924', '2020-12-07 12:51:14', '邮件投递到四川省成都市双流区机场路学府路一段24号快递箱', '20120600001');
INSERT INTO `orderlog` VALUES ('d708beba-1f3d-11ec-8ce9-5cc5d484c924', '2020-12-09 08:30:04', '已签收', '20120600001');
INSERT INTO `orderlog` VALUES ('f5a2f498-1f41-11ec-8ce9-5cc5d484c924', '2021-09-13 15:48:23', '提交订单', '21091300007');
INSERT INTO `orderlog` VALUES ('f5a5b3c2-1f41-11ec-8ce9-5cc5d484c924', '2021-09-13 15:55:23', '付款成功', '21091300007');
INSERT INTO `orderlog` VALUES ('f5a7af9a-1f41-11ec-8ce9-5cc5d484c924', '2021-09-13 16:43:19', '已下单', '21091300007');
INSERT INTO `orderlog` VALUES ('f5a9d282-1f41-11ec-8ce9-5cc5d484c924', '2021-09-13 19:15:26', '订单分配至成都仓', '21091300007');
INSERT INTO `orderlog` VALUES ('f5aba749-1f41-11ec-8ce9-5cc5d484c924', '2021-09-14 15:55:23', '已出库', '21091300007');
INSERT INTO `orderlog` VALUES ('f5ada320-1f41-11ec-8ce9-5cc5d484c924', '2021-09-14 20:15:48', '邮件投递到四川省成都市人民南路35号快递箱', '21091300007');
INSERT INTO `orderlog` VALUES ('f5afc608-1f41-11ec-8ce9-5cc5d484c924', '2021-09-15 17:25:23', '已签收', '21091300007');
INSERT INTO `orderlog` VALUES ('fc625fc9-1f40-11ec-8ce9-5cc5d484c924', '2021-09-13 14:45:06', '提交订单', '21091300005');
INSERT INTO `orderlog` VALUES ('fc63984e-1f40-11ec-8ce9-5cc5d484c924', '2021-09-13 14:55:06', '付款成功', '21091300005');
INSERT INTO `orderlog` VALUES ('fc656d14-1f40-11ec-8ce9-5cc5d484c924', '2021-09-13 15:23:43', '已下单', '21091300005');
INSERT INTO `orderlog` VALUES ('fc6741db-1f40-11ec-8ce9-5cc5d484c924', '2021-09-13 16:26:19', '订单分配至成都仓', '21091300005');
INSERT INTO `orderlog` VALUES ('fc6916a2-1f40-11ec-8ce9-5cc5d484c924', '2021-09-14 14:55:06', '已出库', '21091300005');
INSERT INTO `orderlog` VALUES ('fc6b398a-1f40-11ec-8ce9-5cc5d484c924', '2021-09-14 20:23:18', '邮件投递到四川省成都市人民北路1号快递箱', '21091300005');
INSERT INTO `orderlog` VALUES ('fc6d5c72-1f40-11ec-8ce9-5cc5d484c924', '2021-09-15 19:15:06', '已签收', '21091300005');

-- ----------------------------
-- Table structure for orders
-- ----------------------------
DROP TABLE IF EXISTS `orders`;
CREATE TABLE `orders` (
  `cOrderNo` char(11) NOT NULL,
  `dOrderDate` datetime DEFAULT NULL,
  `mBookCost` decimal(10,1) DEFAULT NULL,
  `mShippingCost` decimal(10,1) DEFAULT NULL,
  `mTotalCost` decimal(10,1) DEFAULT NULL,
  `cPayStatus` char(1) DEFAULT NULL,
  `vPayType` varchar(20) DEFAULT NULL,
  `dPayTime` datetime DEFAULT NULL,
  `cShippingStatus` char(1) DEFAULT NULL,
  `dShippingDate` datetime DEFAULT NULL,
  `cReceiveStatus` char(1) DEFAULT NULL,
  `dReceiveTime` datetime DEFAULT NULL,
  `vRecipientName` varchar(100) DEFAULT NULL,
  `vRecipientProvince` varchar(100) DEFAULT NULL,
  `vRecipientCity` varchar(100) DEFAULT NULL,
  `vRecipientAddress` varchar(1000) DEFAULT NULL,
  `vRecipientPhone` varchar(50) DEFAULT NULL,
  `cCustomerID` char(36) NOT NULL,
  PRIMARY KEY (`cOrderNo`),
  KEY `RefCustomer16` (`cCustomerID`),
  CONSTRAINT `RefCustomer16` FOREIGN KEY (`cCustomerID`) REFERENCES `customer` (`cCustomerID`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_0900_ai_ci;

-- ----------------------------
-- Records of orders
-- ----------------------------
INSERT INTO `orders` VALUES ('20060500001', '2020-06-05 13:56:34', '101.3', '10.0', '111.3', '1', '网银', '2020-06-05 14:56:34', '1', '2020-06-06 14:56:34', '1', '2020-06-07 14:56:34', '张晓梅', '四川', '成都', '四川省成都市东大街1号', '13766889979', 'b66617d1-136e-11ec-b124-5cc5d484c924');
INSERT INTO `orders` VALUES ('20120600001', '2020-12-06 08:20:45', '105.9', '20.0', '125.9', '1', '支付宝', '2020-12-06 08:30:04', '1', '2020-12-07 08:30:04', '1', '2020-12-09 08:30:04', '李勇军', '四川', '成都', '四川省成都市双流区机场路学府路一段24号', '13788775688', 'b66617d0-136e-11ec-b124-5cc5d484c924');
INSERT INTO `orders` VALUES ('21040500001', '2021-04-05 09:23:56', '44.0', '5.0', '49.0', '1', '网银', '2021-04-05 09:33:50', '1', '2021-04-06 09:33:50', '1', '2021-04-08 09:33:50', '李明明', '陕西', '西安', '陕西省西安市咸宁西路21号', '13944685569', 'b66617d1-136e-11ec-b124-5cc5d484c924');
INSERT INTO `orders` VALUES ('21091300001', '2021-09-13 12:48:56', '4862.0', '100.0', '4962.0', '1', '支付宝', '2021-09-13 12:55:56', '1', '2021-09-14 12:55:56', '1', '2021-09-15 12:55:56', '张三', '四川', '成都', '四川省成都市人民南路1号', '13555112342', 'b665a29c-136e-11ec-b124-5cc5d484c924');
INSERT INTO `orders` VALUES ('21091300002', '2021-09-13 12:56:12', '2002.0', '50.0', '2052.0', '1', '微信', '2021-09-13 13:06:12', '1', '2021-09-14 13:06:12', '1', '2021-09-17 18:06:12', '张若林', '四川', '成都', '四川省成都市人民南路2号', '13555112341', 'b665a29c-136e-11ec-b124-5cc5d484c924');
INSERT INTO `orders` VALUES ('21091300003', '2021-09-13 13:45:45', '103.0', '10.0', '113.0', '1', '网银', '2021-09-13 13:55:45', '1', '2021-09-14 13:55:45', '0', null, '张三', '四川', '成都', '四川省成都市人民南路1号', '13555112342', 'b665a29c-136e-11ec-b124-5cc5d484c924');
INSERT INTO `orders` VALUES ('21091300004', '2021-09-13 14:12:56', '122.0', '10.0', '132.0', '0', '', null, '0', null, '0', null, '张若林', '四川', '成都', '四川省成都市人民南路2号', '13555112341', 'b665a29c-136e-11ec-b124-5cc5d484c924');
INSERT INTO `orders` VALUES ('21091300005', '2021-09-13 14:45:06', '144.0', '20.0', '164.0', '1', '微信', '2021-09-13 14:55:06', '1', '2021-09-14 14:55:06', '1', '2021-09-15 19:15:06', '余红', '四川', '成都', '四川省成都市人民北路1号', '13766884967', 'b665f0be-136e-11ec-b124-5cc5d484c924');
INSERT INTO `orders` VALUES ('21091300006', '2021-09-13 15:23:45', '98.0', '10.0', '108.0', '1', '网银', '2021-09-13 15:40:15', '1', '2021-09-16 15:40:15', '0', null, '李四', '四川', '成都', '四川省成都市人民南路35号', '13612357894', 'b665f0be-136e-11ec-b124-5cc5d484c924');
INSERT INTO `orders` VALUES ('21091300007', '2021-09-13 15:48:23', '56.0', '9.0', '65.0', '1', '支付宝', '2021-09-13 15:55:23', '1', '2021-09-14 15:55:23', '1', '2021-09-15 17:25:23', '李四', '四川', '成都', '四川省成都市人民南路35号', '13612357894', 'b665f0be-136e-11ec-b124-5cc5d484c924');
INSERT INTO `orders` VALUES ('21091300008', '2021-09-13 16:23:24', '209.0', '20.0', '229.0', '1', '微信', '2021-09-13 16:28:24', '1', '2021-09-17 16:28:24', '1', '2021-09-19 09:18:24', '王明', '北京', '北京', '北京市海淀区人民大学南路1号', '13366523412', 'b66617ce-136e-11ec-b124-5cc5d484c924');
INSERT INTO `orders` VALUES ('21091300009', '2021-09-13 16:55:56', '59.8', '5.0', '64.8', '1', '网银', '2021-09-13 16:59:56', '0', null, '0', null, '张敏明', '湖南', '长沙', '湖南省长沙市芙蓉中路120号', '13366771234', 'b66617ce-136e-11ec-b124-5cc5d484c924');
INSERT INTO `orders` VALUES ('21091300010', '2021-09-13 17:25:22', '54.4', '5.0', '59.4', '0', '', null, '0', null, '0', null, '赵小红', '北京', '北京', '北京市海淀区人民大学南路50号', '18615584775', 'b66617cf-136e-11ec-b124-5cc5d484c924');
INSERT INTO `orders` VALUES ('21110500001', '2021-11-05 22:34:45', '40.0', '5.0', '45.0', '1', '微信', '2021-11-05 22:38:45', '0', null, '0', null, '张林', '湖南', '长沙', '长沙市岳麓区桃子湖路18号', '13880125568', 'b66617ee-136e-11ec-b124-5cc5d484c924');

-- ----------------------------
-- Table structure for recipientlist
-- ----------------------------
DROP TABLE IF EXISTS `recipientlist`;
CREATE TABLE `recipientlist` (
  `cRecipientID` char(36) NOT NULL,
  `vRecipientName` varchar(100) DEFAULT NULL,
  `vRecipientPhone` varchar(50) DEFAULT NULL,
  `vRecipientProvince` varchar(100) DEFAULT NULL,
  `vRecipientCity` varchar(100) DEFAULT NULL,
  `vRecipientAddress` varchar(1000) DEFAULT NULL,
  `cCustomerID` char(36) NOT NULL,
  PRIMARY KEY (`cRecipientID`),
  KEY `RefCustomer31` (`cCustomerID`),
  CONSTRAINT `RefCustomer31` FOREIGN KEY (`cCustomerID`) REFERENCES `customer` (`cCustomerID`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_0900_ai_ci;

-- ----------------------------
-- Records of recipientlist
-- ----------------------------
INSERT INTO `recipientlist` VALUES ('0c40fd26-1cfe-11ec-a23f-5cc5d484c924', '余红', '13766884967', '四川', '成都', '四川省成都市人民北路1号', 'b665f0be-136e-11ec-b124-5cc5d484c924');
INSERT INTO `recipientlist` VALUES ('3244f740-1cff-11ec-a23f-5cc5d484c924', '赵小红', '18615584775', '北京', '北京', '北京市海淀区人民大学南路50号', 'b66617cf-136e-11ec-b124-5cc5d484c924');
INSERT INTO `recipientlist` VALUES ('384a9fdd-1d00-11ec-a23f-5cc5d484c924', '李勇军', '13788775688', '四川', '成都', '四川省成都市双流区机场路学府路一段24号', 'b66617d0-136e-11ec-b124-5cc5d484c924');
INSERT INTO `recipientlist` VALUES ('480c90ea-1cfe-11ec-a23f-5cc5d484c924', '王明', '13366523412', '北京', '北京', '北京市海淀区人民大学南路1号', 'b66617ce-136e-11ec-b124-5cc5d484c924');
INSERT INTO `recipientlist` VALUES ('54e24060-1cff-11ec-a23f-5cc5d484c924', '戴红英', '18681341234', '北京', '北京', '北京市海淀区人民大学南路50号', 'b66617cf-136e-11ec-b124-5cc5d484c924');
INSERT INTO `recipientlist` VALUES ('59f03eec-1d00-11ec-a23f-5cc5d484c924', '张林', '13880125568', '湖南', '长沙', '长沙市岳麓区桃子湖路18号', 'b66617ee-136e-11ec-b124-5cc5d484c924');
INSERT INTO `recipientlist` VALUES ('7c637095-1cff-11ec-a23f-5cc5d484c924', '李明明', '13944685569', '陕西', '西安', '陕西省西安市咸宁西路21号', 'b66617d0-136e-11ec-b124-5cc5d484c924');
INSERT INTO `recipientlist` VALUES ('7e38b30a-1cfe-11ec-a23f-5cc5d484c924', '张敏明', '13366771234', '湖南', '长沙', '湖南省长沙市芙蓉中路120号', 'b66617ce-136e-11ec-b124-5cc5d484c924');
INSERT INTO `recipientlist` VALUES ('94d71b0d-1cff-11ec-a23f-5cc5d484c924', '张晓波', '13911227898', '陕西', '西安', '陕西省西安市咸宁西路25号', 'b66617d0-136e-11ec-b124-5cc5d484c924');
INSERT INTO `recipientlist` VALUES ('96966a95-1cfd-11ec-a23f-5cc5d484c924', '张三', '13555112342', '四川', '成都', '四川省成都市人民南路1号', 'b665a29c-136e-11ec-b124-5cc5d484c924');
INSERT INTO `recipientlist` VALUES ('a6174d42-1cfd-11ec-a23f-5cc5d484c924', '张若林', '13555112341', '四川', '成都', '四川省成都市人民南路2号', 'b665a29c-136e-11ec-b124-5cc5d484c924');
INSERT INTO `recipientlist` VALUES ('b3c072a8-1d0d-11ec-a23f-5cc5d484c924', '张晓梅', '13766889979', '四川', '成都', '四川省成都市东大街1号', 'b66617d1-136e-11ec-b124-5cc5d484c924');
INSERT INTO `recipientlist` VALUES ('ce99db7d-1d0d-11ec-a23f-5cc5d484c924', '李红梅', '13766889988', '四川', '成都', '四川省成都市东大街2号', 'b66617d1-136e-11ec-b124-5cc5d484c924');
INSERT INTO `recipientlist` VALUES ('eba298c1-1cfd-11ec-a23f-5cc5d484c924', '李四', '13612357894', '四川', '成都', '四川省成都市人民南路35号', 'b665f0be-136e-11ec-b124-5cc5d484c924');
INSERT INTO `recipientlist` VALUES ('f2194df0-1cff-11ec-a23f-5cc5d484c924', '刘金', '13788775646', '四川', '成都', '四川省成都市双流区机场路学府路一段24号', 'b66617ee-136e-11ec-b124-5cc5d484c924');

-- ----------------------------
-- Table structure for report
-- ----------------------------
DROP TABLE IF EXISTS `report`;
CREATE TABLE `report` (
  `cReportID` char(12) NOT NULL,
  `vReportName` varchar(200) DEFAULT NULL,
  `dBeginTime` datetime DEFAULT NULL,
  `dEndTime` datetime DEFAULT NULL,
  `dCreateTime` datetime DEFAULT NULL,
  PRIMARY KEY (`cReportID`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_0900_ai_ci;

-- ----------------------------
-- Records of report
-- ----------------------------
INSERT INTO `report` VALUES ('202109260001', '2021年销售报表', '2021-01-01 00:00:00', '2021-12-31 23:59:59', '2022-01-10 12:23:56');
INSERT INTO `report` VALUES ('202109260002', '2021年9月销售报表', '2021-09-01 00:00:00', '2021-09-30 23:59:59', '2021-10-05 10:45:23');

-- ----------------------------
-- Table structure for reportdetail
-- ----------------------------
DROP TABLE IF EXISTS `reportdetail`;
CREATE TABLE `reportdetail` (
  `cBookID` char(10) NOT NULL,
  `cReportID` char(12) NOT NULL,
  `iTotalNumber` int DEFAULT NULL,
  `mTotalMoney` decimal(10,1) DEFAULT NULL,
  PRIMARY KEY (`cBookID`,`cReportID`),
  KEY `RefReport48` (`cReportID`),
  CONSTRAINT `RefBooks47` FOREIGN KEY (`cBookID`) REFERENCES `books` (`cBookID`),
  CONSTRAINT `RefReport48` FOREIGN KEY (`cReportID`) REFERENCES `report` (`cReportID`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_0900_ai_ci;

-- ----------------------------
-- Records of reportdetail
-- ----------------------------
INSERT INTO `reportdetail` VALUES ('2109010004', '202109260001', '1', '44.0');
INSERT INTO `reportdetail` VALUES ('2109010005', '202109260001', '2', '162.0');
INSERT INTO `reportdetail` VALUES ('2109010005', '202109260002', '2', '162.0');
INSERT INTO `reportdetail` VALUES ('2109010006', '202109260001', '100', '4700.0');
INSERT INTO `reportdetail` VALUES ('2109010006', '202109260002', '100', '4700.0');
INSERT INTO `reportdetail` VALUES ('2109010007', '202109260001', '1', '52.0');
INSERT INTO `reportdetail` VALUES ('2109010007', '202109260002', '1', '52.0');
INSERT INTO `reportdetail` VALUES ('2109010008', '202109260001', '51', '1989.0');
INSERT INTO `reportdetail` VALUES ('2109010008', '202109260002', '51', '1989.0');
INSERT INTO `reportdetail` VALUES ('2109020001', '202109260001', '1', '64.0');
INSERT INTO `reportdetail` VALUES ('2109020001', '202109260002', '1', '64.0');
INSERT INTO `reportdetail` VALUES ('2109020002', '202109260001', '2', '74.0');
INSERT INTO `reportdetail` VALUES ('2109020002', '202109260002', '2', '74.0');
INSERT INTO `reportdetail` VALUES ('2109020003', '202109260001', '4', '192.0');
INSERT INTO `reportdetail` VALUES ('2109020003', '202109260002', '4', '192.0');
INSERT INTO `reportdetail` VALUES ('2109020004', '202109260001', '2', '98.0');
INSERT INTO `reportdetail` VALUES ('2109020004', '202109260002', '2', '98.0');
INSERT INTO `reportdetail` VALUES ('2109020005', '202109260001', '2', '56.0');
INSERT INTO `reportdetail` VALUES ('2109020005', '202109260002', '2', '56.0');
INSERT INTO `reportdetail` VALUES ('2109080001', '202109260001', '2', '56.0');
INSERT INTO `reportdetail` VALUES ('2109080001', '202109260002', '2', '56.0');
INSERT INTO `reportdetail` VALUES ('2109080002', '202109260001', '1', '33.0');
INSERT INTO `reportdetail` VALUES ('2109080002', '202109260002', '1', '33.0');
INSERT INTO `reportdetail` VALUES ('2109080003', '202109260001', '2', '120.0');
INSERT INTO `reportdetail` VALUES ('2109080003', '202109260002', '2', '120.0');
INSERT INTO `reportdetail` VALUES ('2109080005', '202109260001', '1', '59.8');
INSERT INTO `reportdetail` VALUES ('2109080005', '202109260002', '1', '59.8');
INSERT INTO `reportdetail` VALUES ('2109080006', '202109260001', '1', '54.4');
INSERT INTO `reportdetail` VALUES ('2109080006', '202109260002', '1', '54.4');
INSERT INTO `reportdetail` VALUES ('2109080008', '202109260001', '2', '40.0');

-- ----------------------------
-- Table structure for shoppingcart
-- ----------------------------
DROP TABLE IF EXISTS `shoppingcart`;
CREATE TABLE `shoppingcart` (
  `cCustomerID` char(36) NOT NULL,
  `cBookID` char(10) NOT NULL,
  `siQty` smallint NOT NULL,
  `dShoppingTime` datetime DEFAULT NULL,
  PRIMARY KEY (`cCustomerID`,`cBookID`),
  KEY `RefBooks30` (`cBookID`),
  CONSTRAINT `RefBooks30` FOREIGN KEY (`cBookID`) REFERENCES `books` (`cBookID`),
  CONSTRAINT `RefCustomer29` FOREIGN KEY (`cCustomerID`) REFERENCES `customer` (`cCustomerID`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_0900_ai_ci;

-- ----------------------------
-- Records of shoppingcart
-- ----------------------------
INSERT INTO `shoppingcart` VALUES ('b665a29c-136e-11ec-b124-5cc5d484c924', '2109010001', '1', '2021-09-24 09:30:13');
INSERT INTO `shoppingcart` VALUES ('b665f0be-136e-11ec-b124-5cc5d484c924', '2109020001', '1', '2021-09-20 10:04:45');
INSERT INTO `shoppingcart` VALUES ('b66617ce-136e-11ec-b124-5cc5d484c924', '2109020005', '10', '2021-09-18 15:34:45');
INSERT INTO `shoppingcart` VALUES ('b66617cf-136e-11ec-b124-5cc5d484c924', '2109010003', '1', '2021-09-17 16:24:25');
INSERT INTO `shoppingcart` VALUES ('b66617cf-136e-11ec-b124-5cc5d484c924', '2109010008', '1', '2021-09-16 16:20:18');
INSERT INTO `shoppingcart` VALUES ('b66617d0-136e-11ec-b124-5cc5d484c924', '2109080002', '20', '2021-09-14 18:23:45');
INSERT INTO `shoppingcart` VALUES ('b66617d1-136e-11ec-b124-5cc5d484c924', '2109080006', '1', '2021-09-13 09:23:56');
INSERT INTO `shoppingcart` VALUES ('b66617ee-136e-11ec-b124-5cc5d484c924', '2109080008', '1', '2021-09-10 09:24:45');
